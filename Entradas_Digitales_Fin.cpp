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

#include "Entradas_Digitales_Fin.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Entradas_Digitales_Fin_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Entradas_Digitales_Fin, g_nStringIdEntradas_Digitales_Fin)

const CStringDictionary::TStringId FORTE_Entradas_Digitales_Fin::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS1, g_nStringIdPARAMS2, g_nStringIdPARAMS3, g_nStringIdPARAMS4, g_nStringIdPARAMS5, g_nStringIdPARAMS6, g_nStringIdPARAMS7, g_nStringIdPARAMS8, g_nStringIdPARAMS9, g_nStringIdPARAMS10, g_nStringIdPARAMS11, g_nStringIdPARAMS12, g_nStringIdPARAMS13};

const CStringDictionary::TStringId FORTE_Entradas_Digitales_Fin::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_Entradas_Digitales_Fin::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdD_IN1, g_nStringIdD_IN2, g_nStringIdD_IN3, g_nStringIdD_IN4, g_nStringIdD_IN5, g_nStringIdD_IN6, g_nStringIdD_IN7, g_nStringIdD_IN8, g_nStringIdD_IN9, g_nStringIdD_IN10, g_nStringIdD_IN11, g_nStringIdD_IN12, g_nStringIdD_IN13};

const CStringDictionary::TStringId FORTE_Entradas_Digitales_Fin::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_Entradas_Digitales_Fin::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 255, 0, 255};
const TForteInt16 FORTE_Entradas_Digitales_Fin::scm_anEIWithIndexes[] = {0, 15};
const CStringDictionary::TStringId FORTE_Entradas_Digitales_Fin::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Entradas_Digitales_Fin::scm_anEOWith[] = {0, 255, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 255};
const TForteInt16 FORTE_Entradas_Digitales_Fin::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Entradas_Digitales_Fin::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Entradas_Digitales_Fin::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  14, scm_anDataInputNames, scm_anDataInputTypeIds,
  15, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Entradas_Digitales_Fin::scm_astInternalFBs[] = {
  {g_nStringIdEntradas_digitales, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_1, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_2, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_3, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_4, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_5, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_6, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_7, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_8, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_9, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_10, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_11, g_nStringIdEntradas_digitales},
  {g_nStringIdEntradas_digitales_12, g_nStringIdEntradas_digitales}
};


const SCFB_FBConnectionData FORTE_Entradas_Digitales_Fin::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdINIT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdINITO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdINIT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdINITO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdINIT), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdINITO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdINIT), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdINITO), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdINIT), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdINITO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdINIT), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdINITO), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdINIT), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdINITO), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdINIT), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdINITO), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Entradas_Digitales_Fin::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdPARAMS), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdPARAMS), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdPARAMS), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdPARAMS), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS5), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdPARAMS), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdQI), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS6), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdPARAMS), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdQO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdQI), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS7), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdPARAMS), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS8), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdPARAMS), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdQO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdQI), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS9), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdPARAMS), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdQO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdQI), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdQO), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdQI), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS10), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdPARAMS), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdQO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdQI), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS11), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdPARAMS), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdQO), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdQI), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdQO), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdQI), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS12), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdPARAMS), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS13), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdPARAMS), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_1, g_nStringIdDato_entrada), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales, g_nStringIdDato_entrada), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdQO), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdSTATUS), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_2, g_nStringIdDato_entrada), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_3, g_nStringIdDato_entrada), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN4), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_4, g_nStringIdDato_entrada), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN5), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_5, g_nStringIdDato_entrada), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN6), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_6, g_nStringIdDato_entrada), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN7), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_7, g_nStringIdDato_entrada), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN8), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_8, g_nStringIdDato_entrada), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN9), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_9, g_nStringIdDato_entrada), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN10), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_10, g_nStringIdDato_entrada), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN11), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_11, g_nStringIdDato_entrada), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN12), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEntradas_digitales_12, g_nStringIdDato_entrada), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdD_IN13), -1},
};

const SCFB_FBNData FORTE_Entradas_Digitales_Fin::scm_stFBNData = {
  13, scm_astInternalFBs,
  28, scm_astEventConnections,
  0, nullptr,
  41, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



