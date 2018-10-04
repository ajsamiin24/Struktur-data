#include <iostream.h>
#include <conio.h>

main () {
int nilai [100];
float jumlah=0, n;
float rata;
cout<<"Data yang akan dimasukan = ";cin>>n;
for (int i=0; i<n; i++){
cout<<"Masukan Nilai Ke : "<<i<< "=";
cin>>nilai [i];
}
cout<<"Nilai yang telah diinputkan = "<<endl;
for (int i=0; i<n; i++){
cout<<nilai[i]<<endl;
}
for (int i=0; i<n; i++){
jumlah= jumlah + nilai[i];
}
cout<<"Jumlah Nilai = "<<jumlah<<endl;
rata = jumlah/n;
cout<<"Rata- Rata nilai = "<<rata;
getch ();
}