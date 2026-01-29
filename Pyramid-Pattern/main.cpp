#include <iostream>
using namespace std;

void bosluk(int satirSayisi,int satirNumarasi){
    for(int i=satirSayisi - satirNumarasi; i>0 ; i--){
        cout << " ";
    }
}

void piramit(int satirSayisi){
    //satır 1 için
    bosluk(satirSayisi , 1);
    cout << '^' << endl;
    // / + ...X... + sag/
    for(int satirNumarasi = 2; satirSayisi>=satirNumarasi ; satirNumarasi++){
        bosluk(satirSayisi , satirNumarasi);
        cout << '/' ; 
            for(int xSayisi=1 ; xSayisi<=2*(satirNumarasi-1)-1 ; xSayisi++){
                cout <<'X';
            }
        cout << "\\" << endl;
        }
         
    }

int main(){
    int satirSayisi;
    cout << "istediğiniz satır sayısını giriniz: ";
    cin >> satirSayisi;
    piramit(satirSayisi);
    return 0;
}