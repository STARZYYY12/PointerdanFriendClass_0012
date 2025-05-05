#include <iostream>
using namespace std;

class mahasiswa {
    public :
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){
    
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); //memberi access operator

    mahasiswa &reffMhs =mhs;
    reffMhs.nim =2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim =3;
    pMhs->showNim();
    return 0;

}