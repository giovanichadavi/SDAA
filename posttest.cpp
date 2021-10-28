#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>


using namespace std;

struct crypto{
	string nama_crypto;
	long harga_crypto;
	long suplai;
	long harga_tertinggi;
	long harga_terendah;
};

int a,b,c,d;
int jumlah = 0;
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
	d=0;
	
	for ( c = 0; c < b ; c++){
		

		cout << "\nData Ke : " << c + 1 << endl;
		cout << "Nama Crypto = ";
		cin >> pointer[a].nama_crypto;
		
		cout << "Harga Crypto = Rp.";
		cin >> pointer[a].harga_crypto;
		
		cout << "Suplai = ";
		cin >> pointer[a].suplai;
		
		cout << "Harga Terendah = Rp.";
		cin >> pointer[a].harga_terendah;
		
		cout << "Harga Tertinggi = Rp.";
		cin >> pointer[a].harga_tertinggi;
		
		a++;
	
		
		
		data :
		cout <<"\nNama Crypto : " << pointer[a].nama_crypto<< endl;
		cout <<"Harga Crypto : " << pointer[a].harga_crypto<< endl;
		cout <<"Suplai : " << pointer[a].suplai;
		cout <<"Harga Terendah : " << pointer[a].harga_terendah;
		cout <<"Harga Tertinggi : " << pointer[a].harga_tertinggi << endl;
		cout << endl;
		system ("cls");
		cout << "Data Berhasil Disimpan !!!"<< endl;
	
	}

}

void readdata(){

	int i,j;
	cout << "------------------------------------------------------------------\n";
	cout << "============== DATA CRYPTOCURRENCY YANG TERSIMPAN ================\n";
	cout << "------------------------------------------------------------------\n\n";
	

	j=0;
	for ( i = 0; i < a ;i++){
		j=j+1;


		cout << "\nData Ke : " <<i + 1<< endl;
		cout <<"\nNama Crypto : " << pointer[i].nama_crypto<< endl;
		cout <<"Harga Crypto :Rp. " << pointer[i].harga_crypto<< endl;
		cout <<"Suplai : " << pointer[i].suplai << endl;
		cout <<"Harga Terendah :Rp. " << pointer[i].harga_terendah << endl;
		cout <<"Harga Tertinggi :Rp. " << pointer[i].harga_tertinggi << endl;
		cout << "==========================================================" << endl;
		cout << endl;
		
	}
	
}
	

void hapusdata(){
	readdata();
	int x,y;
	cout << "\nSilahkan Pilih Nomor Data Yang Ingin Di Hapus : ";
	cin >> x;
	
	cout <<"Data Nomor --> "<< x << " Terhapus " << endl;
	y=x-1;
	a--;
	for(int i = y ; i < a ; i++){
		pointer[i]=pointer[i+1];
		getch();
	}
	system("cls");
}
	
	
void swap(crypto *a, crypto *b){
	crypto t = *a;
	*a = *b;
	*b = t;
}

int partition (crypto arr[], int low, int high, int pilih_menu) {
	crypto pivot = arr[high];
	int m;
	int i = (low - 1);


	for (int m = low; m <= high - 1; m++) {
		if (pilih_menu == 1) {
			if (arr[m].nama_crypto < pivot.nama_crypto)	{	
				i++;
				swap(&arr[i], &arr[m]);
				cout << arr;
				
			}
		} else if (pilih_menu == 2) {
			if (arr[m].nama_crypto > pivot.nama_crypto)	{	
				i++;
				swap(&arr[i], &arr[m]);
			}
		} else if (pilih_menu == 3) {
			if (arr[m].suplai < pivot.suplai)	{	
				i++;
				swap(&arr[i], &arr[m]);
			}
		} else if (pilih_menu == 4) {
			if (arr[m].suplai > pivot.suplai)	{	
				i++;
				swap(&arr[i], &arr[m]);
			}
		}	
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
	
void quicksort(crypto arr[], int low, int high, int pilih_menu) {
	if (low < high) {
		int pi = partition(arr, low  , high, pilih_menu);
		quicksort(arr, low, pi - 1, pilih_menu);
		quicksort(arr, pi + 1, high, pilih_menu);
	}
	readdata();
}

void urut_data(crypto *coin, int &jumlah){
	int pilih_menu;

	
	cout << "Silahkan Pilih Jenis Pengurutan"<< endl;
	cout << " 1. Mengurutkan Data Sesuai Nama Secara Ascending" << endl;
	cout << " 2. Mengurutkan Data Sesuai Nama Secara Descending" << endl;
	cout << " 3. Mengurutkan Data Sesuai Jumlah Suplai Secara Ascending" << endl;
	cout << " 4. Mengurutkan Data Sesuai Jumlah Suplai Secara Descending" << endl << endl;
	cout << " Silahkan Pilih Menu Pengurutan : " ;
	cin >> pilih_menu;

	quicksort(&coin[0],0, jumlah, pilih_menu);
	jumlah+=1;

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
	cout << " 5. Mengurutkan Data" << endl;
	cout << " 6. Keluar " << endl;
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
		
		system("cls");
		urut_data(&coin[0],jumlah);
		
		goto menu;

	
	}
	if(pilih==6){
		keluar();
	}
}
