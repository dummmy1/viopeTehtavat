#include <iostream>
#include <string>

using namespace std;


// funktio palauttaa arvon tietylle roomalaiselle numerolle
int roomaValue(char romensSingleChar){
    int luku;

    if (romensSingleChar == 'I'){
        luku = 1;
    }
    else if (romensSingleChar == 'V'){
        luku = 5;
    }
    else if (romensSingleChar == 'X'){
        luku = 10;
    }
    else if (romensSingleChar == 'L'){
        luku = 50;
    }
    else if (romensSingleChar == 'C'){
        luku = 100;
    }
    else if (romensSingleChar == 'D'){
        luku = 500;
    }
    else if (romensSingleChar == 'M'){
        luku = 1000;
    }
    
    return luku;
}


//logiikka
int calculator(string& roomens){
    int vastaus = 0;

    for (int i = 0; i < roomens.length(); i++){ // käydään läpi merkkijono

        int sym1 = roomaValue(roomens[i]);

        if (i+1 < roomens.length()){ //katsoo onko seuraavaa merkkiä olemassa
            int sym2 = roomaValue(roomens[i+1]);

            if (sym1 >= sym2){
                vastaus += sym1;
                
            }
            else{
                vastaus += sym2 - sym1; // esim. IV = 5 - 1
                i++; // skippaa älä kato sym2 uudestaan
            }
        }
        else{
            vastaus += sym1;
            
        }

    }
    return vastaus;

}


int main (){
    string roomaLuku;
    cout << "Roomalainen luku, jonka desimaaliarvon haluat tietää? ";
    cin >> roomaLuku;
    cout << "Desimaalimuodossa roomalainen luku "<< roomaLuku << " on " << calculator(roomaLuku) << endl;

}