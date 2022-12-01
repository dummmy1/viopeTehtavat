#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


double ulkoHalkaisijaCalc(float halkasija, float leveys,float profiiliKorkeus){
    float ulkoHalkasu = 2.54*halkasija + 2*leveys/10*(profiiliKorkeus/100);
    return ulkoHalkasu;

}


double vierimisKehaCalc(float kerroin, float ulkoHalk){
    return kerroin*ulkoHalk;
}


int main(){

    float korkeusProf, halkaisijaInch, leveysMm, kerroin = 3.0476;



    cout << "Anna renkaan leveys millimetreinä: \n";
    cin >> leveysMm;
    cout << "Anna renkaan korkeusprofiili prosentteina leveydestä: \n";
    cin >> korkeusProf;
    cout << "Anna vanteen halkaisija tuumina: \n";
    cin >> halkaisijaInch;


    float ulkoHalkaisija = ulkoHalkaisijaCalc(halkaisijaInch,leveysMm,korkeusProf);
    //double vierimisKeha = vierimisKehaCalc();


    cout << "Renkaan halkaisija on " << setprecision(3) <<ulkoHalkaisija << " senttimetriä.\n";

    cout << "Renkaan vierimiskehä on " << setprecision(4) <<vierimisKehaCalc(kerroin, ulkoHalkaisija) << " senttimetriä.\n";





}