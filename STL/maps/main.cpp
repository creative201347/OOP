#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

struct CityRecord
{
    std::string Name;
    uint64_t Population;
    double Latitude, Longitude;
};

namespace std
{
    template <>
    struct hash<CityRecord>
    {
        size_t operator()(const CityRecord &key)
        {
            return hash<std::string>()(key.Name);
        }
    };

}

int main()
{
    std::vector<CityRecord> cities;

    // cities.emplace_back("Melbourne", 50000, 2.4, 9.4);
    // cities.emplace_back("Kathmandu", 70000, 2.4, 9.4);
    // cities.emplace_back("Berlin", 50000, 2.4, 9.4);
    // cities.emplace_back("London", 50000, 2.4, 9.4);

    // for (const auto &city : cities)
    // {
    //     if (city.Name == "Berlin")
    //     {
    //         city.Population; // Berlin
    //         break;
    //     }
    // }

    // std::map<std::string, CityRecord> cityMap;
    std::unordered_map<std::string, CityRecord> cityMap;
    cityMap["Melbourne"] = CityRecord{"Melbourne", 50000, 2.4, 9.4};
    cityMap["Kathmandu"] = CityRecord{"Kathmandu", 70000, 2.4, 9.4};
    cityMap["Berlin"] = CityRecord{"Berlin", 50000, 2.4, 9.4};
    cityMap["London"] = CityRecord{"London", 50000, 2.4, 9.4};

    // CityRecord &berlinData = cityMap["Berlin"];
    // berlinData.Population;

    for (auto &[name, city] : cityMap)
    {
        std::cout << name << "\n Population: " << city.Population << std::endl;
    }

    std::cin.get();
}
