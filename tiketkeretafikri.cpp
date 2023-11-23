#include <iostream>
#include <string.h>


using namespace std;

int main()
{	
	int tanggal, jumlah_tiket, nomor_tiket, total_harga;
	
	// tujuan dan daftar harga
	cout << "\n---- Pesan Tiket Kereta Api ----\n";
	cout << "Silahkan Pilih Tujuan Dari Bandung Ke\n";
	string tujuan[] = { "Surabaya", "Jakarta", "Yogyakarta"};
	int harga_tiket[] = {500000, 300000, 400000};
	
	// Input pilihan destinasi
    cout << "Pilihan tujuan:\n";
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << tujuan[i] << endl;
    }
    
    nomor_tiket;
    cout << "Masukkan nomor destinasi (1-3): ";
    cin >> nomor_tiket;
    
     // Validasi pilihan destinasi
    if (nomor_tiket < 1 || nomor_tiket > 3) {
        cout << "Pilihan tidak Tersedia,Pilihlah 1/2/3.\n";
        return 1;
    }

    // Input tanggal keberangkatan
    tanggal;
    cout << "Masukkan tanggal keberangkatan: ";
    cin.ignore(); // Untuk mengabaikan newline dari input sebelumnya
   	cin>>tanggal;
    
    //batas tanggal
	if (tanggal < 1 || tanggal > 31)	{
		cout << "Tidak Ada Tanggal itu.\n";
        return 1;
	}
	
	// Input jumlah tiket
    jumlah_tiket;
    cout << "Masukkan jumlah tiket: ";
    cin >> jumlah_tiket;
    //batas jumla tiket
    if (jumlah_tiket < 1 || jumlah_tiket > 30)	{
		cout << "Tiket Minimal 1 Maxsimal 30.\n";
        return 1;
	}
    
    // Hitung total biaya tiket
    total_harga = harga_tiket[nomor_tiket - 1] * jumlah_tiket;
    
    // Cetak pesan konfirmasi
    system("cls"); //untuk menghapus layar screen
    cout << "\n---- Pesanan Tiket Kereta Api ----\n";
    cout << "Destinasi:Bandung - " << tujuan[nomor_tiket - 1] << endl;
    cout << "Tanggal Keberangkatan: " << tanggal << endl;
    cout << "Jumlah Tiket: " << jumlah_tiket << endl;
    cout << "Harga per Tiket: Rp " << harga_tiket[nomor_tiket - 1] << endl;
    cout << "Total Biaya: Rp " << total_harga << endl;
    cout << "Terima kasih telah melakukan pemesanan!\n";

    return 0;
}
