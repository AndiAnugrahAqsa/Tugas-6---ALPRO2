#include <iostream>

using namespace std;

int Faktorial(int n){
if ((n==0) || (n==1))
	return (1);
else
	return (n*Faktorial(n-1));
}

int main (){
int angka;
cout<<"Masukkan Angka = "; cin>>angka;

cout<<"Hasil Faktorial = "<<Faktorial(angka);
}

