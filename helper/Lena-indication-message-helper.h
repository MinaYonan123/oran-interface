
#ifndef LENA_INDICATION_MESSAGE_HELPER_H
#define LENA_INDICATION_MESSAGE_HELPER_H

#include <ns3/indication-message-helper.h>

namespace ns3 {
class LenaIndicationMessageHelper : public IndicationMessageHelper
{
public:
   LenaIndicationMessageHelper (IndicationMessageType type, bool isOffline, bool reducedPmValues);
   ~LenaIndicationMessageHelper ();


  void AddPdcpUePmItem (std::string ueImsiComplete, long txPdcpPduBytesNrRlc, long txPdcpPduNrRlc, double pdcpThroughput);
  void AddPdcpCpUePmItem ();
  void AddRlcUePmItem ();
  void AddMacUePmItem ();
  void AddPhyUePmItem ();
  void AddPHYGnbConfiguration (uint16_t numActiveUes, uint16_t cellId, uint16_t portsOn, uint16_t portsOff);
  void AddPdcpCpGnbPmItem ();
  void AddRlcGnbPmItem ();
  void AddMacGnbPmItem ();
  void AddPhyGnbPmItem ();
};
} // namespace ns3
#endif /* LENA_INDICATION_MESSAGE_HELPER_H */
 