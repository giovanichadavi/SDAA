#include <iostream>
#include <conio.h>
using namespace std;

struct crypto{
	string nama_crypto;
	long harga_crypto;
	long suplai;
	long harga_tertinggi;
	long harga_terendah;
};
crypto batas [100];
int a,b,c,d;
int memilih;

crypto coin [10];
crypto *pointer = coin;

void login(){
	login :
	string pass_input, user_input;
	
	cout << "\n\t//====================================================\\" << endl;
	cout << "\t||  SELAMAT DATANG DI PROGRAM DATA CRYPTOCURRENCY !!! ||" << endl;
	cout << "\t\\====================================================//" << endl;
	cout << "\tSilahkan Anda Login Terlebih Dahulu\n"<< endl;
	cout << "\tMasukkan Username : " ;
	cin >> user_input;
	
	cout << "\tMasukkan Password : " ;
	cin >> pass_input;
	
	if (user_input == "giovani" && pass_input == "001"){
		system("cls");
		cout << "\tUsername Dan Password Benar" << endl;
		cout << "\tSilahkan Tekan Enter....";
		
		
	}
	else{
		system("cls");
		cout << "\tUsername Atau Password Yang Anda Masukkan Salah ! " << endl;
		
		goto login;
	}
	getch();
	
	
}

void tambahdata(){

	cout << " Masukkan Jumlah data yang ingin ditambahkan = ";
	cin >> b ;

	
	for (int i = 0; i < b ;i++){

		cout << "\nData Ke : " << i + 1 << endl;
		cout << "Nama Crypto = ";
		cin >> pointer[i].nama_crypto;
		
		cout << "Harga Crypto = ";
		cin >> pointer[i].harga_crypto;
		
		cout << "Suplai = ";
		cin >> pointer[i].suplai;
		
		cout << "Harga Terendah = ";
		cin >> pointer[i].harga_terendah;
		
		cout << "Harga Tertinggi = ";
		cin >> pointer[i].harga_tertinggi;
		

	
		
		
		data :
		cout <<"\nNama Crypto : " << pointer[i].nama_crypto<< endl;
		cout <<"Harga Crypto : " << pointer[i].harga_crypto<< endl;
		cout <<"Suplai : " << pointer[i].suplai;
		cout <<"Harga Terendah : " << pointer[i].harga_terendah;
		cout <<"Harga Tertinggi : " << pointer[i].harga_tertinggi << endl;
		cout << endl;
		system ("cls");
		cout << "Data Berhasil Disimpan !!!"<< endl;
	
	}

}

void readdata(){


	cout << "==================================================================\n";
	cout << "============== DATA CRYPTOCURRENCY YANG TERSIMPAN ================\n";
	cout << "==================================================================\n";
	


	for (int i = 0; i < b ;i++){
		

		
		cout << "\nData Ke : " <<i + 1<< endl;
		cout <<"\nNama Crypto : " << pointer[i].nama_crypto<< endl;
		cout <<"Harga Crypto : " << pointer[i].harga_crypto<< endl;
		cout <<"Suplai : " << pointer[i].suplai << endl;
		cout <<"Harga Terendah : " << pointer[i].harga_terendah << endl;
		cout <<"Harga Tertinggi : " << pointer[i].harga_tertinggi << endl;
		cout << endl;
		
		
	
	}
	
}
	

void hapusdata(){
	readdata();
	int x,y;
	cout << "\nSilahkan Pilih Nomor Data Yang Ingin Di Hapus : ";
	cin >> x;
	
	cout <<"Data Nomor --> "<< x << "Terhapus" << endl;
	
	y=x-1;
	a--;
	for(int i = y ; i < y ; i++){
		coin[i]=coin[i+1];
		y=x-1;
	}
}
	

void updatedata(){
	
	readdata();
	int k,l;
	cout << "Masukkan Nomor Data Yang Ingin di Update : ";
	cin >> k;
	
	l=k-1;
	
	cout << "Nama Crypto : ";
	cin >> pointer[l].nama_crypto;
	
	cout << "Harga Crypto : ";
	cin >> pointer[l].harga_crypto;
	
	cout << "Suplai Coin Crypto : ";
	cin >> pointer[l].suplai;
	
	cout << "Harga Terendah : ";
	cin >> pointer[l].harga_terendah;
	
	cout << "Harga Tertinggi : ";
	cin >> pointer[l].harga_tertinggi;
		
	readdata();
	system("cls");
}

void keluar(){
		system("cls");
		cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI\n"<<endl;
		cout << "========= PROGRAM INI DIBUAT OLEH ========\n";
		cout << "\tGIOVANI CHADAVI HIDAYAT\n";
		cout << "\tINFORMATIKA A 2020\n";
		cout << "\t2009106001\n";
		cout << "==========================================";
		getch();
}



int main(){
	int pilih;
	
	login();
	
	system("cls");
	menu:
	cout << "\n======== SELAMAT DATANG ========\n"<< endl;
	cout << " Program Data CryptoCurrency " << endl;
	cout << " 1. Menambah Data Coin Crypto " << endl;
	cout << " 2. Menampilkan Data Coin Crypto " << endl;
	cout << " 3. Mengupdate Data Crypto " << endl;
	cout << " 4. Menghapus Data Crypto " << endl;
	cout << " 5. Keluar " << endl;
	cout << " ================================\n"<<endl;
	
	cout << " Masukkan Nomor Menu Yang Anda Inginkan : ";
	cin >> pilih;
	
	if(pilih==1){
		system("cls");
		tambahdata();
		goto menu;
	}
	if(pilih==2){
		system("cls");
		readdata();
		goto menu;
	}
	if(pilih==3){
		system("cls");
		updatedata();
		goto menu;
	}
	if(pilih==4){
		system("cls");
		hapusdata();
		goto menu;
		
	}
	if(pilih==5){
		keluar();
	}
}
