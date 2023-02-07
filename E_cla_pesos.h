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

#ifndef _E_CLA_PESOS_H_
#define _E_CLA_PESOS_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_int.h"
#include "forte_array_at.h"


class FORTE_E_cla_pesos: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_E_cla_pesos)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_BOOL &st_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_Start() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_Stop() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_High_sensor() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_Low_sensor() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_Pallet_sensor() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_Load_sensor() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_Left_sensor() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_Right_sensor() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_Condiciones_iniciales() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_Emiter_2() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_Banda_input() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_CT_load() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_CT_left() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_CT_right() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_Banda_left() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_Banda_right() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  
  CIEC_INT &st_C_right() {
    return *static_cast<CIEC_INT*>(getDO(8));
  }
  
  CIEC_INT &st_C_left() {
    return *static_cast<CIEC_INT*>(getDO(9));
  }
  

  void alg_initialize(void);
  void alg_deInitialize(void);
  void alg_normalOperation(void);
  void alg_ALG1(void);
  void alg_ALG2(void);
  void alg_ALG3(void);
  void alg_ALG4(void);
  void alg_ALG5(void);
  void alg_ALG6(void);
  void alg_ALG7(void);
  void alg_ALG8(void);
  void alg_ALG9(void);
  void alg_ALG10(void);
  void alg_ALG11(void);
  void alg_ALG12(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateEstado_1 = 1;
  static const TForteInt16 scm_nStateEstado_2 = 2;
  static const TForteInt16 scm_nStateEstado_3 = 3;
  static const TForteInt16 scm_nStateEstado_4 = 4;
  static const TForteInt16 scm_nStateEstado_5 = 5;
  static const TForteInt16 scm_nStateEstado_6 = 6;
  static const TForteInt16 scm_nStateEstado_7 = 7;
  static const TForteInt16 scm_nStateEstado_8 = 8;
  static const TForteInt16 scm_nStateEstado_9 = 9;
  static const TForteInt16 scm_nStateEstado_10 = 10;
  static const TForteInt16 scm_nStateEstado_11 = 11;
  static const TForteInt16 scm_nStateEstado_12 = 12;
  
  void enterStateSTART(void);
  void enterStateEstado_1(void);
  void enterStateEstado_2(void);
  void enterStateEstado_3(void);
  void enterStateEstado_4(void);
  void enterStateEstado_5(void);
  void enterStateEstado_6(void);
  void enterStateEstado_7(void);
  void enterStateEstado_8(void);
  void enterStateEstado_9(void);
  void enterStateEstado_10(void);
  void enterStateEstado_11(void);
  void enterStateEstado_12(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(2, 10, 10, 0, 0);

public:
  FORTE_E_cla_pesos(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_E_cla_pesos() = default;
};

#endif // _E_CLA_PESOS_H_


