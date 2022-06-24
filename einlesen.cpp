#include <iostream>
#include <string>   
using namespace std;     

int main(){

cout << "\nSpielfeldkoordinaten mit Array: \n\n";       //Überschrift ausgeben

    cout << "\nSpielfeld\n";        //Überschrift ausgeben
    string ARR[24] = {"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0",};        //leeres Spielfeld mit Nullen erstellen, linke Seite
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
        {ARR[21], "----", "-", "----", "-", "----", ARR[22], "----", "-", "----", "-", "----", ARR[23]}
    };

    string AR[24] = {"0","1","2","3","4","5","6","7","8","9","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};        //Spielfeld mit Koordinaten zur Hilfe, rechte Seite
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
        {"       ", AR[21], "----", "-", "----", "-", "---", AR[22], "---", "-", "----", "-", "----", AR[23]}
    };
   

    for (int j = 0; j <= 12; j++)       //Ausgabe beider Ausgangsfelder
    {
        for (int i = 0; i <= 12; i++)       //leeres Spielfeld
        {
            cout << feldarr[j][i];
        }
        for (int i = 0; i <= 13; i++)       //Hilfsspielfeld mit Koordinaten
        {
            cout << feldar[j][i];
        }
        cout << endl;
    }

    int position;       //Variablen deklarieren zum Einlesen
    for (int i = 1; i <= 2; i++)        //Schleife um alle Steine zu legen
    {
        cout << "\nSpieler Weiss setzen Sie ihren " << i << ". Stein: ";     //Weiss setzt Stein
        cin >> position;        //Benutzereingabe Spieler weiß wir eingelesen
        ARR[position] = "W";        //"W" an diese Position des Arrays schreiben
    
        cout << "\nSpieler Schwarz setzen Sie ihren " << i << ". Stein: ";       //Schwarz setzt Stein
        cin >> position;        //Benutzereingabe Spieler schwarz wird eingelesen     
        ARR[position] = "S";        //"S" an diese Position des Arrays schreiben

        //i--;        //Zähler runtersetzen wegen vorheriger Ausgabe
    }
     

    string feldarra[13][13] = {     //neues Array auf der linke Seiten wird erstellt zum eintragen
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
        {ARR[21], "----", "-", "----", "-", "----", ARR[22], "----", "-", "----", "-", "----", ARR[23]}
    };  

    for (int j = 0; j <= 12; j++)       //Ausgeben beider Felder
    {
        for (int i = 0; i <= 12; i++)       //Spielfeld links
        {
            cout << feldarra[j][i];
        }
        for (int i = 0; i <= 13; i++)       //Hilfsfeld rechts
        {
            cout << feldar[j][i];
        }
        cout << endl;
    }


/*
    int eingabew, eingabes;
    string AR[7][7] = {
        {"O", "O", "O", "O", "O", "O", "O"},
        {"O", "O", "O", "O", "O", "O", "O"},
        {"O", "O", "O", "O", "O", "O", "O"},
        {"O", "O", "O", "O", "O", "O", "O"},
        {"O", "O", "O", "O", "O", "O", "O"},
        {"O", "O", "O", "O", "O", "O", "O"},
        {"O", "O", "O", "O", "O", "O", "O"}
    };

    int positiony, positionx;
    for (int i = 0; i <= 1; i++)
    {
        cout << "\nSpieler Weiss setzen Sie ihren " << i << " Stein: ";
        cin >> eingabew;
        positiony = eingabew/10%10 - 1;
        positionx = eingabew%10 - 1;
        AR[positiony][positionx] = "W";
        //cout <<  endl << AR[positiony][positionx] << endl << positiony << endl << positionx << endl;

        cout << "\nSpieler Schwarz setzen Sie ihren " << i << " Stein: ";
        cin >> eingabes;
        positiony = eingabes/10%10 - 1;
        positionx = eingabes%10 - 1;
        AR[positiony][positionx] = "S";
        //cout <<  endl << AR[positiony][positionx] << endl << positiony << endl << positionx << endl;
    }

cout << "Spielfeld mit Array: \n\n";

    string feldar[14][14] = {
        {"   ", "1", "    ", "2", "    ", "3", "    ", "4", "    ", "5", "    ", "6", "    ", "7"},
        {"1: ", AR[0][0], "----", "-", "----", "-", "----", AR[0][3], "----", "-", "----", "-", "----", AR[0][6]},
        {"   ", "|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
        {"2: ", "|", "    ", AR[1][1], "----", "-", "----", AR[1][3], "----", "-", "----", AR[1][5], "    ", "|"},
        {"   ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
        {"3: ", "|", "    ", "|", "    ", AR[2][2], "----", AR[2][3], "----", AR[2][4], "    ", "|", "    ", "|"},
        {"   ", "|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
        {"4: ", AR[3][0], "----", AR[3][1], "----", AR[3][2], "    ", " ", "    ", AR[3][4], "----", AR[3][5], "----", AR[3][6]},
        {"   ", "|", "    ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", "|", "    ", "|"},
        {"5: ", "|", "    ", "|", "    ", AR[4][2], "----", AR[4][3], "----", AR[4][4], "    ", "|", "    ", "|"},
        {"   ", "|", "    ", "|", "    ", " ", "    ", "|", "    ", " ", "    ", "|", "    ", "|"},
        {"6: ", "|", "    ", AR[5][1], "----", "-", "----", AR[5][3], "----", "-", "----", AR[5][5], "    ", "|"},
        {"   ", "|", "    ", " ", "    ", " ", "    ", "|", "    ", " ", "    ", " ", "    ", "|"},
        {"7: ", AR[6][0], "----", "-", "----", "-", "----", AR[6][3], "----", "-", "----", "-", "----", AR[6][6]}
    };
    for (int j = 0; j <= 13; j++)
    {
        for (int i = 0; i <= 13; i++)
        {
            cout << feldar[j][i];
        }
        cout << endl;
    }*/
    return 0;
}