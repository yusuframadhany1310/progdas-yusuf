#include <iostream>
#include <cstring>

using namespace std;

struct identitas_mahasiswa{
    char Nama_mahasiswa[50];
    char Prodi[50];
    string Nim;
    char Kelas[10];
};

struct Tempat_tanggal_lahir{
    char daerah[20];
    int tanggal;
    char bulan[10];
    int tahun;
};

struct identitas{
    struct identitas_mahasiswa Mahasiswa;
    struct Tempat_tanggal_lahir ttl;
};

int main(){
    struct identitas Mahasiswa;

    strcpy(Mahasiswa.Mahasiswa.Nama_mahasiswa, "Yusuf Aura Ramadhany");
    Mahasiswa.ttl.tanggal = 13;
    strcpy(Mahasiswa.ttl.bulan, "Okttober");
    Mahasiswa.ttl.tahun = 2005;
    strcpy(Mahasiswa.ttl.daerah, "Gresik");
    Mahasiswa.Mahasiswa.Nim = "24051214168";
    strcpy(Mahasiswa.Mahasiswa.Prodi, "S1 Sistem Informasi");
    strcpy(Mahasiswa.Mahasiswa.Kelas, "SIE 24");

    cout << "Identitas Mahasiswa \n";
    cout << "Nama: " << Mahasiswa.Mahasiswa.Nama_mahasiswa << "\n";
    cout << "NIM: " << Mahasiswa.Mahasiswa.Nim << "\n";
    cout << "Prodi: " << Mahasiswa.Mahasiswa.Prodi << "\n";
    cout << "Kelas: " << Mahasiswa.Mahasiswa.Kelas << "\n";
    cout << "Tempat tanggal lahir: " << Mahasiswa.ttl.daerah << " " << Mahasiswa.ttl.tanggal << " " << Mahasiswa.ttl.bulan << " " << Mahasiswa.ttl.tahun;

    return 0;

}