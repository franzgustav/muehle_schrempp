#include <iostream>
#include <string>   
#include "feld_array.cpp"       //lädt das Spielfeld
using namespace std;        

int main(){
    cout << "\nOutput main\n";  //macht eine Überschrift
    //einlesen();
    zeichneFeld();      //Aufrufen der Funktion "zeichneFeld"
    cout << endl;       
    return 0;
}