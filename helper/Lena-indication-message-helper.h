
#ifndef LENA_INDICATION_MESSAGE_HELPER_H
#define LENA_INDICATION_MESSAGE_HELPER_H

#include <ns3/indication-message-helper.h>

namespace ns3 {
class LenaIndicationMessageHelper : public IndicationMessageHelper
{
public:
   LenaIndicationMessageHelper (IndicationMessageType type, bool isOffline, bool reducedPmValues);
   ~LenaIndicationMessageHelper ();

   void FillCuUpValues (std::string plmId);

  void AddCuUpUePmItem (std::string ueImsiComplete, long txPdcpPduBytesNrRlc, long txPdcpPduNrRlc);

  void FillCuCpValues (uint16_t numActiveUes);
};
} // namespace ns3
#endif /* LENA_INDICATION_MESSAGE_HELPER_H */
 