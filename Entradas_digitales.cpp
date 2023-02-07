/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Entradas_digitales
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2022-10-19/walto -  - 
 *************************************************************************/

#include "Entradas_digitales.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>
#include "codigo_fuente.h"
#include <iostream>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Entradas_digitales_gen.cpp"
#endif

using namespace std;

DEFINE_FIRMWARE_FB(FORTE_Entradas_digitales, g_nStringIdEntradas_digitales)

const CStringDictionary::TStringId FORTE_Entradas_digitales::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS};

const CStringDictionary::TStringId FORTE_Entradas_digitales::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_Entradas_digitales::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdDato_entrada};

const CStringDictionary::TStringId FORTE_Entradas_digitales::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdBOOL};

const TDataIOID FORTE_Entradas_digitales::scm_anEIWith[] = {0, 1, 255, 0, 255};
const TForteInt16 FORTE_Entradas_digitales::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Entradas_digitales::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Entradas_digitales::scm_anEOWith[] = {0, 1, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_Entradas_digitales::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_Entradas_digitales::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Entradas_digitales::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

string IO[] = { "I0.0", "I0.1", "I0.2", "I0.3", "I0.4", "I0.5",
"I0.6", "I0.7", "I1.0", "I1.1", "I1.2", "I1.3", "I1.4", "I1.5", "I1.6", "I1.7" };


void FORTE_Entradas_digitales::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventINITID:
		inicial_digital();
		st_QO() = st_QI();
		st_STATUS() = "OK";
		sendOutputEvent(scm_nEventINITOID);
		break;
		break;
	case scm_nEventREQID:
		if (st_QI() == true)
		{
			int i = 0;
			while (i < 16)
			{
				if (IO[i] == st_PARAMS().getValue())
				{
					st_IN() = obtencion_digital()[i];
					break;
				}
				else {
					i++;
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


