#include <cassert>
#include <vector>
#include <iostream>
#include <fstream>
#include "../my_code/weather.h"

using namespace std;

void get_wreadings(string filenm, Weather& w) {
    Image* base = new Image(100, 100, "base.img");
    Gif* gif = new Gif(100, 100, "file.gif");
    Jpeg* jpeg = new Jpeg(100, 100, "file.jpg", LOW);
    Png* png = new Png(100, 100, "file.png");

    vector<Image*> images = {base, gif, jpeg, png, nullptr};
    
    ifstream rfile(filenm);
    if (!rfile) {
        cout << "Could not read input file: " << filenm << endl;
        exit(1);
    }
    int m, d, y;
    double temp, hum, ws;
    int i = 0;
    while (rfile >> m >> d >> y >> temp >> hum >> ws) {
        WReading wr = WReading(Date(d, m, y), temp, hum, ws, images[i]);
        w.add_reading(wr);
        i = (i + 1) % images.size();
    }
    rfile.close();
}

void make_images1(Image& img1) {
    for (int i = 0; i < 100; i++) {
        Image img2 = Image(10, 10, "foo.txt");
        img2 = img1;
    }
}

void make_images2(Image& img1) {
    for (int i = 0; i < 100; i++) {
        Image img2 = img1;
    }
}


int main() {

    /*
    Image img = Image(100, 100, fnm);
    for (int i = 1; i < 100; i++) {
        // make_images1(img);
        make_images2(img);
    }

    Date date1 = Date(1, 1, 2019);
    WReading test_temps = WReading(date1, 0, 50, 10);
    int wr_size = sizeof(test_temps);
    cout << "Size of a Date is " << sizeof(date1) << endl;
    cout << "Size of a WReading is " << wr_size << endl;

    double freezingF = test_temps.get_tempF();
    assert(freezingF == 32.0);
    test_temps = WReading(Date(1, 1, 2019), 100, 50, 10);
    freezingF = test_temps.get_tempF();
    assert(freezingF == 212.0);
    */

    Weather irkutsk = Weather("Irkutsk", GPS(46.3, 67.2));

    string filenm;
    cout << "Input the name of the new readings file:\n";
    cin >> filenm;

    get_wreadings(filenm, irkutsk);

    cout << irkutsk << endl;
    irkutsk.display_images();
}
