#ifndef WEATHER_H
#define WEATHER_H

#include <string>


class Weather {
 public:
     Weather(std::string nm);
 private:
     std::string station_nm;
};


#endif
