//
// Created by manalipatil on 4/22/19.
//

#ifndef NS_3_ALLINONE_FILTER_H
#define NS_3_ALLINONE_FILTER_H

#include "ns3/log.h"
#include "ns3/integer.h"
#include "filter-element.h"
#include "ns3/packet.h"

namespace ns3{

    class Filter:public Object{
    public :
        static TypeId GetTypeId (void);
        Filter();
        ~Filter();

        void PrintFilterElements();
        std::vector<ns3::FilterElement*> filterElements;
        bool Match(Ptr<ns3::Packet> packet);
    };
}

#endif //NS_3_ALLINONE_FILTER_H
