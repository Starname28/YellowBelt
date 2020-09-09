#pragma once
#include <vector>
#include <string>
#include <map>

using VectorPair = std::vector<std::pair<std::string, std::vector<std::string>>>;

struct BusesForStopResponse {
    std::vector<std::string> busesForStop;
};

std::ostream& operator << (std::ostream& os, const BusesForStopResponse& r);

struct StopsForBusResponse {
    VectorPair stopsForBus;
};

std::ostream& operator << (std::ostream& os, const StopsForBusResponse& r);

struct AllBusesResponse {
    std::map<std::string, std::vector<std::string>> all;
};

std::ostream& operator << (std::ostream& os, const AllBusesResponse& r);