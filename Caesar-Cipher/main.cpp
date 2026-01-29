#include <iostream>
#include <string>
#include <sstream>
using namespace std;

char karakter(char alınan_harf){
    char karakterler[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 ";
        for(int i=0;i<64; i++){
            if(alınan_harf==karakterler[i]){
                if(i+12<=63){
                    return karakterler[i+12];
                    break;
                }else{
                    return karakterler[i+12-64];
                    break;
                }
        }
    }
}

int main(){
    string alınanCumle;
    int karakter_sayisi;
    string sonucCumle="";
    cout << "Cümle gir, en fazla 100 karakter :";    
    getline(cin , alınanCumle);
    karakter_sayisi = alınanCumle.length();
    for(int a=0; a<karakter_sayisi; a++){
        sonucCumle +=karakter(alınanCumle[a]);
    }
    cout << sonucCumle;
    return 0;

}