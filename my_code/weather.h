#ifndef WEATHER_H
#define WEATHER_H

#include <string>

struct GPS {
    double latitude;
    double longitude;
    GPS(double la, double lo) : latitude(la),
        longitude(lo) {}
};


class Weather {
 public:
    Weather(std::string nm, GPS loc);
    std::string get_name();
 private:
    std::string station_nm;
    GPS my_loc;
};


#endif
