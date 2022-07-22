#include <iostream>
#include <string>
using namespace std;

int SpielstPos, SchiebePos, currentPlayer, Richtung;
string currentPlayerBuchs;
int Spielfeld_zweidim_2;
bool KorrektPos, KorrektZug = false;
void SchiebeFunktion();
void FeldanzeigeFunktion();

int main(){
    currentPlayer = 2;
    SchiebeFunktion();
    return 0;
} 
    void SchiebeFunktion(){
    //cout << currentPlayer;      //MS 1 für Weiss und 2 für Schwarz
    int Spielfelder[4] = {2, 0, 0, 0};      //MS Beispielhaft ein Array mit 4 Spielfeldpositionen, später richtiges Feld einlesen
    if(currentPlayer == 1) currentPlayerBuchs = "W";        //MS im Array die Zustände 0, 1 und 2 speichern und daraus Feldbelegung generieren
    if(currentPlayer == 2) currentPlayerBuchs = "S";
    
    int Spielfeld_zweidim[2][2] = {     //MS aus eindim. Array "Spielfelder" ein zweidim. Spielfeld generieren, Beispielhaft
        {Spielfelder[0], Spielfelder[1]},       
        {Spielfelder[2], Spielfelder[3]}
    };
    
    cout << endl;
    for(int i = 0; i <=1; i++){     //MS Spielbrett ausgeben
        for(int j = 0; j <=1; j++){
        cout << Spielfeld_zweidim[i][j];
        }
        cout << endl;
    }    

    //Abfrage welcher Stein
    do{
    cout << "\nSpieler " << currentPlayerBuchs << ": Welchen Stein möchten Sie verschieben? ";      //MS Spielstein abfragen und einlesen
    cin >> SpielstPos;
    
    //checken ob auch sein Stein
    if(Spielfelder[SpielstPos] == currentPlayer) {      //MS Spielstein vorhanden und gehört auch wirklich dem Spieler?
        KorrektPos = true;      //MS Bool auf true setzen -> do-while wird beendet
        cout << "\nZug valid";
    }else{
        KorrektZug = false;     //MS Bool auf false stzen -> do-while wird nochmals durchlaufen
        cout << "\nZug nicht valid";    
    }
    }while(KorrektPos == false);
    

    
    //Abfrage Stein wohin
    do{
    cout << "\nSpieler " << currentPlayer << ": Wohin möchten Sie den Stein verschieben? (12, 3, 6, 9) ";       //MS zukünftige Position des Steins anfragen und einlesen
    cin >> Richtung;        //MS Richtung eingeben, nach Uhr gerichtet. z.B. nach rechts schieben ist 3 (Uhr)
    switch(SpielstPos){     //MS Switch-Abfrage für jedes einzelne Feld (24 bei Mühle)
        case 0:
            if(Richtung == 3 || Richtung == 6){     //MS Feld 0 kann nach rechts oder links fahren -> 3 und 6 erlaubt
                cout << "\nZug erlaubt";
                KorrektZug = true;      //MS Bool auf true stzen um do-while zu beenden
                if(Richtung == 3) SchiebePos = 1;       //MS neue Steinposition im Array
                if(Richtung == 6) SchiebePos = 2;
            }
            else {
                cout << "\nZug nicht erlaubt";
                KorrektZug = false;     //Bool auf false um do-while nochmal zu machen
            }
            break;
        case 1:     //MS Nachfolgende Felder bisher nicht fertig definiert
            if(Richtung == 6 || Richtung == 9) {
                cout << "\nZug erlaubt";
                KorrektZug = true;
            }
            else {
                cout << "\nZug nicht erlaubt";
                KorrektZug = false;
            }
            break;
        case 2:
            if(Richtung == 3 || Richtung == 12) {
                cout << "\nZug erlaubt";
                KorrektZug = true;
            }
            else {
                cout << "\nZug nicht erlaubt";
                KorrektZug = false;
            }
            break;
        case 3:
            if(Richtung == 9 || Richtung == 12) {
                cout << "\nZug erlaubt";
                KorrektZug = true;
            }
            else {
                cout << "\nZug nicht erlaubt";
                KorrektZug = false;
            }
            break;
    }
    }while(KorrektZug == false);

    //MS zusätzliche do-while Schleife falls Schiebestein nicht schiebbar ist (umzingelt)
    
    //neue Position mit 1 (W) oder 2 (S) beschreiben
    Spielfelder[SchiebePos] = currentPlayer;    

    
    //alte Position mit 0 beschreiben 
    Spielfelder[SpielstPos] = 0;
    cout << "\nSpielsteinposition: " << Spielfelder[SpielstPos] << "\n";        //MS Kontrollausgabe
    cout << "\nSchiebeposition: " << Spielfelder[SchiebePos] << "\n";       //MS kontrollausgabe
    
    //verändertes Spielfeld ausgeben
    int Spielfeld_zweidim_2[2][2] = {       //MS neue Positionen in das Spielfeld schreiben
        {Spielfelder[0], Spielfelder[1]},
        {Spielfelder[2], Spielfelder[3]}
    };    
    
    cout << "\n";
    for(int i = 0; i <=1; i++){     //MS zweidim. Spielfeld ausgeben
        for(int j = 0; j <=1; j++){
        cout << Spielfeld_zweidim_2[i][j];
        }
        cout << endl;
    }
    }