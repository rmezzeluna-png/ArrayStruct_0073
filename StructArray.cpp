#include <iostream> 
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    detailalamat alamat;
    int umur;
};

int main()
{
    //deklarasi obyek dari strucct orang
    orang mhs[3];
    //isi obyek
    for (int i = 0; i <= 2; i++){
    cout << "nama mahasiswa : " ;
    getline(cin, mhs[i].nama);
    cout << "alamat desa : " ;
    getline(cin, mhs[i].alamat.desa);
    cout << "umur : " ;
    getline(cin, mhs[i].alamat.kota);
    cout << "umur : ";
    cin >> mhs[i].umur;
    cout << endl;
    }
    cout <<endl;
    //menampilkan isi obyek
    for (int i = 0; i <= 2; i++)
    {
    cout << "nama : " << mhs[i].nama<<endl;
    cout << "desa : " << mhs[i].alamat.desa<<endl;
    cout << "kota : " << mhs[i].alamat.kota<<endl;
    cout << "umur : " << mhs[i].umur<<endl;
    }
}