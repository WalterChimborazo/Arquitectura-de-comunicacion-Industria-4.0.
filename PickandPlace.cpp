/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: PickandPlace
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2022-10-18/walto -  - 
 *************************************************************************/

#include "PickandPlace.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "PickandPlace_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_PickandPlace, g_nStringIdPickandPlace)

const CStringDictionary::TStringId FORTE_PickandPlace::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdItem_at_entry, g_nStringIdItem_at_exit, g_nStringIdMoving_X, g_nStringIdMoving_Z, g_nStringIdItem_detected, g_nStringIdStart, g_nStringIdStop, g_nStringIdR1, g_nStringIdR2, g_nStringIdCondiciones_iniciales};

const CStringDictionary::TStringId FORTE_PickandPlace::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_PickandPlace::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdEntry_conveyor, g_nStringIdExit_conveyor, g_nStringIdMove_X, g_nStringIdMove_Z, g_nStringIdGrab, g_nStringIdEmiter, g_nStringIdCounter};

const CStringDictionary::TStringId FORTE_PickandPlace::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT};

const TDataIOID FORTE_PickandPlace::scm_anEIWith[] = {0, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 255};
const TForteInt16 FORTE_PickandPlace::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_PickandPlace::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_PickandPlace::scm_anEOWith[] = {0, 255, 0, 1, 2, 3, 4, 5, 7, 6, 255};
const TForteInt16 FORTE_PickandPlace::scm_anEOWithIndexes[] = {0, 2, -1, -1};
const CStringDictionary::TStringId FORTE_PickandPlace::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF, g_nStringIdSet_Temporizador, g_nStringIdReset_Temporizador};


const SFBInterfaceSpec FORTE_PickandPlace::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  4, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  11, scm_anDataInputNames, scm_anDataInputTypeIds,
  8, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_PickandPlace::setInitialValues() {
}

void FORTE_PickandPlace::alg_ALG1(void) {
  st_QO() = true;
}

void FORTE_PickandPlace::alg_ALG2(void) {
  st_Entry_conveyor() = false;
  st_Exit_conveyor() = false;
  st_Move_X() = false;
  st_Move_Z() = false;
  st_Grab() = false;
  st_Counter() = 0;
}

void FORTE_PickandPlace::alg_ALG3(void) {
  st_Entry_conveyor() = true;
  if((! st_Stop())) {
  	st_Emiter() = true;
  }
  else {
  	st_Emiter() = false;
  }
}

void FORTE_PickandPlace::alg_ALG4(void) {
  st_Entry_conveyor() = false;
  st_Move_Z() = true;
}

void FORTE_PickandPlace::alg_ALG5(void) {
  st_Grab() = true;
  st_Move_Z() = false;
}

void FORTE_PickandPlace::alg_ALG6(void) {
  st_Move_X() = true;
  st_Exit_conveyor() = false;
}

void FORTE_PickandPlace::alg_ALG7(void) {
  st_Move_Z() = true;
}

void FORTE_PickandPlace::alg_ALG8(void) {
  st_Move_Z() = false;
  st_Grab() = false;
  st_Counter() = ADD(st_Counter(), 1);
}

void FORTE_PickandPlace::alg_ALG9(void) {
  st_Exit_conveyor() = true;
  st_Entry_conveyor() = true;
  st_Move_X() = false;
}

void FORTE_PickandPlace::alg_ALG10(void) {
}

void FORTE_PickandPlace::alg_ALG11(void) {
}


void FORTE_PickandPlace::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_PickandPlace::enterStateEstado_1(void) {
  m_nECCState = scm_nStateEstado_1;
  alg_ALG1();
  sendOutputEvent(scm_nEventINITOID);
}

void FORTE_PickandPlace::enterStateEstado_2(void) {
  m_nECCState = scm_nStateEstado_2;
}

void FORTE_PickandPlace::enterStateEstado_3(void) {
  m_nECCState = scm_nStateEstado_3;
  alg_ALG2();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_PickandPlace::enterStateEstado_4(void) {
  m_nECCState = scm_nStateEstado_4;
  alg_ALG3();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_PickandPlace::enterStateEstado_5(void) {
  m_nECCState = scm_nStateEstado_5;
  alg_ALG4();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_PickandPlace::enterStateEstado_6(void) {
  m_nECCState = scm_nStateEstado_6;
  alg_ALG5();
  sendOutputEvent(scm_nEventCNFID);
  sendOutputEvent(scm_nEventSet_TemporizadorID);
}

void FORTE_PickandPlace::enterStateEstado_7(void) {
  m_nECCState = scm_nStateEstado_7;
  alg_ALG6();
  sendOutputEvent(scm_nEventCNFID);
  sendOutputEvent(scm_nEventReset_TemporizadorID);
}

void FORTE_PickandPlace::enterStateState(void) {
  m_nECCState = scm_nStateState;
  alg_ALG7();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_PickandPlace::enterStateState_1(void) {
  m_nECCState = scm_nStateState_1;
  alg_ALG8();
  sendOutputEvent(scm_nEventCNFID);
  sendOutputEvent(scm_nEventSet_TemporizadorID);
}

void FORTE_PickandPlace::enterStateState_2(void) {
  m_nECCState = scm_nStateState_2;
  alg_ALG9();
  sendOutputEvent(scm_nEventCNFID);
  sendOutputEvent(scm_nEventReset_TemporizadorID);
}

void FORTE_PickandPlace::enterStateState_3(void) {
  m_nECCState = scm_nStateState_3;
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_PickandPlace::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if((scm_nEventINITID == pa_nEIID) && (st_QI()))
          enterStateEstado_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_1:
        if((scm_nEventINITID == pa_nEIID) && ((! st_QI())))
          enterStateEstado_2();
        else
        if(scm_nEventREQID == pa_nEIID)
          enterStateEstado_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_2:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_3:
        if((scm_nEventREQID == pa_nEIID) && (st_Start()))
          enterStateEstado_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_4:
        if((scm_nEventREQID == pa_nEIID) && (st_Item_at_entry()))
          enterStateEstado_5();
        else
        if((scm_nEventREQID == pa_nEIID) && (st_Condiciones_iniciales()))
          enterStateEstado_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_5:
        if((scm_nEventREQID == pa_nEIID) && (st_Item_detected()))
          enterStateEstado_6();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_6:
        if((scm_nEventREQID == pa_nEIID) && ((st_R1() && (! st_Moving_Z()))))
          enterStateEstado_7();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_7:
        if((scm_nEventREQID == pa_nEIID) && ((st_R2() && (! st_Moving_X()))))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((scm_nEventREQID == pa_nEIID) && (st_Item_at_exit()))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((scm_nEventREQID == pa_nEIID) && ((st_R1() && (! st_Moving_Z()))))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if((scm_nEventREQID == pa_nEIID) && ((st_R2() && (! st_Moving_X()))))
          enterStateState_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if(1)
          enterStateEstado_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 12.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


