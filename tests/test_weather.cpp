#include <cassert>
#include <iostream>
#include <fstream>
#include "../my_code/weather.h"

using namespace std;

void get_wreadings(string filenm, Weather& w) {
    ifstream rfile(filenm);
    if (!rfile) {
        cout << "Could not read input file: " << filenm << endl;
        exit(1);
    }
    int m, d, y;
    double temp, hum, ws;
    while (rfile >> m >> d >> y >> temp >> hum >> ws) {
        WReading wr = WReading(Date(d, m, y), temp, hum, ws);
        w.add_reading(wr);
    }
    rfile.close();
}


int main() {
    WReading test_temps = WReading(Date(1, 1, 2019), 0, 50, 10);
    double freezingF = test_temps.get_tempF();
    assert(freezingF == 32.0);
    WReading test_temps = WReading(Date(1, 1, 2019), 100, 50, 10);
    double freezingF = test_temps.get_tempF();
    assert(freezingF == 212.0);

    Weather irkutsk = Weather("Irkutsk", GPS(46.3, 67.2));

    string filenm;
    cout << "Input the name of the new readings file:\n";
    cin >> filenm;

    get_wreadings(filenm, irkutsk);

//    cout << irkutsk << endl;
}
