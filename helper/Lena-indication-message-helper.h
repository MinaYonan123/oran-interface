
#ifndef LENA_INDICATION_MESSAGE_HELPER_H
#define LENA_INDICATION_MESSAGE_HELPER_H

#include <ns3/indication-message-helper.h>

namespace ns3 {
class LenaIndicationMessageHelper : public IndicationMessageHelper
{
public:
   LenaIndicationMessageHelper (IndicationMessageType type, bool isOffline, bool reducedPmValues);
   ~LenaIndicationMessageHelper ();


  void AddPdcpUePmItem (std::string ueImsiComplete, long txPdcpPduBytesNrRlc, long txPdcpPduNrRlc);
  void AddPdcpCpUePmItem ();
  void AddRlcUePmItem ();
  void AddMacUePmItem ();
  void AddPhyUePmItem ();
  void AddPdcpGnbPmItem ();
  void AddPdcpCpGnbPmItem ();
  void AddRlcGnbPmItem ();
  void AddMacGnbPmItem ();
  void AddPhyGnbPmItem ();
};
} // namespace ns3
#endif /* LENA_INDICATION_MESSAGE_HELPER_H */
 