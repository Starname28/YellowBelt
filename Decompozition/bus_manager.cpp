#include "bus_manager.h"

void BusManager::AddBus(const std::string& bus, const std::vector<std::string>& stops)
{
    for (const auto& stop : stops)
    {
        mBuses[bus].emplace_back(stop);
        mStation[stop].emplace_back(bus);
    }
}

BusesForStopResponse BusManager::GetBusesForStop(const std::string& stop) const
{
    BusesForStopResponse response;

    if (mStation.count(stop))
    {
        response.busesForStop = mStation.at(stop);
    }

    return response;
}


StopsForBusResponse BusManager::GetStopsForBus(const std::string& bus) const
{
    StopsForBusResponse response;
    const VectorPair& ref = response.stopsForBus;

    if (mBuses.count(bus))
    {
        for (const auto& stop : mBuses.at(bus)) {
            std::vector<std::string> busesForStop;
            for (const auto& b : mStation.at(stop)) {
                if (b != bus) {
                    busesForStop.emplace_back(b);
                }
            }
            response.stopsForBus.emplace_back(stop, busesForStop);
        }
    }

    return response;
}

AllBusesResponse BusManager::GetAllBuses() const
{
    AllBusesResponse allBuses;
    allBuses.all = mBuses;
    return allBuses;
}
