#include <iostream>
using namespace std;
string nama,noBP,semester;

int main(){
    nama = "Fitri Ananda Syabrina";
    noBP = "2310431025";
    semester = "1";
    float nilaiA, nilaiB, nilaiC, nilaiD,nilaiE, nilaiF, nilaiG, nilaiH;
    int sksA, sksB, sksC, sksD, sksE, sksF, sksG, sksH;
    cout<<"masukkan nilai matkul A = "; cin>>nilaiA;
    cout<<"banyak sks matkul A = "; cin>>sksA;
    cout<<"masukkan nilai matkul B = "; cin>>nilaiB;
    cout<<"banyak sks matkul B = "; cin>>sksB;
    cout<<"masukkan nilai matkul C = "; cin>>nilaiC;
    cout<<"banyak sks matkul C = "; cin>>sksC;
    cout<<"masukkan nilai matkul D = ";cin>>nilaiD;
    cout<<"banyak sks matkul D = ";cin>>sksD;
    cout<<"masukkan nilai matkul E = ";cin>>nilaiE;
    cout<<"banyak sks matkul E = ";cin>>sksE;
    cout<<"masukkan nilai matkul F = ";cin>>nilaiF;
    cout<<"banyak sks matkul F = ";cin>>sksF;
    cout<<"masukkan nilai matkul G = ";cin>>nilaiG;
    cout<<"banyak sks matkul G = ";cin>>sksG;
    cout<<"masukkan nilai matkul H = ";cin>>nilaiH;
    cout<<"banyak sks matkul H = ";cin>>sksH;
    cout<<"-----------------------------------------------------"<<endl;
    float jumlahsks = sksA + sksB + sksC +sksD + sksE + sksF + sksG + sksH;
    float totalnilai = ((nilaiA*sksA) + (nilaiB*sksB) + (nilaiC*sksC) + (nilaiD*sksD) +
                        (nilaiE*sksE) + (nilaiF*sksF) + (nilaiG*sksG) + (nilaiH*sksH));
    float IP = totalnilai/jumlahsks;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<" total nilai = "<< totalnilai<< " dengan IP = "<<IP<<endl;
    cout<<" nama saya = " + nama << endl;
    cout<<" nomor BP = " + noBP << endl;
    cout<<" semester = " +semester << endl;
    cout<<endl;
}
