#include <iostream>
#include <string>
//#include "Schiebefunktion.cpp"
using namespace std;

//Variablen deklarieren

 //prüfen ob Zug möglich ist (Feld liegt daneben und ist frei), ansonsten Fehlermeldung und erneut abfragen (Schleife)
        //Position und Stein in Array schreiben und vorheriges Positionsfeld auf 0 setzen
/*
void Verschiebenerlaubt(){  //Prüfen ob Position leer und nur ein Zug daneben liegt
    bool erlaubt = false;
    while(erlaubt == false){
        Verschiebenfrage();
        switch(Schiebeposition);
    }
}     */

class Spieler{      //Erstellen Klasse für die beiden Spieler
    public:
    string Name;
    int Steinzahl;
};

class Stein{        //Erstellen Klasse für die Steine
    public:
    bool gesetzt;
    int Position;
    int Farbe;
};

class Feld{
    public:
    int Feldbelegung;       //0 = leer; 1 = weiss; 2 = schwarz
    string Feldanzeige;     //S, W oder 0
    int Feldnachbar1;       //Nachbarfeld 1
    int Feldnachbar2;       //Nachbarfeld 2
    int Feldnachbar3;       //Nachbarfeld 3
    int Feldnachbar4;       //Nachbarfeld 4
};

