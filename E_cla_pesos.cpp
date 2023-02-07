/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: E_cla_pesos
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2022-10-19/walto -  - 
 *************************************************************************/

#include "E_cla_pesos.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "E_cla_pesos_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_E_cla_pesos, g_nStringIdE_cla_pesos)

const CStringDictionary::TStringId FORTE_E_cla_pesos::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdStart, g_nStringIdStop, g_nStringIdHigh_sensor, g_nStringIdLow_sensor, g_nStringIdPallet_sensor, g_nStringIdLoad_sensor, g_nStringIdLeft_sensor, g_nStringIdRight_sensor, g_nStringIdCondiciones_iniciales};

const CStringDictionary::TStringId FORTE_E_cla_pesos::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_E_cla_pesos::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdEmiter_2, g_nStringIdBanda_input, g_nStringIdCT_load, g_nStringIdCT_left, g_nStringIdCT_right, g_nStringIdBanda_left, g_nStringIdBanda_right, g_nStringIdC_right, g_nStringIdC_left};

const CStringDictionary::TStringId FORTE_E_cla_pesos::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT};

const TDataIOID FORTE_E_cla_pesos::scm_anEIWith[] = {0, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255};
const TForteInt16 FORTE_E_cla_pesos::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_E_cla_pesos::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_E_cla_pesos::scm_anEOWith[] = {0, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255};
const TForteInt16 FORTE_E_cla_pesos::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_E_cla_pesos::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_E_cla_pesos::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  10, scm_anDataInputNames, scm_anDataInputTypeIds,
  10, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_E_cla_pesos::setInitialValues() {
}

void FORTE_E_cla_pesos::alg_initialize(void) {
  st_QO() = st_QI();
}

void FORTE_E_cla_pesos::alg_deInitialize(void) {
  st_QO() = false;
}

void FORTE_E_cla_pesos::alg_normalOperation(void) {
  st_QO() = st_QI();
  if((true == st_QI())) {
  }
}

void FORTE_E_cla_pesos::alg_ALG1(void) {
  st_QO() = true;
}

void FORTE_E_cla_pesos::alg_ALG2(void) {
  st_Emiter_2() = false;
  st_Banda_input() = false;
  st_CT_load() = false;
  st_CT_left() = false;
  st_CT_right() = false;
  st_Banda_left() = false;
  st_Banda_right() = false;
  st_C_right() = 0;
  st_C_left() = 0;
}

void FORTE_E_cla_pesos::alg_ALG3(void) {
  st_Banda_input() = true;
  if((! st_Stop())) {
  	st_Emiter_2() = true;
  }
  else {
  	st_Emiter_2() = false;
  }
}

void FORTE_E_cla_pesos::alg_ALG4(void) {
  st_CT_load() = true;
}

void FORTE_E_cla_pesos::alg_ALG5(void) {
  st_CT_load() = true;
}

void FORTE_E_cla_pesos::alg_ALG6(void) {
  st_CT_load() = false;
  st_Banda_input() = false;
  st_CT_left() = true;
}

void FORTE_E_cla_pesos::alg_ALG7(void) {
  st_CT_load() = false;
  st_Banda_input() = false;
  st_CT_right() = true;
}

void FORTE_E_cla_pesos::alg_ALG8(void) {
  st_Banda_left() = true;
}

void FORTE_E_cla_pesos::alg_ALG9(void) {
  st_Banda_right() = true;
}

void FORTE_E_cla_pesos::alg_ALG10(void) {
  st_CT_left() = false;
  st_C_left() = ADD(st_C_left(), 1);
}

void FORTE_E_cla_pesos::alg_ALG11(void) {
  st_CT_right() = false;
  st_C_right() = ADD(st_C_right(), 1);
}

void FORTE_E_cla_pesos::alg_ALG12(void) {
}


void FORTE_E_cla_pesos::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_E_cla_pesos::enterStateEstado_1(void) {
  m_nECCState = scm_nStateEstado_1;
  alg_ALG1();
  sendOutputEvent(scm_nEventINITOID);
}

void FORTE_E_cla_pesos::enterStateEstado_2(void) {
  m_nECCState = scm_nStateEstado_2;
}

void FORTE_E_cla_pesos::enterStateEstado_3(void) {
  m_nECCState = scm_nStateEstado_3;
  alg_ALG2();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_4(void) {
  m_nECCState = scm_nStateEstado_4;
  alg_ALG3();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_5(void) {
  m_nECCState = scm_nStateEstado_5;
  alg_ALG4();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_6(void) {
  m_nECCState = scm_nStateEstado_6;
  alg_ALG5();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_7(void) {
  m_nECCState = scm_nStateEstado_7;
  alg_ALG6();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_8(void) {
  m_nECCState = scm_nStateEstado_8;
  alg_ALG7();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_9(void) {
  m_nECCState = scm_nStateEstado_9;
  alg_ALG8();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_10(void) {
  m_nECCState = scm_nStateEstado_10;
  alg_ALG9();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_11(void) {
  m_nECCState = scm_nStateEstado_11;
  alg_ALG10();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_E_cla_pesos::enterStateEstado_12(void) {
  m_nECCState = scm_nStateEstado_12;
  alg_ALG11();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_E_cla_pesos::executeEvent(int pa_nEIID){
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
        if((scm_nEventREQID == pa_nEIID) && (((st_Pallet_sensor() && st_Low_sensor()) && (! st_High_sensor()))))
          enterStateEstado_5();
        else
        if((scm_nEventREQID == pa_nEIID) && ((st_Pallet_sensor() && st_High_sensor())))
          enterStateEstado_6();
        else
        if((scm_nEventREQID == pa_nEIID) && (st_Condiciones_iniciales()))
          enterStateEstado_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_5:
        if((scm_nEventREQID == pa_nEIID) && (st_Load_sensor()))
          enterStateEstado_7();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_6:
        if((scm_nEventREQID == pa_nEIID) && (st_Load_sensor()))
          enterStateEstado_8();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_7:
        if((scm_nEventREQID == pa_nEIID) && ((! st_Left_sensor())))
          enterStateEstado_9();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_8:
        if((scm_nEventREQID == pa_nEIID) && ((! st_Right_sensor())))
          enterStateEstado_10();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_9:
        if((scm_nEventREQID == pa_nEIID) && (st_Left_sensor()))
          enterStateEstado_11();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_10:
        if((scm_nEventREQID == pa_nEIID) && (st_Right_sensor()))
          enterStateEstado_12();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_11:
        if(1)
          enterStateEstado_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateEstado_12:
        if(1)
          enterStateEstado_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 13.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


