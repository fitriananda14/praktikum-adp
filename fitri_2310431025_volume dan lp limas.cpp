#include<iostream>
using namespace std;
string nama,noBP;
int main () {
nama = "Fitri Ananda Syabrina";
noBP = "2310431025";
float alas, tinggi, hasil_L, hasil_V;
cout<<" masukkan  alas  = "; cin>>alas;
cout<<" masukkan tinggi= "; cin>>tinggi;
hasil_V = alas*alas*tinggi*1/3;
hasil_L = alas*alas+4*(0.5*alas*tinggi);
cout<<"volume limas adalah = "<<hasil_V<<endl;
cout<<"luas permukaan Limas adalah = "<<hasil_L<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"nama saya = " + nama<<endl;
cout<<"nomor BP = " + noBP<<endl;

}
