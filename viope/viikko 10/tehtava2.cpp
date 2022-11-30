#include <iostream>
#include <string>

using namespace std;

struct Valtio {
    string Nimi;
    string johtaja;
    int asukasluku;
    int pintaAla;
};


int main(){
    //int i = 0;
    Valtio valtio[2];

    for (int i= 0; i < 2;i++){
        cout << "Anna valtion" << i << "nimi: ";
        cin >> valtio[1].Nimi;
        cout << "Anna valtion" << i << "asukasluku: ";
        cin >> valtio[1].asukasluku;
        cout << "Anna valtion" << i << "pinta-ala: ";
        cin >> valtio[1].pintaAla;
        cout << "Anna valtion" << i << "johtaja: ";
        cin >> valtio[1].johtaja;

    }

    for (int i = 0;i < 2; i++){
        cout << "Valtion" << i << "nimi: " << valtio[1].Nimi << endl;
        cout << "Valtion" << i << "asukasluku: " << valtio[1].asukasluku << endl;
        cout << "Valtion" << i << "pinta-ala: " << valtio[1].pintaAla << endl;
        cout << "Valtion" << i << "johtaja: " << valtio[1].johtaja << endl;
    }

}