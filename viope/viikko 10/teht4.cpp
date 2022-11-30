#include <iostream>
#include <string>



using namespace std;



struct Opiskelija {
    string etuNimi;
    string sukuNimi;
    double opintoPisteet;
    double opiskelijanumero;
};


// Funktio, joka tekee opiskelijan tiedot
Opiskelija* luoOpiskelijat(int lkm) { // 
    Opiskelija* opiskelijatArr = new Opiskelija[lkm]; //new tekee dynaamisen taulukon joka on lkm pitkä ja palauttaa osoittimen taulukkoon joka on tallennettu muistiin opiskelijatArr muuttujaan
    for (int i = 0; i < lkm; i++) {
        cout << "Anna opiskelijan etunimi: ";
        cin >> opiskelijatArr[i].etuNimi;
        cout << "Anna opiskelijan sukunimi: ";
        cin >> opiskelijatArr[i].sukuNimi;
        cout << "Anna opiskelijan opiskelijanumero: ";
        cin >> opiskelijatArr[i].opiskelijanumero;
        cout << "Anna opiskelijan opintopisteet: ";
        cin >> opiskelijatArr[i].opintoPisteet;

    }
    return opiskelijatArr; // palauttaa osoittimen taulukkoon
}


int main() {
    int lukuMaara;
    cout << "Kuinka monelle opiskelijalle luodaan tiedot? (MAX 20): ";
    cin >> lukuMaara;

    // Taulukko, johon tallennetaan opiskelijoiden tiedot
    Opiskelija* opiskelijat = luoOpiskelijat(lukuMaara); 

    // Tulostetaan opiskelijoiden tiedot
    for (int i = 0; i < lukuMaara; i++) {
        cout << "\n";
        cout << "\n";

        cout << "Opiskelijan numero " << i+1 << " tiedot.\n";
        cout << "Etunimi: " << opiskelijat[i].etuNimi << endl;
        cout << "Sukunimi: " <<opiskelijat[i].sukuNimi << endl;
        cout << "Opiskelijanumero: " <<opiskelijat[i].opiskelijanumero << endl;
        cout << "Opintopisteet: " <<opiskelijat[i].opintoPisteet << endl;

    }
  
    return 0;
}
