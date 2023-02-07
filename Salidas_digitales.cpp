/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Salidas_digitales
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2022-10-19/walto -  - 
 *************************************************************************/

#include "Salidas_digitales.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>
#include "codigo_fuente.h"
#include <iostream>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Salidas_digitales_gen.cpp"
#endif

using namespace std;

DEFINE_FIRMWARE_FB(FORTE_Salidas_digitales, g_nStringIdSalidas_digitales)

const CStringDictionary::TStringId FORTE_Salidas_digitales::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS, g_nStringIdDato_salida};

const CStringDictionary::TStringId FORTE_Salidas_digitales::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Salidas_digitales::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_Salidas_digitales::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const TDataIOID FORTE_Salidas_digitales::scm_anEIWith[] = {0, 1, 255, 0, 2, 255};
const TForteInt16 FORTE_Salidas_digitales::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Salidas_digitales::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Salidas_digitales::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_Salidas_digitales::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Salidas_digitales::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Salidas_digitales::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

string QO[] = { "Q0.0", "Q0.1", "Q0.2", "Q0.3", "Q0.4", "Q0.5",
"Q0.6", "Q0.7", "Q1.0", "Q1.1", "Q1.2", "Q1.3", "Q1.4", "Q1.5", "Q1.6", "Q1.7" };

bool datos[16];

void FORTE_Salidas_digitales::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventINITID:
		inicial_digital();
		st_QO() = st_QI();
		st_STATUS() = "OK";
		sendOutputEvent(scm_nEventINITOID);
		break;
	case scm_nEventREQID:
		if (st_QI() == true)
		{
			int j = 0;
			while (j < 16)
			{
				if (QO[j] == st_PARAMS().getValue())
				{
					datos[j] = st_OUT();
					envio_digital(datos);
					break;
				}
				else {
					j++;
				}
			}
		}
		else
		{
			salida_digital();
		}
		sendOutputEvent(scm_nEventCNFID);

      break;
  }
}


