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
    Valtio valtio1;
    cout << "Anna valtion 1 nimi: ";
    cin >> valtio1.Nimi;
    cout << "Anna valtion 1 asukasluku: ";
    cin >> valtio1.asukasluku;
    cout << "Anna valtion 1 pinta-ala: ";
    cin >> valtio1.pintaAla;
    cout << "Anna valtion 1 johtaja: ";
    cin >> valtio1.johtaja;

    Valtio valtio2;
    cout << "Anna valtion 2 nimi: ";
    cin >> valtio2.Nimi;
    cout << "Anna valtion 2 asukasluku: ";
    cin >> valtio2.asukasluku;
    cout << "Anna valtion 2 pinta-ala: ";
    cin >> valtio2.pintaAla;
    cout << "Anna valtion 2 johtaja: ";
    cin >> valtio2.johtaja;

    cout <<" Valtio numero 1\n";
    cout << "Nimi: "<<valtio1.Nimi << "\n";
    cout << "Asukasluku: "<<valtio1.asukasluku << "\n";
    cout << "Pinta-ala: "<<valtio1.pintaAla << "\n";
    cout << "Johtaja: "<<valtio1.johtaja << "\n";
    cout <<"\n";
    cout <<" Valtio numero 2\n";
    cout << "Nimi: "<<valtio2.Nimi << "\n";
    cout << "Asukasluku: "<<valtio2.asukasluku << "\n";
    cout << "Pinta-ala: "<<valtio2.pintaAla << "\n";
    cout << "Johtaja: "<<valtio2.johtaja << "\n";

}