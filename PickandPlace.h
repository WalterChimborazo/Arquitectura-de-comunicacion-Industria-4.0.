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

#ifndef _PICKANDPLACE_H_
#define _PICKANDPLACE_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_int.h"
#include "forte_array_at.h"


class FORTE_PickandPlace: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_PickandPlace)

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
  static const TEventID scm_nEventSet_TemporizadorID = 2;
  static const TEventID scm_nEventReset_TemporizadorID = 3;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_BOOL &st_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_Item_at_entry() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_Item_at_exit() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_Moving_X() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_Moving_Z() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_Item_detected() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_Start() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_Stop() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_R1() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_R2() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_Condiciones_iniciales() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_Entry_conveyor() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_Exit_conveyor() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_Move_X() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_Move_Z() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_Grab() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_Emiter() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_INT &st_Counter() {
    return *static_cast<CIEC_INT*>(getDO(7));
  }
  

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

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateEstado_1 = 1;
  static const TForteInt16 scm_nStateEstado_2 = 2;
  static const TForteInt16 scm_nStateEstado_3 = 3;
  static const TForteInt16 scm_nStateEstado_4 = 4;
  static const TForteInt16 scm_nStateEstado_5 = 5;
  static const TForteInt16 scm_nStateEstado_6 = 6;
  static const TForteInt16 scm_nStateEstado_7 = 7;
  static const TForteInt16 scm_nStateState = 8;
  static const TForteInt16 scm_nStateState_1 = 9;
  static const TForteInt16 scm_nStateState_2 = 10;
  static const TForteInt16 scm_nStateState_3 = 11;
  
  void enterStateSTART(void);
  void enterStateEstado_1(void);
  void enterStateEstado_2(void);
  void enterStateEstado_3(void);
  void enterStateEstado_4(void);
  void enterStateEstado_5(void);
  void enterStateEstado_6(void);
  void enterStateEstado_7(void);
  void enterStateState(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(4, 11, 8, 0, 0);

public:
  FORTE_PickandPlace(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_PickandPlace() = default;
};

#endif // _PICKANDPLACE_H_


