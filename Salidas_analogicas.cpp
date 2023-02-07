/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Salidas_analogicas
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2022-10-19/walto -  - 
 *************************************************************************/

#include "Salidas_analogicas.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>
#include "codigo_fuente.h"
#include <iostream>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Salidas_analogicas_gen.cpp"
#endif

using namespace std;

DEFINE_FIRMWARE_FB(FORTE_Salidas_analogicas, g_nStringIdSalidas_analogicas)

const CStringDictionary::TStringId FORTE_Salidas_analogicas::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS, g_nStringIdDato_salida};

const CStringDictionary::TStringId FORTE_Salidas_analogicas::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_Salidas_analogicas::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_Salidas_analogicas::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const TDataIOID FORTE_Salidas_analogicas::scm_anEIWith[] = {0, 1, 255, 0, 2, 255};
const TForteInt16 FORTE_Salidas_analogicas::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Salidas_analogicas::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Salidas_analogicas::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_Salidas_analogicas::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Salidas_analogicas::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Salidas_analogicas::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

string AO[] = { "AO0", "AO1" };

int analog[2];

void FORTE_Salidas_analogicas::executeEvent(int pa_nEIID) {
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
			int j = 0;
			while (j < 2)
			{
				if (AO[j] == st_PARAMS().getValue())
				{
					analog[j] = st_OUT();
					envio_analog(analog);
					break;
				}
				else {
					j++;
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


