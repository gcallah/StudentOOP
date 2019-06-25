#include <iostream>
#include <string>
#include "weather.h"

using namespace std;

const double F_TO_C = 5 / 9;
const double C_TO_F = 9 / 5;

Image::Image(int w, int h, std::string flnm)
    : width(w), height(h)
{
    filename = flnm;
    image_buf = new char[image_sz()];
}

// copy constructor:
Image::Image(const Image& img2) {
    cout << "Calling copy constructor!\n";
    copy_fields(img2);
}

// destructor
Image::~Image() {
    delete [] image_buf;
}

// assignment operator:
Image& Image::operator=(const Image& img2) {
    if (&img2 != this) {
        delete [] image_buf;
        copy_fields(img2);
    }
    return *this;
}

void Image::copy_fields(const Image& img2) {
    width = img2.width;
    height = img2.height;
    filename = img2.filename;
    image_buf = new char[image_sz()];
}

int Image::image_sz() {
    return width * height;
}


string Gif::display(std::string s) {
    cout << "Displaying Gif " << s << endl;
    return s;
}


string Jpeg::display(std::string s) {
    cout << "Displaying Jpeg " << s << endl;
    return s;
}


string Png::display(std::string s) {
    cout << "Displaying Png " << s << endl;
    return s;
}


Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

ostream& operator<<(ostream& os, const Date& dt) {
    os << dt.month << "/" << dt.day << "/" << dt.year;
    return os;
}

double WReading::get_tempF() const {
    return (temperature * C_TO_F) + 32;
}

void WReading::display_image() const {
    if (!image) cout << "No image for reading " << date << endl;
    else image->display("from wreading"); 
}


ostream& operator<<(ostream& os, const WReading& wr) {
    os << "Reading for " << wr.date << " temp: " << wr.get_tempF();
    return os;
}

/*
 * A constructor for weather class.
 * */
Weather::Weather(std::string nm, GPS loc) :
    station_nm(nm), my_loc(loc) {
}


void Weather::display_images() const {
    for (WReading wr : wreadings) {
        wr.display_image();
    }
}

string Weather::get_name() const {
    return station_nm;
}

void Weather::add_reading(WReading wr) {
    wreadings.push_back(wr);
}

ostream& operator<<(ostream& os, const Weather& w) {
    os << "Weather for " << w.get_name() << endl;
    os << "Readings:" << endl;
    for (WReading wr : w.wreadings) {
        os << wr << endl;
    }
    return os;
}

