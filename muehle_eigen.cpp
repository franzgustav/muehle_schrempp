#include <iostream>
using namespace std;

int main(){
    string feld, hori, vert, runter, hoch, leer;
    feld = "O";
    hori = "--";
    vert = "|";
    runter = "\\";
    hoch = "/";
    leer = " ";
    cout << "01: " <<feld << hori << hori + hori << hori << hori << feld << hori + hori << hori << hori << hori << feld << endl;
    cout << "02: " << vert << leer +leer + leer + leer + leer + leer + leer + leer + leer + leer << vert << leer + leer + leer + leer  << leer << leer << leer << leer << leer << leer << vert << endl;
    cout << "03: " << vert << leer + leer << feld << hori << "-" << hori << hori << feld << "-" << hori << hori << hori << feld << leer + leer << vert << endl;
    cout << "04: " << vert << leer + leer << vert << leer + leer << leer << leer << leer << leer << leer << vert << leer + leer << leer << leer << leer << leer << leer << vert << leer + leer << vert << endl;
    cout << "05: " << vert << leer + leer << vert << leer + leer << feld << hori + hori << feld << hori + hori << feld << leer + leer << vert << leer + leer << vert << endl;
    cout << "06: " << vert << leer + leer << vert << leer + leer << vert << leer << leer << leer << leer << leer << leer << leer << leer << leer << vert << leer + leer << vert << leer + leer << vert << endl;
    cout << "07: " << feld << hori << feld << hori << feld << leer << leer << leer << leer << leer << leer << leer << leer << leer << feld << hori << feld << hori << feld << endl;
    cout << "06: " << vert << leer + leer << vert << leer + leer << vert << leer << leer << leer << leer << leer << leer << leer << leer << leer << vert << leer + leer << vert << leer + leer << vert << endl;
    cout << "05: " << vert << leer + leer << vert << leer + leer << feld << hori + hori << feld << hori + hori << feld << leer + leer << vert << leer + leer << vert << endl;
    cout << "04: " << vert << leer + leer << vert << leer + leer << leer << leer << leer << leer << leer << vert << leer + leer << leer << leer << leer << leer << leer << vert << leer + leer << vert << endl;
    cout << "03: " << vert << leer + leer << feld << hori << "-" << hori << hori << feld << "-" << hori << hori << hori << feld << leer + leer << vert << endl;
    cout << "02: " << vert << leer +leer + leer + leer + leer + leer + leer + leer + leer + leer << vert << leer + leer + leer + leer  << leer << leer << leer << leer << leer << leer << vert << endl;
    cout << "01: " <<feld << hori << hori + hori << hori << hori << feld << hori + hori << hori << hori << hori << feld << endl;



    /*cout << "08: " << vert << leer << vert << leer << vert << leer << leer << leer << leer << leer << leer << leer << leer << leer << vert << leer << vert << leer << vert << endl;
    cout << "09: " << vert << leer << vert << leer << feld << hori + hori << feld << hori + hori << feld << leer << vert << leer << vert << endl;
    cout << "10: " << vert << leer << vert << leer << leer << leer << leer << leer << leer << vert << leer << leer << leer << leer << leer << leer << vert << leer << vert << endl;
    cout << "11: " << vert << leer << feld << hori << hori << hori << feld << hori << hori << hori << feld << leer << vert << endl;
    cout << "12: " << vert << leer +leer + leer + leer + leer + leer + leer + leer << vert << leer << leer << leer << leer << leer << leer << leer << leer << vert << endl;
    cout << "13: " << feld << hori << hori << hori << hori << feld << hori << hori << hori << hori << feld << endl;*/

    return 0;
}