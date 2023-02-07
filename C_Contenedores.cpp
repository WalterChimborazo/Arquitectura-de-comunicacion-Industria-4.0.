/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: C_Contenedores
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2022-11-18/walto -  - 
 *************************************************************************/

#include "C_Contenedores.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "C_Contenedores_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_C_Contenedores, g_nStringIdC_Contenedores)

const CStringDictionary::TStringId FORTE_C_Contenedores::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS};

const CStringDictionary::TStringId FORTE_C_Contenedores::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_C_Contenedores::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_C_Contenedores::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const TDataIOID FORTE_C_Contenedores::scm_anEIWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_C_Contenedores::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_C_Contenedores::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_C_Contenedores::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_C_Contenedores::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_C_Contenedores::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_C_Contenedores::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_C_Contenedores::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventINITID:
      #error add code for INIT event!
      /*
        do not forget to send output event, calling e.g.
          sendOutputEvent(scm_nEventCNFID);
      */
      break;
    case scm_nEventREQID:
      #error add code for REQ event!
      /*
        do not forget to send output event, calling e.g.
          sendOutputEvent(scm_nEventCNFID);
      */
      break;
  }
}


