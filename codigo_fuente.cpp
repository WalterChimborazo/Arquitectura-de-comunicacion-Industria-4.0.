#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>
#include <iostream>
#include "codigo_fuente.h"
#pragma comment(lib, "user32.lib")
#define BASE_MEM     (VOID*)0x01000000
#define BUF_SIZE_DIGITAL 256
#define BUF_SIZE_ANALOG 256

using namespace std;

TCHAR sz_digital[] = TEXT("Local\\Digital");
TCHAR sz_analog[]=TEXT("Local\\Analog");

HANDLE hMapFile_digital;
HANDLE hMapFile_analog;
HANDLE	mutex_digital = INVALID_HANDLE_VALUE;
LPCTSTR pBuf_digital;
LPCTSTR pBuf_analog;

typedef struct digital 
{
	bool I0_0, I0_1, I0_2, I0_3, I0_4, I0_5, I0_6, I0_7;
	bool I1_0, I1_1, I1_2, I1_3, I1_4, I1_5, I1_6, I1_7;
	bool Q0_0, Q0_1, Q0_2, Q0_3, Q0_4, Q0_5, Q0_6, Q0_7;
	bool Q1_0, Q1_1, Q1_2, Q1_3, Q1_4, Q1_5, Q1_6, Q1_7;
} DIGITALS;
DIGITALS *digitalsptr;
typedef struct analog 
{
	int AI_0, AI_1, AI_2, AI_3;
    int AQ_0, AQ_1;
	
} ANALOGS;
ANALOGS *analogsptr;

void inicial_digital()
{
    mutex_digital = ::CreateMutex(NULL, FALSE, "mutex_digital");
    digitalsptr = (DIGITALS*)malloc(sizeof(DIGITALS));
    hMapFile_digital = CreateFileMapping(
        INVALID_HANDLE_VALUE,    
        NULL,                    
        PAGE_READWRITE,          
        0,                       
        BUF_SIZE_DIGITAL,                
        sz_digital);
	
    digitalsptr = (DIGITALS*)MapViewOfFile(hMapFile_digital, 
        FILE_MAP_ALL_ACCESS, 
        0,
        0,
        BUF_SIZE_DIGITAL);
    
    pBuf_digital = (LPTSTR)MapViewOfFile(hMapFile_digital,   
        FILE_MAP_ALL_ACCESS, 
        0,
        0,
        BUF_SIZE_DIGITAL);

        }
void inicial_analog()
{
    mutex_digital = ::CreateMutex(NULL, FALSE, "mutex_digital");
    analogsptr = (ANALOGS*)malloc(sizeof(ANALOGS));

    hMapFile_analog = CreateFileMapping(
                 INVALID_HANDLE_VALUE,    // use paging file
                 NULL,                    // default security
                 PAGE_READWRITE,          // read/write access
                 0,                       // maximum object size (high-order DWORD)
                 BUF_SIZE_ANALOG,                // maximum object size (low-order DWORD)
                 sz_analog);   

	
    analogsptr = (ANALOGS *) MapViewOfFile(hMapFile_analog, // handle to map object
               FILE_MAP_ALL_ACCESS,  // read/write permission
               0,
               0,
               BUF_SIZE_ANALOG);
    
    pBuf_analog = (LPTSTR) MapViewOfFile(hMapFile_analog,   // handle to map object
                        FILE_MAP_ALL_ACCESS, // read/write permission
                        0,
                        0,
                        BUF_SIZE_ANALOG);
}

bool* obtencion_digital()
{
	CopyMemory((PVOID)pBuf_digital, digitalsptr, (sizeof(DIGITALS)));
	//WaitForSingleObject(mutex_digital, INFINITE);
	bool * vec1 = new bool[16]{digitalsptr->I0_0, digitalsptr->I0_1, digitalsptr->I0_2, digitalsptr->I0_3, 
	digitalsptr->I0_4, digitalsptr->I0_5, digitalsptr->I0_6, digitalsptr->I0_7, digitalsptr->I1_0,
	digitalsptr->I1_1, digitalsptr->I1_2, digitalsptr->I1_3, digitalsptr->I1_4, digitalsptr->I1_5,
	digitalsptr->I1_6, digitalsptr->I1_7
	};
	//::ReleaseMutex(mutex_digital);
    //::Sleep(100);
    return vec1;
}

int* obtencion_analog()
{
	CopyMemory((PVOID)pBuf_analog, analogsptr, (sizeof(ANALOGS)));
	//WaitForSingleObject(mutex_digital, INFINITE);
	int * vec2 = new int[4]{analogsptr->AI_0, analogsptr->AI_1, analogsptr->AI_2, analogsptr->AI_3};
	//::ReleaseMutex(mutex_digital);
    //::Sleep(100);
    return vec2;
}

void envio_digital(bool datos[16])
{
	
    digitalsptr->Q0_0 = datos[0];
    digitalsptr->Q0_1 = datos[1];
    digitalsptr->Q0_2 = datos[2];
    digitalsptr->Q0_3 = datos[3];
	digitalsptr->Q0_4 = datos[4];
    digitalsptr->Q0_5 = datos[5];
    digitalsptr->Q0_6 = datos[6];
    digitalsptr->Q0_7 = datos[7];
    digitalsptr->Q1_0 = datos[8];
    digitalsptr->Q1_1 = datos[9];
    digitalsptr->Q1_2 = datos[10];
    digitalsptr->Q1_3 = datos[11];
	digitalsptr->Q1_4 = datos[12];
    digitalsptr->Q1_5 = datos[13];
    digitalsptr->Q1_6 = datos[14];
    digitalsptr->Q1_7 = datos[15];
	
}

void envio_analog(int analog[2])
{

    analogsptr->AQ_0 = analog[0];
    analogsptr->AQ_1 = analog[1];
	
}

void salida_digital()
{
    ::UnmapViewOfFile(digitalsptr);
    ::CloseHandle(hMapFile_digital);
    ::ReleaseMutex(mutex_digital);
}
void salida_analog()
{
    ::UnmapViewOfFile(analogsptr);
    ::CloseHandle(hMapFile_analog);
    ::ReleaseMutex(mutex_digital);
}
