#include <iostream>
#include <string>
//#include <>


using namespace std;



struct Opiskelija {
    string etuNimi;
    string sukuNimi;
    int opintoPisteet;
    int opiskelijanumero;
};


void printOpisk(Opiskelija opisk1) {
    cout << "Etunimi: "<<opisk1.etuNimi << "\n";
    cout << "Sukunimi: "<<opisk1.sukuNimi << "\n";
    cout << "Opiskelijanumero: "<<opisk1.opiskelijanumero << "\n";
    cout << "Opintopisteet: "<<opisk1.opintoPisteet << "\n";

}


int main() {
    Opiskelija opiskelija1;
    cout << "Anna opiskelijan etunimi: ";
    cin >> opiskelija1.etuNimi;
    cout << "Anna opiskelijan sukunimi: ";
    cin >> opiskelija1.sukuNimi;
    cout << "Anna opiskelijan opiskelijanumero: ";
    cin >> opiskelija1.opiskelijanumero;
    cout << "Anna opiskelijan opintopisteet: ";
    cin >> opiskelija1.opintoPisteet;
    cout << "\n";

    printOpisk(opiskelija1);



}
