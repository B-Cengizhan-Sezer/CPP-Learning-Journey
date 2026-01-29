#include <iostream>
#include <string>
using namespace std;

int uzunluk(string girdi)
{
    int uzunluk = girdi.length();
    return uzunluk;
}

int main()
{
    string password;
    string girdi;
    string cikti;
    cout << "Girdi: ";
    getline(cin , girdi);
    cout << "şifre gir:" ;
    getline(cin , password);
    int yazilacak_sifreSaysi= (uzunluk(girdi)/uzunluk(password));
    string sonuc_sifre;
    for(int i = 1; i<= yazilacak_sifreSaysi ;i ++ )
        sonuc_sifre += password;
    yazilacak_sifreSaysi = uzunluk(girdi) % uzunluk(password);
    for(int i = 0 ; i < yazilacak_sifreSaysi; i++)
        sonuc_sifre += password[i];
    for(int i=0; i< uzunluk(girdi); i++)
        cikti += girdi[i] ^ sonuc_sifre[i];
    cout<< cikti;
}




