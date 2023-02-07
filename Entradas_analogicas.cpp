/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Entradas_analogicas
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2022-10-19/walto -  - 
 *************************************************************************/

#include "Entradas_analogicas.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>
#include "codigo_fuente.h"
#include <iostream>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Entradas_analogicas_gen.cpp"
#endif

using namespace std;

DEFINE_FIRMWARE_FB(FORTE_Entradas_analogicas, g_nStringIdEntradas_analogicas)

const CStringDictionary::TStringId FORTE_Entradas_analogicas::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS};

const CStringDictionary::TStringId FORTE_Entradas_analogicas::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_Entradas_analogicas::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdDato_entrada};

const CStringDictionary::TStringId FORTE_Entradas_analogicas::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdINT};

const TDataIOID FORTE_Entradas_analogicas::scm_anEIWith[] = {0, 1, 255, 0, 255};
const TForteInt16 FORTE_Entradas_analogicas::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Entradas_analogicas::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Entradas_analogicas::scm_anEOWith[] = {0, 1, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_Entradas_analogicas::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Entradas_analogicas::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Entradas_analogicas::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

string AI[] = { "AI0", "AI1", "AI2", "AI3" };

void FORTE_Entradas_analogicas::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventINITID:
		inicial_analog();
		st_QO() = st_QI();
		st_STATUS() = "OK";
		sendOutputEvent(scm_nEventINITOID);
		break;
	case scm_nEventREQID:
		if (st_QI() == true)
		{
			int i = 0;
			while (i < 8)
			{
				//cout<<st_PARAMS().getValue()<<" iteracion "<<i<<endl;
				if (AI[i] == st_PARAMS().getValue())
				{
					st_IN() = obtencion_analog()[i];
					break;
				}
				else {
					i++;
				}

			}
		}
		else
		{
			salida_analog();
		}
		sendOutputEvent(scm_nEventCNFID);

      break;
  }
}


