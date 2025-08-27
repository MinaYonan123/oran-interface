/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2022 Northeastern University
 * Copyright (c) 2022 Sapienza, University of Rome
 * Copyright (c) 2022 University of Padova
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */


#include "Lena-indication-message-helper.h"

namespace ns3 {
LenaIndicationMessageHelper::LenaIndicationMessageHelper (IndicationMessageType type,
                                                                 bool isOffline, bool reducedPmValues)
    : IndicationMessageHelper (type, isOffline, reducedPmValues)
{
}   

void
LenaIndicationMessageHelper::AddPdcpUePmItem (std::string ueImsiComplete,
                                                long txPdcpPduBytesNrRlc, long txPdcpPduNrRlc)
{
  Ptr<MeasurementItemList> ueVal = Create<MeasurementItemList> (ueImsiComplete);
  if (!m_reducedPmValues)
    { 
      std::cout << "txPdcpPduBytesNrRlc"<< txPdcpPduBytesNrRlc << std ::endl;
      // UE-specific PDCP PDU volume transmitted to NR gNB (Unit is Kbits)
      ueVal->AddItem<long> ("QosFlow.PdcpPduVolumeDL_Filter.UEID", txPdcpPduBytesNrRlc);
  
      // UE-specific number of PDCP PDUs split with NR gNB
      ueVal->AddItem<long> ("DRB.PdcpPduNbrDl.Qos.UEID", txPdcpPduNrRlc);
    }

  m_msgValues.m_ueIndications.insert (ueVal);
}
void
LenaIndicationMessageHelper::AddPdcpCpUePmItem (){
  std::cout << "[DEBUG] AddPdcpCpUePmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddRlcUePmItem (){
  std::cout << "[DEBUG] AddRlcUePmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddMacUePmItem (){
  std::cout << "[DEBUG] AddMacUePmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddPhyUePmItem (){
  std::cout << "[DEBUG] AddPhyUePmItem called" << std::endl;
}
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////


void
LenaIndicationMessageHelper::AddPdcpGnbPmItem (){
  std::cout << "[DEBUG] AddPdcpGnbPmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddPdcpCpGnbPmItem (){
  std::cout << "[DEBUG] AddPdcpCpGnbPmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddRlcGnbPmItem (){
  std::cout << "[DEBUG] AddRlcGnbPmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddMacGnbPmItem (){
  std::cout << "[DEBUG] AddMacGnbPmItem called" << std::endl;
}

void
LenaIndicationMessageHelper::AddPhyGnbPmItem (){
  std::cout << "[DEBUG] AddPhyGnbPmItem called" << std::endl;
}


LenaIndicationMessageHelper::~LenaIndicationMessageHelper ()
{
}
}