/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Entradas_Digitales_Fin
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2022-11-02/walto -  - 
 *************************************************************************/

#ifndef _ENTRADAS_DIGITALES_FIN_H_
#define _ENTRADAS_DIGITALES_FIN_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_string.h"
#include "forte_array_at.h"


class FORTE_Entradas_Digitales_Fin: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Entradas_Digitales_Fin)

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

  static const SCFB_FBInstanceData scm_astInternalFBs[];
  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_BOOL &st_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_STRING &st_PARAMS1() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  }
  
  CIEC_STRING &st_PARAMS2() {
    return *static_cast<CIEC_STRING*>(getDI(2));
  }
  
  CIEC_STRING &st_PARAMS3() {
    return *static_cast<CIEC_STRING*>(getDI(3));
  }
  
  CIEC_STRING &st_PARAMS4() {
    return *static_cast<CIEC_STRING*>(getDI(4));
  }
  
  CIEC_STRING &st_PARAMS5() {
    return *static_cast<CIEC_STRING*>(getDI(5));
  }
  
  CIEC_STRING &st_PARAMS6() {
    return *static_cast<CIEC_STRING*>(getDI(6));
  }
  
  CIEC_STRING &st_PARAMS7() {
    return *static_cast<CIEC_STRING*>(getDI(7));
  }
  
  CIEC_STRING &st_PARAMS8() {
    return *static_cast<CIEC_STRING*>(getDI(8));
  }
  
  CIEC_STRING &st_PARAMS9() {
    return *static_cast<CIEC_STRING*>(getDI(9));
  }
  
  CIEC_STRING &st_PARAMS10() {
    return *static_cast<CIEC_STRING*>(getDI(10));
  }
  
  CIEC_STRING &st_PARAMS11() {
    return *static_cast<CIEC_STRING*>(getDI(11));
  }
  
  CIEC_STRING &st_PARAMS12() {
    return *static_cast<CIEC_STRING*>(getDI(12));
  }
  
  CIEC_STRING &st_PARAMS13() {
    return *static_cast<CIEC_STRING*>(getDI(13));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_STRING &st_STATUS() {
    return *static_cast<CIEC_STRING*>(getDO(1));
  }
  
  CIEC_BOOL &st_D_IN1() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_D_IN2() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_D_IN3() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_D_IN4() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_D_IN5() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_D_IN6() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  
  CIEC_BOOL &st_D_IN7() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  }
  
  CIEC_BOOL &st_D_IN8() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  }
  
  CIEC_BOOL &st_D_IN9() {
    return *static_cast<CIEC_BOOL*>(getDO(10));
  }
  
  CIEC_BOOL &st_D_IN10() {
    return *static_cast<CIEC_BOOL*>(getDO(11));
  }
  
  CIEC_BOOL &st_D_IN11() {
    return *static_cast<CIEC_BOOL*>(getDO(12));
  }
  
  CIEC_BOOL &st_D_IN12() {
    return *static_cast<CIEC_BOOL*>(getDO(13));
  }
  
  CIEC_BOOL &st_D_IN13() {
    return *static_cast<CIEC_BOOL*>(getDO(14));
  }
  

  FORTE_FB_DATA_ARRAY(2, 14, 15, 0);

public:
  FORTE_Entradas_Digitales_Fin(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Entradas_Digitales_Fin() = default;
};

#endif // _ENTRADAS_DIGITALES_FIN_H_


