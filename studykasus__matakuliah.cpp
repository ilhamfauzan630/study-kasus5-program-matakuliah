#include <iostream>
#include <string>
using namespace std;

class mata_kuliah{
    public :
    void input();
    int proses();
    void output();

    private :
    int nim, jumlah_sks, biaya_sks, total_pembayaran = 0;
    string nama, mk;
};

void mata_kuliah::input(){
    cout << "===================="<<endl;
    cout << "[    INPUT  KRS    ]"<<endl;
    cout << "===================="<<endl;
    cout << "Input NIM \t :";
    cin >> nim;
    cout << endl;
    cin.ignore();
    cout << "Input Nama Mahasiswa\t :";
    getline(cin, nama);
    cout << endl;
    cout << "Input Mata Kuliah\t :";
    getline(cin, mk);
    cout << endl;
    cout << "Input jumlah SKS\t :";
    cin >> jumlah_sks;
    cout << endl;
    cout << "Input biaya per-SKS\t :";
    cin >> biaya_sks;
}

int mata_kuliah::proses()
{
    int hasil;
    int i = jumlah_sks;
    if (hasil == 0)
    {
        return total_pembayaran;
    }
    total_pembayaran = biaya_sks * jumlah_sks;
    hasil = i - 1;
    
    return proses();
}

void mata_kuliah::output(){
    cout << "===================="<<endl;
    cout << "[  KRS MAHASISWA   ]"<<endl;
    cout << "===================="<<endl;
    cout << "NIM\t :"<<nim<<endl<<endl;
    cout << "Nama\t :"<<nama<<endl<<endl;
    cout << "Mata kuliah yang dipilih = " << mk<<endl<<endl;
    cout << "jumlah SKS\t :"<<jumlah_sks<<endl<<endl;
}

int main (){

    mata_kuliah KRS;

    KRS.input();
    KRS.output(); 
    cout << "total biaya : " <<  KRS.proses();

    return 0;
}