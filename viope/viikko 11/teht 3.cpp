#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <windows.h>
#include <windows.system.h>
#include <limits>
#include <sstream>
#include <climits> 
#include <numeric>
#undef max

using namespace std;

//int lottoNumbersAmount = 40;


void takeNumber(int& annettu, int size, string teksti, int iter){
    //cout << "suck my nuts niga";
    
	while (!(cin >> annettu) || !(annettu > 0 && annettu <= size)) {

		cin.clear(); //clear bad input flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
		cout << teksti << size <<" valilla!\n\n";

        if (iter > 0){
            cout << "Numero " << iter+1 << ": "; 
        }
	}


}



void voittoChecker(vector<int> lottoNums, vector<int> voittoNums){
    //cout << "\ntulee tanne asti!\n";
    int lottoLaskuri = 0;
    int lisaLaskuri = 0;

    for (int i = 0; i < 7; i++){
        if (count(voittoNums.begin(), (voittoNums.end()-3), lottoNums[i])){
            lottoLaskuri += 1;
        }

    }
    for (int i = 7; i < 10; i++){
        if (count((voittoNums.begin()+7), voittoNums.end(), lottoNums[i])){
            lisaLaskuri += 1;
        }
    }

    switch (lottoLaskuri){
        case 1:
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Olet voittanut 1 euroa!\n";
            break;
        case 2:
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Olet voittanut 2 euroa!\n";
            break;
        case 3:
            if (lisaLaskuri > 0){
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Olet voittanut 10 euroa!\n";
            break;
            }
            else {
                cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
                cout << "Et voittanut mitaan!\n";
                break;
            }
            
        case 4:
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Olet voittanut 50 euroa!\n";
            break;
        case 5:
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Olet voittanut 2000 euroa!\n";
        case 6:
            if(lisaLaskuri > 0){
                cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
                cout << "Olet voittanut 1 000 000 euroa!\n";
                break;
            }
            else{
                cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\nOlet voittanut 100 000 euroa!\n"; 
                break;
            }
        case 7:
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Olet voittanut 10 000 000 euroa!\n";
            break;

        default:
            cout << "Sait " << lottoLaskuri << " + " << lisaLaskuri << " oikein!\n";
            cout << "Et voittanut mitaan!\n";
            break;

        }
        //cout << "tuleeko tanne?";
}






void palkintoSummat(){
    cout<< "Numeroita + lisänumeroita oikein    Voittosumma\n"
    "7                                   10 000 000 e\n"
    "6+1                                 1 000 000 e\n"
    "6                                   100 000 e\n"
    "5                                   2000 e\n"
    "4                                   50 e\n"
    "3+1                                 10 e\n"
    "2                                   2 e\n"
    "1                                   1 e\n"
    "--------------------------------------------------------------------------------\n";
}



vector<int> voittoNumerot(){
    vector<int> voittoNums(10,0);

    int randNum;

    cout << "\n";

    for (int i = 0; i < voittoNums.size(); i++){
        randNum = rand() % 39 + 1;
        while (count(voittoNums.begin(), voittoNums.end(), randNum)){
            randNum = rand() % 39 + 1;
            
        }
        voittoNums[i] = randNum;
    }
        cout << "Ja voittonumerot ovat... ";

    for (int i = 0; i < 7; i++){
        cout << voittoNums[i] << ", ";
    }

    cout << "ja bonusnumerot ";

    for (int i = 7;i < 10; i++){
        if (i < 9){
            cout << voittoNums[i] << ", ";
        }
        else cout << voittoNums[i] << ".";
    }

    cout << "\n";
    return voittoNums;

}


void arvoNumerot(){
    vector<int> lottoNums(10,0);


    int randNum;

    cout << "\n";

    for (int i = 0; i < lottoNums.size(); i++){

        

        randNum = rand() % 39 + 1;
        while (count(lottoNums.begin(), lottoNums.end(), randNum)){
            randNum = rand() % 39 + 1;
            
        }
        lottoNums[i] = randNum;
    }

    cout << "Lottorivisi on ";

    for (int i = 0; i < 7; i++){
        cout << lottoNums[i] << ", ";
    }

    cout << "ja bonusnumerot ";

    for (int i = 7;i < 10; i++){
        if (i < 9){
            cout << lottoNums[i] << ", ";
        }
        else cout << lottoNums[i] << ".";
    }
    
    cout << "\n";

    vector<int> voittoVektori = voittoNumerot();

    voittoChecker(lottoNums,voittoVektori);

    
    cout << "\n--------------------------------------------------------------------------------\n\n";	

}


void arvoItseNumerot(){
    vector<int> lottoNums(10,0);
    int valintaNum;


    cout << "Anna kymmenen (10) lottonumeroa: \n";
    //cin >> valintaNum;

    for (int i = 0; i < lottoNums.size(); i++){
        cout << "Numero " << i+1 << ": ";
        takeNumber(valintaNum, 40, "Ei ole numero 1-",i);
        
        

        while (count(lottoNums.begin(), lottoNums.end(), valintaNum)){
            cout << "Numero on jo kaytetty!\nNumero " << i+1 << ": ";
            takeNumber(valintaNum, 40, "Ei ole numero 1-",i);
            
        }
        
        cout << "\n";
        lottoNums[i] = valintaNum;
    }

    cout << "Lottorivisi on ";

    for (int i = 0; i < 7; i++){
        cout << lottoNums[i] << ", ";
    }

    cout << "ja bonusnumerot ";

    for (int i = 7;i < 10; i++){
        if (i < 9){
            cout << lottoNums[i] << ", ";
        }
        else cout << lottoNums[i] << ".";
    }
    
    cout << "\n";

    vector<int> voittoVektori = voittoNumerot();

    voittoChecker(lottoNums,voittoVektori);

    
    cout << "\n--------------------------------------------------------------------------------\n\n";	

}



int main(){
    cout << "Tervetuloa helppoon lottoon, voiton saaminen on helppoa!\n";
    int valinta;

    srand((unsigned) time(NULL)); 


    while (true){
        cout << "Mita haluaisit tehda? (Syota numero 1-4)\n";
        cout << "1: Katso palkintosummat\n2: Pelaa koneen arpomalla rivilla\n3: Pelaa omilla numeroilla\n4: Lopeta pelaaminen\n";
        //cin >> valinta;
        takeNumber(valinta, 4, "Ei ole numero 1-4 valilla", 0);

		switch (valinta) { // switch case mitä tehdaan valitun numeron mukaan
		case 1:
            cout << "--------------------------------------------------------------------------------\n";	
            cout << "\n";
			palkintoSummat();
			break;
		case 2:
            cout << "--------------------------------------------------------------------------------\n";	
            cout << "\n";
            arvoNumerot();
			break;
		case 3:
            cout << "--------------------------------------------------------------------------------\n";	
            cout << "\n";
            arvoItseNumerot();
			break;
        case 4:
            return 0;
		}

	    
    
    }
}