int main(){

    Spieler SpielerWeiss;
    SpielerWeiss.Name = "Weiss";
    SpielerWeiss.Steinzahl = 9;

    Spieler SpielerSchwarz;
    SpielerSchwarz.Name = "Schwarz";
    SpielerSchwarz.Steinzahl = SpielerWeiss.Steinzahl;

    Stein SteinWeiss;
    SteinWeiss.gesetzt = false;
    SteinWeiss.Position = 0;
    SteinWeiss.Farbe = 0;

    Stein SteinSchwarz;
    SteinSchwarz.gesetzt = false;
    SteinSchwarz.Position = 0;
    SteinSchwarz.Farbe = 1;

    Feld Feld00;
    Feld00.Feldbelegung = 0;
    Feld00.Feldanzeige = "0";
    Feld00.Feldnachbar1 = 1;
    Feld00.Feldnachbar2 = 1;
    Feld00.Feldnachbar3 = 4;
    Feld00.Feldnachbar4 = 4;

    /*int Zweiwegzug(int Zweiwegzug1, int Zweiwegzug2){

        return Zweiwegzug1, Zweiwegzug2;
    };*/


   /* int feldwunsch = 0;
    switch (feldwunsch)
    {
    case /* constant-expression */
        /* code 
        break;
    
    default:
        break;
    }*/



    cout << "\nSpielfeldkoordinaten mit Array: \n\n"; //Überschrift ausgeben

    cout << "\nSpielfeld\n"; //Überschrift ausgeben
    string ARR[24] = {
        Feld00.Feldanzeige,
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
        "0",
    }; // leeres Spielfeld mit Nullen erstellen, linke Seite
    string feldarr[13][13] = {
        {ARR[0], "----", "-", "----", "-", "----", ARR[1], "----", "-", "----", "-", "----", ARR[2]},
        {"|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
        {"|", "    ", ARR[3], "----", "-", "----", ARR[4], "----", "-", "----", ARR[5], "    ", "|"},
        {"|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
        {"|", "    ", "|", "    ", ARR[6], "----", ARR[7], "----", ARR[8], "    ", "|", "    ", "|"},
        {"|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
        {ARR[9], "----", ARR[10], "----", ARR[11], "    ", " ", "    ", ARR[12], "----", ARR[13], "----", ARR[14]},
        {"|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
        {"|", "    ", "|", "    ", ARR[15], "----", ARR[16], "----", ARR[17], "    ", "|", "    ", "|"},
        {"|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
        {"|", "    ", ARR[18], "----", "-", "----", ARR[19], "----", "-", "----", ARR[20], "    ", "|"},
        {"|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
        {ARR[21], "----", "-", "----", "-", "----", ARR[22], "----", "-", "----", "-", "----", ARR[23]}};

    string AR[24] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"}; // Spielfeld mit Koordinaten zur Hilfe, rechte Seite
    string feldar[13][14] = {
        {"       ", AR[0], "----", "-", "----", "-", "----", AR[1], "----", "-", "----", "-", "----", AR[2]},
        {"       ", "|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
        {"       ", "|", "    ", AR[3], "----", "-", "----", AR[4], "----", "-", "----", AR[5], "    ", "|"},
        {"       ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
        {"       ", "|", "    ", "|", "    ", AR[6], "----", AR[7], "----", AR[8], "    ", "|", "    ", "|"},
        {"       ", "|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
        {"       ", AR[9], "----", AR[10], "---", AR[11], "    ", " ", "   ", AR[12], "---", AR[13], "---", AR[14]},
        {"       ", "|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
        {"       ", "|", "    ", "|", "    ", AR[15], "---", AR[16], "---", AR[17], "   ", "|", "    ", "|"},
        {"       ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
        {"       ", "|", "    ", AR[18], "----", "-", "---", AR[19], "---", "-", "----", AR[20], "   ", "|"},
        {"       ", "|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
        {"       ", AR[21], "----", "-", "----", "-", "---", AR[22], "---", "-", "----", "-", "----", AR[23]}};

    for (int j = 0; j <= 12; j++) // Ausgabe beider Ausgangsfelder
    {
        for (int i = 0; i <= 12; i++) // leeres Spielfeld
        {
            cout << feldarr[j][i];
        }
        for (int i = 0; i <= 13; i++) // Hilfsspielfeld mit Koordinaten
        {
            cout << feldar[j][i];
        }
        cout << endl;
    }

    int position;                // Variablen deklarieren zum Einlesen
    for (int i = 1; i <= 2; i++) // Schleife um alle Steine zu legen
    {
        cout << "\nSpieler " << SpielerWeiss.Name << " setzen Sie ihren " << i << ". Stein: "; // Weiss setzt Stein
        cin >> position;                                                 // Benutzereingabe Spieler weiß wir eingelesen
        ARR[position] = "W";                                             //"W" an diese Position des Arrays schreiben

        cout << "\nSpieler " << SpielerSchwarz.Name << " setzen Sie ihren " << i << ". Stein: "; // Schwarz setzt Stein
        cin >> position;                                                   // Benutzereingabe Spieler schwarz wird eingelesen
        ARR[position] = "S";                                               //"S" an diese Position des Arrays schreiben

        // i--;        //Zähler runtersetzen wegen vorheriger Ausgabe

        string feldarra[13][13] = {// neues Array auf der linke Seiten wird erstellt zum eintragen
            {ARR[0], "----", "-", "----", "-", "----", ARR[1], "----", "-", "----", "-", "----", ARR[2]},
            {"|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
            {"|", "    ", ARR[3], "----", "-", "----", ARR[4], "----", "-", "----", ARR[5], "    ", "|"},
            {"|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
            {"|", "    ", "|", "    ", ARR[6], "----", ARR[7], "----", ARR[8], "    ", "|", "    ", "|"},
            {"|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
            {ARR[9], "----", ARR[10], "----", ARR[11], "    ", " ", "    ", ARR[12], "----", ARR[13], "----", ARR[14]},
            {"|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
            {"|", "    ", "|", "    ", ARR[15], "----", ARR[16], "----", ARR[17], "    ", "|", "    ", "|"},
            {"|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
            {"|", "    ", ARR[18], "----", "-", "----", ARR[19], "----", "-", "----", ARR[20], "    ", "|"},
            {"|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
            {ARR[21], "----", "-", "----", "-", "----", ARR[22], "----", "-", "----", "-", "----", ARR[23]}};

        for (int j = 0; j <= 12; j++) // Ausgeben beider Felder
        {
            for (int i = 0; i <= 12; i++) // Spielfeld links
            {
                cout << feldarra[j][i];
            }
            for (int i = 0; i <= 13; i++) // Hilfsfeld rechts
            {
                cout << feldar[j][i];
            }
            cout << endl;
        }
    }

   /* bool korrekterZug = false; //Zugfunktion
    do {  
       // int Verschiebenfrage(int Schiebeposition, int Steinposition){       //Stein verschieben Abfragefunktion, nicht fertig 19.07 Schrempp
        
        int Schiebeposition, Steinposition;
        string Schiebepositionsanzeige, Steinpositionsanzeige;
        cout << "Welchen Stein möchten Sie verschieben? ";
        cin >> Steinposition;
        cout << "Wohin möchten Sie den Stein schieben? ";
        cin >> Schiebeposition;
        Schiebepositionsanzeige = ARR[Schiebeposition];
        Steinpositionsanzeige = ARR[Steinposition];
        switch (Steinposition){
            case 0:
                if(Feld00.Feldbelegung = 1){   //verschiebt auch wirklich der richtige Spieler den richtigen Stein?
                    if(ARR[Schiebeposition] == 1 || ARR[Schiebeposition] == 9){   //Liegt die Schiebeposition eins weiter
                        if(ARR[Schiebeposition] = 0){   //Ist die Schiebeposition leer
                            ARR[Schiebeposition] = "S";   //Schiebeposition mit einem S für den schwarzen Stein beschreiben
                            ARR[Steinposition] = 0; //Steinposition mit der Zahl 0 als leer kennzeichnen
                        }
                    }
                }
                break;        
        }
   // }
    //return Schiebeposition, Steinposition, korrekterZug;
    }while (korrekterZug = false);*/

    return 0;
}

/*

string* removeable(string AR[24], string currentPlayer){
   string validposition[9]={};
   int index = 0;
    for (int i = 0; i <= 23; i++)
            {
                if (AR[i] == currentPlayer){
                    continue;
                }
                if (ismill(i)){
                    continue;
                }
               
                validposition[index] = to_string(i);;
            }
            return validposition;
}

bool ismill(int positionindex){

    return false;
}*/