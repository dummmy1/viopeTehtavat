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



int main(){
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

    cout << "Etunimi: "<<opiskelija1.etuNimi << "\n";
    cout << "Sukunimi: "<<opiskelija1.sukuNimi << "\n";
    cout << "Opiskelijanumero: "<<opiskelija1.opiskelijanumero << "\n";
    cout << "Opintopisteet: "<<opiskelija1.opintoPisteet << "\n";

}