#include "query.h"
#include <iostream>

std::istream& operator >> (std::istream& is, Query& q) {
    std::string query;
    q = {};
    is >> query;

    if (query == "NEW_BUS")
    {
        q.type = QueryType::NewBus;

        size_t stop_count;
        is >> q.bus;
        is >> stop_count;
        for (size_t i = 0; i < stop_count; i++)
        {
            std::string stop;
            is >> stop;
            q.stops.emplace_back(stop);
        }
    }
    else if (query == "BUSES_FOR_STOP")
    {
        q.type = QueryType::BusesForStop;
        is >> q.stop;
    }
    else if (query == "STOPS_FOR_BUS")
    {
        q.type = QueryType::StopsForBus;
        is >> q.bus;
    }
    else if (query == "ALL_BUSES")
    {
        q.type = QueryType::AllBuses;
    }
    return is;
}