/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/* Created by manalipatil on 4/22/19.
 *
 */

#ifndef NS_3_ALLINONE_FILTER_H
#define NS_3_ALLINONE_FILTER_H

#include "ns3/log.h"
#include "ns3/integer.h"
#include "ns3/packet.h"
#include "filter-element.h"

namespace ns3 {

	class Filter:public Object{
		public:
			static TypeId GetTypeId (void);
			Filter();
			void PrintFilterElements();
			bool Match(Ptr<ns3::Packet> packet);
			std::vector<ns3::FilterElement*> GetFilterElements();
			void AddFilterElement(ns3::FilterElement* filterElement);
		private:
			std::vector<ns3::FilterElement*> filterElements;
	};
} // namespace ns3
#endif //NS_3_ALLINONE_FILTER_H
