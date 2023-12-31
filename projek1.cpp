#include <iostream>
#include <string>

using namespace std;

const int MAX_BUKU = 10;

struct Buku {
    string judul;
    string penulis;
    string penerbit;
    string jumlahalaman;
    string jenisbuku;
    string isbn;
    int tahunTerbit;
};

void tampilkanDaftarBuku(const Buku daftarBuku[], int jumlahBuku) {
    cout << "\nDaftar Buku yang Disimpan:\n";
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << "ID: " << i + 1 << endl; // Menampilkan ID buku
        cout << "Judul: " << daftarBuku[i].judul << endl;
        cout << "Penulis: " << daftarBuku[i].penulis << endl;
        cout << "penerbit: " << daftarBuku[i].penerbit << endl;
        cout << "jumlah halaman: " << daftarBuku[i].jumlahalaman << endl;
        cout << "jenis buku: " << daftarBuku[i].jenisbuku << endl;
        cout << "ISBN: " << daftarBuku[i].isbn << endl;
        cout << "Tahun Terbit: " << daftarBuku[i].tahunTerbit << endl << endl;
    }
   
}

int main() {
    Buku daftarBuku[MAX_BUKU];
    int jumlahBuku = 0;

    int pilihan;

    do {
    	cout <<"                 ======================="<<endl;
    	cout <<"                    PROGRAM DATA BUKU   "<<endl;
    	cout <<"                 ======================="<<endl;
        cout <<"                        Menu Utama" << endl;
        cout <<endl<<"	         ==== 1.Tambah Buku ====" << endl;
        cout <<endl<<"	       ==== 2.Tampilkan Daftar Buku ====" << endl;
        cout <<endl<<"              ==== 3. Update Informasi Buku ====" << endl;
        cout <<endl<<"                 ==== 4. Hapus Buku ====" << endl;
        cout <<endl<<"                   ==== 5. Keluar ====" << endl;
        cout << "Pilih opsi (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                if (jumlahBuku < MAX_BUKU) {
                    cout << "\nMasukkan informasi buku:" << endl;
                    cout << "Judul Buku: ";
                    cin.ignore();
                    getline(cin, daftarBuku[jumlahBuku].judul);
                    cout << "Penulis: ";
                    getline(cin, daftarBuku[jumlahBuku].penulis);
                    cout << "penerbit: ";
                    getline(cin, daftarBuku[jumlahBuku].penerbit);
                     cout << "jumlah halaman: ";
                    getline(cin, daftarBuku[jumlahBuku].jumlahalaman);
                     cout << "jenis buku: ";
                    getline(cin, daftarBuku[jumlahBuku].jenisbuku);
                     cout << "ISBN: ";
                    getline(cin, daftarBuku[jumlahBuku].isbn);
                    cout << "Tahun Terbit: ";
                    cin >> daftarBuku[jumlahBuku].tahunTerbit;
                    jumlahBuku++;
                }
				if (jumlahBuku < MAX_BUKU) {
                    cout <<endl<< "Judul Buku: ";
                    cin.ignore();
                    getline(cin, daftarBuku[jumlahBuku].judul);
                    cout << "Penulis: ";
                    getline(cin, daftarBuku[jumlahBuku].penulis);
                    cout << "penerbuit: ";
                    getline(cin, daftarBuku[jumlahBuku].penerbit);
                     cout << "jumlah halaman: ";
                    getline(cin, daftarBuku[jumlahBuku].jumlahalaman);
                     cout << "jenis buku: ";
                    getline(cin, daftarBuku[jumlahBuku].jenisbuku);
                     cout << "ISBN: ";
                    getline(cin, daftarBuku[jumlahBuku].isbn);
                    cout << "Tahun Terbit: ";
                    cin >> daftarBuku[jumlahBuku].tahunTerbit;
                    jumlahBuku++;
                } 
				if (jumlahBuku < MAX_BUKU) {
                    cout <<endl<< "Judul Buku: ";
                    cin.ignore();
                    getline(cin, daftarBuku[jumlahBuku].judul);
                    cout << "Penulis: ";
                    getline(cin, daftarBuku[jumlahBuku].penulis);
                    cout << "penerbuit: ";
                    getline(cin, daftarBuku[jumlahBuku].penerbit);
                     cout << "jumlah halaman: ";
                    getline(cin, daftarBuku[jumlahBuku].jumlahalaman);
                     cout << "jenis buku: ";
                    getline(cin, daftarBuku[jumlahBuku].jenisbuku);
                     cout << "ISBN: ";
                    getline(cin, daftarBuku[jumlahBuku].isbn);
                    cout << "Tahun Terbit: ";
                    cin >> daftarBuku[jumlahBuku].tahunTerbit;
                    jumlahBuku++;
                } 
				if (jumlahBuku < MAX_BUKU) {
                    cout <<endl<< "Judul Buku: ";
                    cin.ignore();
                    getline(cin, daftarBuku[jumlahBuku].judul);
                    cout << "Penulis: ";
                    getline(cin, daftarBuku[jumlahBuku].penulis);
                    cout << "penerbuit: ";
                    getline(cin, daftarBuku[jumlahBuku].penerbit);
                     cout << "jumlah halaman: ";
                    getline(cin, daftarBuku[jumlahBuku].jumlahalaman);
                     cout << "jenis buku: ";
                    getline(cin, daftarBuku[jumlahBuku].jenisbuku);
                     cout << "ISBN: ";
                    getline(cin, daftarBuku[jumlahBuku].isbn);
                    cout << "Tahun Terbit: ";
                    cin >> daftarBuku[jumlahBuku].tahunTerbit;
                    jumlahBuku++;
                } 
				if (jumlahBuku < MAX_BUKU) {
                    cout <<endl<< "Judul Buku: ";
                    cin.ignore();
                    getline(cin, daftarBuku[jumlahBuku].judul);
                    cout << "Penulis: ";
                    getline(cin, daftarBuku[jumlahBuku].penulis);
                    cout << "penerbuit: ";
                    getline(cin, daftarBuku[jumlahBuku].penerbit);
                     cout << "jumlah halaman: ";
                    getline(cin, daftarBuku[jumlahBuku].jumlahalaman);
                     cout << "jenis buku: ";
                    getline(cin, daftarBuku[jumlahBuku].jenisbuku);
                     cout << "ISBN: ";
                    getline(cin, daftarBuku[jumlahBuku].isbn);
                    cout << "Tahun Terbit: ";
                    cin >> daftarBuku[jumlahBuku].tahunTerbit;
                    jumlahBuku++;
                }   else {
                    cout << "Maaf, batas maksimum jumlah buku telah tercapai." << endl;
                }
                break;
            case 2:
                tampilkanDaftarBuku(daftarBuku, jumlahBuku);
                break;
<<<<<<< HEAD
            case 3:
                if (jumlahBuku > 0) {
                    tampilkanDaftarBuku(daftarBuku, jumlahBuku);
                    cout << "Masukkan ID buku yang ingin diupdate: ";
                    int idUpdate;
                    cin >> idUpdate;

                    if (idUpdate >= 1 && idUpdate <= jumlahBuku) {
                        cout << "\nMasukkan informasi baru untuk buku:" << endl;
                        cout << "Judul Buku: ";
                        cin.ignore();
                        getline(cin, daftarBuku[idUpdate - 1].judul);
                        cout << "Penulis: ";
                        getline(cin, daftarBuku[idUpdate - 1].penulis);
                        cout << "penerbit: ";
                        getline(cin, daftarBuku[idUpdate - 1].penerbit);
                        cout << "jumlah halaman: ";
                        getline(cin, daftarBuku[idUpdate - 1].jumlahalaman);
                        cout << "jenis buku ";
                        getline(cin, daftarBuku[idUpdate - 1].jenisbuku);
                        cout << "ISBN: ";
                        getline(cin, daftarBuku[idUpdate - 1].isbn);
                        cout << "Tahun Terbit: ";
                        cin >> daftarBuku[idUpdate - 1].tahunTerbit;

                        cout << "Informasi buku berhasil diupdate." << endl;
                    } else {
                        cout << "ID buku tidak valid." << endl;
                    }
                } else {
                    cout << "Daftar buku kosong." << endl;
                }
                break;
=======
   
>>>>>>> f78f4b59a57cfa90fce97a1eb6a2b25d5abb7bd8
            case 4:
                if (jumlahBuku > 0) {
                    tampilkanDaftarBuku(daftarBuku, jumlahBuku);
                    cout << "Masukkan ID buku yang ingin dihapus: ";
                    int idHapus;
                    cin >> idHapus;

                    if (idHapus >= 1 && idHapus <= jumlahBuku) {
                        // Menghapus buku dengan menggeser elemen array
                        for (int i = idHapus - 1; i < jumlahBuku - 1; ++i) {
                            daftarBuku[i] = daftarBuku[i + 1];
                        }
                        jumlahBuku--;

                        cout << "Buku berhasil dihapus." << endl;
                    } else {
                        cout << "ID buku tidak valid." << endl;
                    }
                } else {
                    cout << "Daftar buku kosong." << endl;
                }
                break;
           
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    } while (pilihan != 5);

    return 0;
}

