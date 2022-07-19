#include <iostream>
#include <string>
using namespace std;

void Verschiebenfrage(int Schiebeposition, int Steinposition){       //Stein verschieben Abfragefunktion, nicht fertig 19.07 Schrempp
    cout << "Welchen Stein möchten Sie verschieben? ";
    cin >> Steinposition;
    cout << "Wohin möchten Sie den Stein schieben? ";
    cin >> Schiebeposition;
}       //prüfen ob Zug möglich ist (Feld liegt daneben und ist frei), ansonsten Fehlermeldung und erneut abfragen (Schleife)
        //Position und Stein in Array schreiben und vorheriges Positionsfeld auf 0 setzen

int main()
{

    cout << "\nSpielfeldkoordinaten mit Array: \n\n"; //Überschrift ausgeben

    cout << "\nSpielfeld\n"; //Überschrift ausgeben
    string ARR[24] = {
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
        cout << "\nSpieler Weiss setzen Sie ihren " << i << ". Stein: "; // Weiss setzt Stein
        cin >> position;                                                 // Benutzereingabe Spieler weiß wir eingelesen
        ARR[position] = "W";                                             //"W" an diese Position des Arrays schreiben

        cout << "\nSpieler Schwarz setzen Sie ihren " << i << ". Stein: "; // Schwarz setzt Stein
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

    return 0;
}

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
}