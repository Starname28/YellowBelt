#include "responses.h"
#include <iostream>

std::ostream& operator << (std::ostream& os, const std::vector<std::string>& vec) {

    bool firstElement = true;

    for (const auto& str : vec)
    {
        if (firstElement)
        {
            os << str;
        }
        else
        {
            os << " " << str;
        }
        firstElement = false;
    }

    return os;
}

std::ostream& operator << (std::ostream& os, const BusesForStopResponse& r) {
    if (r.busesForStop.empty())
    {
        os << "No stop";
    }
    else
    {
        os << r.busesForStop;
    }
    return os;
}

std::ostream& operator << (std::ostream& os, const StopsForBusResponse& r) {
    const VectorPair& mapStops = r.stopsForBus;

    if (mapStops.empty())
    {
        os << "No bus";
    }
    else
    {
        bool firstElement = true;

        for (const auto& el : mapStops)
        {
            if (!firstElement)
            {
                os << std::endl;
            }

            os << "Stop " << el.first << ": ";

            if (el.second.empty())
            {
                os << "no interchange";
            }
            else
            {
                os << el.second;
            }

            firstElement = false;
        }
    }
    return os;
}

std::ostream& operator << (std::ostream& os, const AllBusesResponse& r) {

    if (r.all.empty())
    {
        os << "No buses";
    }
    else
    {
        bool firstElement = true;

        for (const auto& p : r.all)
        {
            if (!firstElement)
            {
                os << std::endl;
            }
            os << "Bus " << p.first << ": " << p.second;

            firstElement = false;
        }
    }
    return os;
}