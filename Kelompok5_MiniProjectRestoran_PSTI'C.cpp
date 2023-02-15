#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;
int main(){

	//KAMUS

	//KAMUS TIPE CHAR
	char pilihan;
	char kepastian;
	char kepastian2;
	char kepastianBoking1;
	char kepastianBoking2;
	char kepastianBoking3;
	char banyakmenu;
	char voucher;
    char pilihFitur;

    //KAMUS TIPE INTEGER
    int alamat;
    int payment;
    int diskon;
    int pesanan=0;
    int porsi=0;
    int i=0;
    int a=0;
    int b=0;
    int c=0;
    int n=0;
    int hargapesanan1=0;
    int hargapesanan2=0;

    int HariBoking=0;
    int Menuu;
    int OrangBoking;
    int pilihanboking;
    int TahunSewa=0;
    int BulanSewa=0;
    int TanggalSewa=0;

    int ongkir = 5000;
    int ongkir1 = 10000;
    int ongkir2 = 15000;



    int pesanann[20];
    int harga [20];
    int porsiMakanan[20];

    //KAMUS TIPE DOUBLE
    double Menu[15];

    long int totalhargapesanan=0;
    //MENGISI ARRAY
    Menu[0] = 18000; Menu[1] = 25000;Menu[2] = 990000;Menu[3] = 15000;Menu[4] = 15000;Menu[5] = 20000;Menu[6] = 25000;Menu[7] = 25500;Menu[8] = 9500;Menu[9] = 28000;Menu[10] = 7000;
    Menu[11] = 5000;Menu[12] = 18000;Menu[13] = 5000;Menu[14] = 8000;
    long int HargaTempatBoking[6]={2222222,3333333,5555555,6565656,8654321,13265204};
    long int HargaTempatBoking2[6]={20000,20000,20000,20000,486999,550500};

    //KAMUS TIPE STRING
    string alamatlengkap;
    string nohp;
    string voc;
    string atasnama;
    string namaPesanan[15];
    string Jamsewa;

    //MENGISI ARRAY
    namaPesanan[0]= "Crispy Chicken Authentic",namaPesanan[1]= "Paket Special ~ Crispy Chicken w/ Rice + Sandwich cheese ~",namaPesanan[2]= "Fried Doves w/ Loves",
    namaPesanan[3]= "Pecel Ayam+Nasi",namaPesanan[4]= "Seblak Mang Edun level 1",namaPesanan[5]= "Seblak Mang Edun level 2",namaPesanan[6]= "Seblak Mang Edun level 3",
    namaPesanan[7]= "Fried Rice w/ Omelette",namaPesanan[8]= "Sandwich Cheese",namaPesanan[9]= "Mix Fruit Juice w/ Choco Boba",namaPesanan[10]= "Teh Anget Mang Asep",
    namaPesanan[11]= "Jus Mangga Darawet",namaPesanan[12]= "STMJ (Susu Telur Madu Jahe)",namaPesanan[13]= "Jus Jeruk",namaPesanan[14]= "Teh Manis";

    string TempatBoking [6] = {"Lantai 1 Restoran","Lantai 2 Restoran","Lantai 3 Restoran","Rooftop Restoran","Paket VIP : Booking dari Lantai 1 hingga Lantai 3 Restoran","Paket VVIP : Booking dari Lantai 1 hingga Rooftop"};
    string TempatBoking2[6] = {"Lantai 1 Restoran","Lantai 2 Restoran","Lantai 3 Restoran","Rooftop Restoran","Paket VIP : Lantai 3 Restoran (Max 12 orang) [ Bonus : Soda Gembira 12 pcs ]","Paket VVIP : Rooftop Restoran (Max 12 orang) [ Bonus : Milo w/ Cheese + oreo 12 pcs ]"};




//------- ALGORITMA ---------

    cout<<"Program by Raihan Ferdyanza 2015061085 || Yusuf Rizky Yuhansyah	2015062062  || Putri Pratiwi 2015061061"<<endl; //nama npm
    cout<<"UNILA PSTI C Bandar Lampung"<<endl;
    cout<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------" << endl;
    cout<<endl; //Agar ada sela seperti enter pada ms word

//PERKENALAN PROGRAM

    cout<<"[ Program Pesan Antar Makanan Restoran ]\n"<<endl;
    cout<<"Ayo Pesan,Keburu Kehabisan :D\n\n";
    cout<<"*Mohon untuk Mengetik ENTER untuk memulai program !"<<endl;
    cin.get(); //cin.get(); berfungsi untuk memberi jeda


	system("cls");		// Untuk clear screen

    cout << "~ Harap Memasukkan Nama Anda : D ~" <<endl;
    cout << endl;
    cout << "*Atas Nama Siapa : " ;
	getline(cin,atasnama);  // Menginputkan Nama Pemesan (user)
    cout << endl;
	cout << "Selamat datang " << atasnama << endl << endl;
	cout<<"*Mohon untuk Mengetik ENTER melanjutkan !"<<endl;
	cin.get();

		system("cls");
//MENU MAKANAN DAN MINUMAN YANG DITAWARKAN

		cout << "~INFO PROMOSI MENU RESTORAN~" << endl;
		cout << endl;
		cout <<"------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << endl;
		cout << "                              || ADA MENU SPECIAL BUAT KAMU HARI INII LOHH !! ||                         " << endl;
		cout << endl;
		cout << "     [ ~~ Menu Special : Crispy Chicken with Rice + Sandwich with cheese Hanya Rp25.000 :O ~~ ]" << endl;
		cout << "     s&k berlaku*" << endl;
		cout << endl;

        cout <<"                                 -------------------------------------------                               " << endl;
        cout <<"                                    Best Seller : Seblak Mang Edun Level 3                                 " << endl;
		cout <<"                                 -------------------------------------------                               " << endl;
        cout << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------------" << endl;
        cout<<endl;
        cout<<"*Mohon untuk Mengetik ENTER untuk melanjutkan !"<<endl;
        cin.get();

		system("cls");
		mesen: //BERFUNGSI SEBAGAI CHECKPOINT

        cout<< endl;
		cout<<"                      Menu Makanan dan Minuman Untuk Kamu :                      " << endl;
        cout<<".____________________________________________________________________________."<<endl;
        cout<<"|                        Food and Snacks                                     |"<<endl;
        cout<<"|____________________________________________________________________________|"<<endl;
        cout<<"|  No Pesanan              Makanan                            |     Harga    |"<<endl;
        cout<<"|                                                             |              |"<<endl;
        cout<<"|     1.         Crispy Chicken Authentic                     |  Rp. 18.000  |"<<endl;
        cout<<"|     2.         ~ Crispy Chicken w/ Rice + Sandwich cheese ~ |  Rp. 25.000  |"<<endl;
        cout<<"|     3.         Fried Doves w/ Loves                         |  Rp.990.000  |"<<endl;
        cout<<"|     4.         Pecel Ayam+Nasi                              |  Rp. 15.000  |"<<endl;
        cout<<"|     5.         Seblak Mang Edun level 1                     |  Rp. 15.000  |"<<endl;
        cout<<"|     6.         Seblak Mang Edun level 2                     |  Rp. 20.000  |"<<endl;
        cout<<"|     7.         Seblak Mang Edun level 3                     |  Rp. 25.000  |"<<endl;
        cout<<"|     8.         Fried Rice w/ Omelette                       |  Rp. 25.500  |"<<endl;
        cout<<"|     9.         Sandwich Cheese                              |  Rp.  9.500  |"<<endl;
        cout<<"|_____________________________________________________________|______________|"<<endl;
        cout<<".____________________________________________________________________________."<<endl;
        cout<<"|                            Drinks                                          |"<<endl;
        cout<<"|____________________________________________________________________________|"<<endl;
        cout<<"|  No Pesanan               Minuman                          |     Harga     |"<<endl;
        cout<<"|                                                            |               |"<<endl;
        cout<<"|    10.         Mix Fruit Juice w/ Choco Boba               |  Rp. 28.000   |"<<endl;
        cout<<"|    11.         Teh Anget Mang Asep                         |  Rp. 7.000    |"<<endl;
        cout<<"|    12.         Jus Mangga Darawet                          |  Rp. 5.000    |"<<endl;
        cout<<"|    13.         STMJ (Susu Telur Madu Jahe)                 |  Rp. 18.000   |"<<endl;
        cout<<"|    14.         Jus Jeruk                                   |  Rp. 5.000    |"<<endl;
        cout<<"|    15.         Teh Manis                                   |  Rp. 8.000    |"<<endl;
        cout<<"|____________________________________________________________|_______________|"<<endl;
		cout << endl;

        //KATA-KATA DIBAWAH BERFUNGSI UNTUK MENUNTUN USER (PEMESAN)
        cout << "Sekedar Info : ~ Untuk Membooking Tempat di Restoran,Pelanggan Harus Memesan Makanan atau Minuman" << endl;
        cout << "Note : - Pesan dengan mengetik angka berdasarkan no pesanan yang tertera diatas (1-15)" << endl;
		cout << "       - Kamu Bisa Menambahkan Pesanan Lagi Jika Sudah Memesan                        "<< endl;
        cout << "       - Kamu berhak mendapatkan diskon 20% jika beli dari Rp. 100.000 - Rp. 200.000 (Berlaku Pesan Antar)" << endl;
        cout << "       - Kamu berhak mendapatkan diskon 30% jika beli lebih dari Rp. 200.000 (Berlaku Pesan Antar)" << endl;
		cout << endl;

		cout << "*Kamu ingin pesan apa hari ini (angka) ? : " ;
		cin >> pesanann[i]; // MEMASUKKAN PESANAN DARI MENU YANG DISEDIAKAN BERUPA ANGKA
        //ANGKA YANG DIINPUT AKAN MASUK KE pesanann[i] DALAM HAL INI KARENA i=0 MAKA INPUT MASUK KE pesanann[0]
		cout << endl;

        cout << "*Kamu ingin memesan berapa porsi (pcs)? : " ;
        cin >> porsiMakanan[i]; // INPUT PORSI (MEMESAN PORSI MAKANAN ATAU MINUMAN PESANAN TADI)
        if (porsiMakanan[i] >= 1 or porsiMakanan[i] <= 100){ // USER DIPERUNTUKKAN UNTUK MEMASUKKAN PORSI TIDAK BOLEH LEBIH DARI 100 ATAU 0

        b = pesanann[i]; // INPUT PESANAN DARI MENU YANG DISEDIAKAN BERUPA ANGKA TADI AKAN DI SAMA DENGAN KAN INT B
        //DISAMAKAN INT B AGAR DAPAT BISA MASUK KE DALAM ARRAY DI BAWAH YAITU Menu[b-1]
        harga[i] = Menu[b-1] * porsiMakanan[i]; //HARGA TOTAL YAITU HARGA SATUAN DIKALI PORSI YANG DIPESAN
        totalhargapesanan = totalhargapesanan + harga[i] ; //LALU HASIL DARI HARGA AKAN MENJADI TOTAL HARGA

        cout << endl;
        cout << "Kamu Memesan  : " << namaPesanan[b-1] << " " << porsiMakanan[i] << " Porsi (Pcs)" << endl; //MEMBERITAHU MENU YANG DIPESAN
        cout << "Pesanan ini seharga : Rp." << totalhargapesanan << endl; // SERTA MEMBERITAHU HARGA NYA
        cout << endl;

        } else { cout << endl; // JIKA USER SALAH MEMASUKKAN NOMOR PESANAN >15 ATAU <1
            cout << "--- Sepertinya kamu salah memasukan nomor pesanan diatas :( ---" << endl;
            cout << "       --- Tolong Masukkan Nomor Pesanan dengan Benar ---      " << endl;
            cout << endl;
            goto mesen; // JIKA SALAH USER AKAN KEMBALI KE CHECKPOINT
		}

        i=1; // DEKLARASI I=1 KARENA PESANAN PERTAMA TELAH DIBUAT


		mesenn: //BERFUNGSI SEBAGAI CHECKPOINT
        cout << "*Apakah ingin menambah pesanan lagi? (y/n) : ";
        cin >> banyakmenu; //INPUT PILIHAN USER INGIN PESAN LAGI ATAU TIDAK

        if (banyakmenu == 'y' or banyakmenu == 'Y'){ //JIKA PILIHAN Y


            pesanlagi://CHECKPOINT

            cout << endl;
            cout << "Note : Pesan dengan mengetik angka berdasarkan no pesanan yang tertera diatas (1-15)" << endl;
            cout << "*Kamu ingin memesan apa (angka) ? : " ;
            cin >> pesanann[i]; // MEMASUKKAN PESANAN DARI MENU YANG DISEDIAKAN BERUPA ANGKA
           //ANGKA YANG DIINPUT AKAN MASUK KE pesanann[i]

            if (pesanann[i] > 0 && pesanann[i] <= 15){ //JIKA USER MEMASUKKAN SESUAI DENGAN ANGKA YANG TERTERA MAKA BISA DILANJUTKAN
            cout << endl;
            cout << "*Kamu ingin memesan berapa porsi (pcs)? : " ;
            cin >> porsiMakanan[i]; // INPUT PORSI (MEMESAN PORSI MAKANAN ATAU MINUMAN PESANAN TADI)
            cout << endl;

            b = pesanann[i];  // INPUT PESANAN DARI MENU YANG DISEDIAKAN BERUPA ANGKA TADI AKAN DI SAMA DENGAN KAN INT B
            //DISAMAKAN INT B AGAR DAPAT BISA MASUK KE DALAM ARRAY DI BAWAH YAITU Menu[b-1]
            harga[i] = Menu[b - 1] * porsiMakanan[i]; //HARGA TOTAL YAITU HARGA SATUAN DIKALI PORSI YANG DIPESAN
            totalhargapesanan = totalhargapesanan + harga[i] ; //LALU HASIL DARI HARGA AKAN MENJADI TOTAL HARGA


            cout << endl;
            cout << "Kamu  Menambah Pesanan  : " << namaPesanan[b-1] << " " << porsiMakanan[i] << " Porsi" << endl; //MEMBERITAHU MENU YANG DIPESAN
            cout << "Total Harga Pesanan Kamu Sekarang : Rp." << totalhargapesanan << endl; // SERTA MEMBERITAHU TOTAL HARGA SEKARANG

            n++; //N AKAN BERTAMBAH 1
            i++; //I AKAN BERTAMBAH 1
            goto mesenn; //DISINI KAMI MEMBUAT PERULANGAN MENGGUNAKAN CEKPOINT TADI

            }

            else { cout << endl; // JIKA USER SALAH MEMASUKKAN NOMOR PESANAN >15 ATAU <1
            cout << "--- Sepertinya kamu salah memasukan nomor pesanan diatas :( ---" << endl;
            cout << "       --- Tolong Masukkan Nomor Pesanan dengan Benar ---      " << endl;
            cout << endl;
            goto pesanlagi;} // JIKA SALAH USER AKAN KEMBALI KE CHECKPOINT

        }else if  (banyakmenu == 'n' or banyakmenu == 'N'){

		} //JIKA PILIHAN N PROGRAM AKAN DILANJUTKAN DAN TIDAK MENGULANG
        else {
            cout << endl;
            cout << "Kamu salah memasukkan huruf,Harap Memasukkan ulang (y/n)" << endl; //JIKA SALAH INPUT HURUF
            cout << endl;
            goto mesenn;}

    //DIBAWAH INI BERFUNGSI UNTUK MENERAPKAN BILA HARGA PESANAN MEMENUHI SYARAT MAKA AKAN MENDAPATKAN DISKON
	if (totalhargapesanan >= 100000 && totalhargapesanan <= 200000){
		totalhargapesanan = totalhargapesanan - (totalhargapesanan * 0.2);
		cout << endl;
		cout << "------------------------------------------------------------------------------" << endl;
  		cout << "                         [ ~ Atas Nama : " << atasnama  << " ~ ]              " << endl;
  		cout << "                      ~ Selamat kamu mendapatkan diskon 20% ~                 " << endl;
  		cout << endl;
        cout << "                            Menu yang Kamu Pesan :                            " << endl;

        for(i=0;i<=n; i= i+1){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
        b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        cout << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }

   		cout << endl;
   		cout << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA SETELAH DISKON
   		cout << "------------------------------------------------------------------------------" << endl;

  		cout << endl;
	} else if (totalhargapesanan > 200000){
		totalhargapesanan = totalhargapesanan - (totalhargapesanan * 0.3);
		cout << endl;
		cout << "------------------------------------------------------------------------------" << endl;
  		cout << "                          [ ~ Atas Nama : " << atasnama  << " ~ ]             " << endl;
  		cout << "                      ~ Selamat kamu mendapatkan diskon 30% ~                 " << endl; // MEMBERITAHU TOTAL HARGA SETELAH DISKON
  		cout << endl;
        cout << "                            Menu yang Kamu Pesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
        b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        cout << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }

   		cout << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl;
   		cout << "------------------------------------------------------------------------------" << endl;

  		cout << endl;
	}
	else {
    	cout << endl;
        cout << "------------------------------------------------------------------------------" << endl;
        cout << "                           ~ Atas Nama : " << atasnama  << " ~                " << endl;
        cout << endl;
        cout << "                            Menu yang Kamu Pesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
        b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        cout << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }

   		cout << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
   		cout << "------------------------------------------------------------------------------" << endl;
   		cout << endl;
	}
    kepastiann: // CHECK POINT


    cout << "Note : Jika Tidak Yakin Ketik Huruf (n) , Jika Yakin Ketik Huruf (y)" << endl;
    cout << "Note : Jika Memilih Tidak Yakin Program Akan Kembali Ke Awal " << endl;
    cout << "*Apakah kamu yakin dengan pesananmu (y/n) ? : " ; // USER MEMILIH UNTUK YAKIN ATAU TIDAK DENGAN PESANANNYA
    cin >> kepastian; // INPUT KEPASTIAN

    if (kepastian == 'Y' or kepastian == 'y') { //JIKA KEPASTIAN=Y MAKA PROGRAM DILANJUTKAN
        cout << endl;
        cout << "Baiklah jika anda sudah yakin :3 !\n" << endl;
    } else if (kepastian == 'N' or kepastian == 'n' ) { // JIKA KEPASTIAN=N MAKA AKAN KEMBALI KE PESAN MENU DIAWAL
        cout << endl;

		cout << "Ingin menambah pesanan (y) atau ingin memesan ulang (n) ? : " << flush;
		cin >> kepastian2;

		if (kepastian2 == 'y' or kepastian2 == 'Y') {

		cout<< endl;
		cout<<"                      Menu Makanan dan Minuman Untuk Kamu :                      " << endl;
        cout<<".____________________________________________________________________________."<<endl;
        cout<<"|                        Food and Snacks                                     |"<<endl;
        cout<<"|____________________________________________________________________________|"<<endl;
        cout<<"|  No Pesanan              Makanan                            |     Harga    |"<<endl;
        cout<<"|                                                             |              |"<<endl;
        cout<<"|     1.         Crispy Chicken Authentic                     |  Rp. 18.000  |"<<endl;
        cout<<"|     2.         ~ Crispy Chicken w/ Rice + Sandwich cheese ~ |  Rp. 25.000  |"<<endl;
        cout<<"|     3.         Fried Doves w/ Loves                         |  Rp.990.000  |"<<endl;
        cout<<"|     4.         Pecel Ayam+Nasi                              |  Rp. 15.000  |"<<endl;
        cout<<"|     5.         Seblak Mang Edun level 1                     |  Rp. 15.000  |"<<endl;
        cout<<"|     6.         Seblak Mang Edun level 2                     |  Rp. 20.000  |"<<endl;
        cout<<"|     7.         Seblak Mang Edun level 3                     |  Rp. 25.000  |"<<endl;
        cout<<"|     8.         Fried Rice w/ Omelette                       |  Rp. 25.500  |"<<endl;
        cout<<"|     9.         Sandwich Cheese                              |  Rp.  9.500  |"<<endl;
        cout<<"|_____________________________________________________________|______________|"<<endl;
        cout<<".____________________________________________________________________________."<<endl;
        cout<<"|                            Drinks                                          |"<<endl;
        cout<<"|____________________________________________________________________________|"<<endl;
        cout<<"|  No Pesanan               Minuman                          |     Harga     |"<<endl;
        cout<<"|                                                            |               |"<<endl;
        cout<<"|    10.         Mix Fruit Juice w/ Choco Boba               |  Rp. 28.000   |"<<endl;
        cout<<"|    11.         Teh Anget Mang Asep                         |  Rp. 7.000    |"<<endl;
        cout<<"|    12.         Jus Mangga Darawet                          |  Rp. 5.000    |"<<endl;
        cout<<"|    13.         STMJ (Susu Telur Madu Jahe)                 |  Rp. 18.000   |"<<endl;
        cout<<"|    14.         Jus Jeruk                                   |  Rp. 5.000    |"<<endl;
        cout<<"|    15.         Teh Manis                                   |  Rp. 8.000    |"<<endl;
        cout<<"|____________________________________________________________|_______________|"<<endl;
		cout << endl;

		goto pesanlagi;


		} else if (kepastian2 == 'n' or kepastian2 == 'Y') {
			for(i=0;i<=n;i++){ //PERULANGAN DIBUAT UNTUK MENGAHAPUS SEMUA YANG TELAH DIINPUT USER
        	//SEMUA AKAN DIJADIKAN 0
        	pesanann[i] = 0 ;
        	harga[i] = 0 ;
        	porsiMakanan[i] = 0 ; //SAMA SEPERTI DI AWAL PROGRAM
       		}
        	totalhargapesanan = 0;
        	i=0;
        	n=0;
        	goto mesen; //LALU AKAN KEMBALI KE CHECK POINT
		}
		 else {
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl; //JIKA SALAH INPUT HURUF
        cout << endl;
        goto kepastiann; //KE CHECKPOINT
    }
    }

    Pilihfitur:

    cout << endl;
    cout << "Info : Bila Memasukkan 'P' Anda Memilih Pesan Antar" << endl;
    cout << "       Bila Memasukkan 'B' Anda Memilih Membooking Tempat di Restoran" << endl;
    cout << "Anda Ingin Pesanan Diantar atau Memesan Pesanan lalu Membooking Tempat di Restoran ? (P/B) : " ;
    cin >> pilihFitur;

    if (pilihFitur == 'P' or pilihFitur =='p'){

	system("cls");
	alamatt: // CHECKPOINT

	cout << "Pesanan kamu ingin diantar kemana? (masukkan angka)\n1) Bandar Lampung\n2) Pesawaran + Rp. 5000 ongkir\n3) Lampung timur + Rp. 10000 ongkir\n4) Lampung utara + Rp. 15000 ongkir" << endl;
	cout << "*Masukkan angka disini: ";
	cin >> alamat; // MASUKKAN PILIHAN ALAMAT PEMESAN
	cout << endl;

	if(alamat < 1 or alamat > 4){ // JIKA SALAH INPUT KARENA TIDAK SESUAI
        cout << "Kamu memasukkan angka yang tidak terdaftar -_-" << endl;
        cout << endl;
        goto alamatt;//KEMBALI KE CHECKPOINT
	} else {}

	system("cls");

    //INSTRUKSI UNTUK MEMASUKKAN ALAMAT
	cout << "Masukkan alamat lengkapmu \n";
	cout << "[ Dengan Format : JalanDanGangRumah_NomorRumah_Kelurahan_Kecamatan ] \n";
	cout << "~ Atau Bisa Menggunakan Link Share Google Maps ~ \n \n";
	cout << "|| Contoh 1 : Jl.Cendana_No.24_SumurBatu_TelukBetungUtara || \n";
	cout << "|| Contoh 2 : https://goo.gl/maps/wSt3bmgHBTPy5NW77       || \n \n";
    cout << "*Masukkan Alamat Lengkap atau Link Google Maps Alamat yang Ingin Diantar : ";
	cin.ignore(); //UNTUK MENGABAIKAN NEW LINE (BARIS BARU) AKIBAT MENGGUNAKAN CIN
	//MAKA UNTUK BISA MENGGUNAKAN GETLINE LAGI KITA BISA MENGGUNAKAN CIN.IGNORE
	getline(cin,alamatlengkap); //MEMASUKKAN ALAMAT SESUAI INSTRUKSI
    cout << endl;

	cout << "*Masukkan nomor Handphone kamu agar dapat kami hubungi : ";
	cin >> nohp; //MEMASUKKAN NO HP PEMESAN

	system("cls");

    //DATA DIRI YANG TELAH DIINPUTKAN PEMESAN
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    cout << endl;
    cout << "                            Menu yang Kamu Pesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        cout << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    cout << endl;
    cout << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    cout << "~ Alamat Lengkap atau Link G-Maps : " << alamatlengkap << " ~ " << endl;
    cout << "~ Nomor Handphone Anda : " << nohp << " ~" << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    cout << "Note : Jika Tidak Yakin Ketik Huruf (n) , Jika Yakin Ketik Huruf (y)" << endl;
    cout << "Note : Jika Memilih Tidak Yakin Program Akan Kembali " << endl;
    cout << endl;

    kepastiannn: //CHECKPOINT

    cout << "*Apakah kamu yakin dengan alamat dan no handphone mu (y/n) ? : " ; //BERTANYA JIKA SUDAH YAKIN
    cin >> kepastian; //INPUT KEPASTIAN
    cout << endl;

    if (kepastian == 'Y' or kepastian == 'y') { //JIKA SUDAH YAKIN PROGRAM AKAN DILANJUTKAN
        cout << "Baiklah jika anda sudah yakin :3 !" << endl;
        cout << endl;
    } else if (kepastian == 'N' or kepastian == 'n' ) { // JIKA BELUM YAKIN AKAN KEMBALI KE CHECKPOINT
        cout << endl;
        system("cls");
        goto alamatt;
    } else { //JIKA SALAH INPUT
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl;
        cout << endl;
        goto kepastiannn;
    }

	system("cls");
	if (alamat == 1){//IF STATEMENT UNTUK ALAMAT
        //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
		paymentt: //CHECKPOINT
		cout << "Pilih Metode pembayaran \n1) Transfer Bank  \n2) COD\n";
		cout << "*Masukkan angka disini: ";
		cin >> payment; //MEMASUKKAN METODE PEMBAYARAN
		cout << endl;

	system("cls");

		if (payment == 1){ //IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Transfer ke MANDIRI dengan No.Rekening : 1140020484963 Nama : PT.Restoran \n" ;
			cout << "Silahkan transfer uang sebesar Rp. " << totalhargapesanan << "\nPihak Restoran akan memvalidasi secara otomatis jika kamu sudah mentransfer sesuai yang ditentukan\n";
			cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
		} else if (payment == 2){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Kurir Makanan akan segera ke tempat kamu,Harap menunggu ....\n " ;
			cout << "Silahkan siapkan uang sebesar Rp. " << totalhargapesanan << " Untuk pembayaran di tempat\n";
            cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
		} else {
			cout << "Kamu memasukkan nomor yang salah\n";
			goto paymentt; //JIKA SALAH INPUT KEMBALI KE CHECKPOINT
		}

	} else if (alamat == 2){//IF STATEMENT UNTUK ALAMAT
        //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
		paymenttt: //CHECKPOINT
		cout << "Pilih Metode pembayaran \n1) Transfer Bank  \n2) COD\n";
		cout << "*Masukkan angka disini: ";
		cin >> payment;
		cout << endl;

		if (payment == 1){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Transfer ke MANDIRI dengan No.Rekening : 1140020484963 Nama : PT.Restoran \n" ;
			cout << "Silahkan transfer uang sebesar Rp. " << totalhargapesanan + ongkir<< "\nPihak Restoran akan memvalidasi secara otomatis jika kamu sudah mentransfer sesuai yang ditentukan\n";
		    cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
		} else if (payment == 2){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Kurir Makanan akan segera ke tempat kamu,Harap menunggu ....\n " ;
			cout << "Silahkan siapkan uang sebesar Rp. " << totalhargapesanan << " Untuk pembayaran di tempat\n";
			cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
		} else {
			cout << "Kamu memasukkan nomor yang salah\n";
			goto paymenttt;
		}

	}	else if (alamat == 3){//IF STATEMENT UNTUK ALAMAT
        //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
		payment3: //CHECKPOINT
		cout << "Pilih Metode pembayaran \n1) Transfer Bank  \n2) COD\n";
		cout << "*Masukkan angka disini: ";
		cin >> payment;
		cout << endl;

		if (payment == 1){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Transfer ke MANDIRI dengan No.Rekening : 1140020484963 Nama : PT.Restoran \n" ;
			cout << "Silahkan transfer uang sebesar Rp. " << totalhargapesanan + ongkir1 << "\nPihak Restoran akan memvalidasi secara otomatis jika kamu sudah mentransfer sesuai yang ditentukan\n";
			cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
		} else if (payment == 2){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Kurir Makanan akan segera ke tempat kamu,Harap menunggu ....\n " ;
			cout << "Silahkan siapkan uang sebesar Rp. " << totalhargapesanan + ongkir1 << " Untuk pembayaran di tempat\n";
			cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
		} else {
			cout << "Kamu memasukkan nomor yang salah\n";
			goto payment3;

		}
	}
		else if (alamat == 4){//IF STATEMENT UNTUK ALAMAT
        //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
		payment4: //CHECKPOINT
		cout << "Pilih Metode pembayaran \n1) Transfer Bank  \n2) COD\n";
		cout << "*Masukkan angka disini: ";
		cin >> payment;
		cout << endl;

		if (payment == 1){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Transfer ke MANDIRI dengan No.Rekening : 1140020484963 Nama : PT.Restoran \n" ;
			cout << "Silahkan transfer uang sebesar Rp. " << totalhargapesanan + ongkir2 << "\nPihak Restoran akan memvalidasi secara otomatis jika kamu sudah mentransfer sesuai yang ditentukan\n";
			cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
			system("cls");
		} else if (payment == 2){//IF STATEMENT DENGAN PAYMENT
            //INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
			cout << "Kurir Makanan akan segera ke tempat kamu,Harap menunggu ....\n" ;
			cout << "Silahkan siapkan uang sebesar Rp. " << totalhargapesanan + ongkir2 << " Untuk pembayaran di tempat\n";
			cout << endl;
            cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
            cin.get();
			cin.get();
			cout << "[ Harap bersiaga kurir yang mengirim akan menghubungi mu untuk memastikan pesanan dan alamat kamu ] \n";
			system("cls");
		} else {
			cout << "Kamu memasukkan nomor yang salah\n";
			goto payment4; }
	    }

	system("cls");
    FileRestoran.open("StrukPesanAntar.txt",ios::app); //MEMBUKA ATAU MEMBUAT NOTEPAD (TXT) BERNAMA StrukPesanan (ios::app (append) BERFUNGSI UNTUK MENAMBAH BARIS AGAR DATA YG DIINPUT SEBELUMNYA TIDAK HILANG)

    if (payment == 1){
    // MEMASUKKAN DATA PEMESANAN YANG TELAH DIINPUTKAN PEMESAN KE FILE EKSTERNAL (TXT)
    FileRestoran << endl;
    FileRestoran << "STRUK PESAN ANTAR" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;
    FileRestoran << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    FileRestoran << endl;
    FileRestoran << "                            Menu yang Dipesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        FileRestoran << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    FileRestoran << endl;
    FileRestoran << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    FileRestoran << "~ Alamat Lengkap atau Link G-Maps : " << alamatlengkap << " ~      " << endl;
    FileRestoran << "~ Nomor Handphone Anda : " << nohp << " ~ " << endl;
    FileRestoran << "~ Metode Pembayaran : Transfer Bank ~" << endl;
    FileRestoran << "~ MOHON VALIDASI SEGERA JIKA UANG SUDAH DITRANSFER ~" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;

    FileRestoran.close(); //MENUTUP FILE NOTEPAD
    }

    else if (payment == 2){
    // MEMASUKKAN DATA PEMESANAN YANG TELAH DIINPUTKAN PEMESAN KE FILE EKSTERNAL (TXT)
    FileRestoran << endl;
    FileRestoran << "STRUK PESAN ANTAR" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;
    FileRestoran << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    FileRestoran << endl;
    FileRestoran << "                            Menu yang Dipesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        FileRestoran << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    FileRestoran << endl;
    FileRestoran << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    FileRestoran << "~ Alamat Lengkap atau Link G-Maps : " << alamatlengkap << " ~      " << endl;
    FileRestoran << "~ Nomor Handphone Anda : " << nohp << " ~ " << endl;
    FileRestoran << "~ Metode Pembayaran : COD (Cash On Delivery)~" << endl;
    FileRestoran << "~ MOHON VALIDASI SEGERA JIKA SUDAH MEMESAN ~" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;

    FileRestoran.close(); //MENUTUP FILE NOTEPAD
    }
}

	else if (pilihFitur == 'B' or pilihFitur == 'b'){

    NohpBoking:
    cout << endl;
    cout << "*Masukkan nomor Handphone kamu agar dapat kami hubungi : ";
	cin >> nohp; //MEMASUKKAN NO HP PEMESAN
    cout << endl;

kepastianBoking1:

    cout << "*Apakah kamu yakin dengan nomor handphone mu (y/n) ? : " ; //BERTANYA JIKA SUDAH YAKIN
    cin >> kepastianBoking1; //INPUT KEPASTIAN

 if (kepastianBoking1 == 'Y' or kepastianBoking1 == 'y') { //JIKA SUDAH YAKIN PROGRAM AKAN DILANJUTKAN
        cout << "Baiklah jika anda sudah yakin :3 !" << endl;
        cout << endl;
    } else if (kepastianBoking1 == 'N' or kepastianBoking1 == 'n' ) { // JIKA BELUM YAKIN AKAN KEMBALI KE CHECKPOINT
        cout << endl;
        system("cls");
        goto NohpBoking;
    } else { //JIKA SALAH INPUT
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl;
        cout << endl;
        goto kepastianBoking1;
    }

    PilihanBoking:

    cout << "-- Info : --" << endl;
    cout << "Pilih Angka '1' Bila Ingin Memboking (Menyewa) Satu Lantai atau Beberapa Lantai [ Untuk Beberapa Hari ]" << endl;
    cout << "[ Untuk acara besar :Pernikahan,Perayaan Besar,dsb. ] " << endl;
    cout << endl;
    cout << "Pilih Angka '2' Bila Ingin Memboking Tempat Duduk Untuk Pribadi atau Hanya Untuk Beberapa Orang [ Untuk 1 Hari ]" << endl;
    cout << "[ Dengan maksimal 12 orang ]" << endl;
    cout << endl;
    cout << "Masukkan Pilihan :" ;
    cin >> pilihanboking;

    if (pilihanboking == 1){
    cout << endl;
    MenuLantai:
    cout << "Pilih Lantai yang Ingin Dibooking (Sewa) : " << endl;
    cout<<".____________________________________________________________________________________________________________________________."<<endl;
    cout<<"|                                                   BOOKING SEWA TEMPAT                                                      |"<<endl;
    cout<<"|____________________________________________________________________________________________________________________________|"<<endl;
    cout<<"| No Booking |              Tempat atau Paket                                                         | Harga sewa per hari  |"<<endl;
    cout<<"|            |                                                                                        |                      |"<<endl;
    cout<<"|     1.     |  Lantai 1 Restoran                                           (13 orang - 75 orang)     |  Rp. 2.222.222       |"<<endl;
    cout<<"|     2.     |  Lantai 2 Restoran                                           (50 orang - 115 orang)    |  Rp. 3.333.333       |"<<endl;
    cout<<"|     3.     |  Lantai 3 Restoran                                           (80 orang - 150 orang)    |  Rp. 5.555.555       |"<<endl;
    cout<<"|     4.     |  Rooftop Restoran                                            (40 orang - 80 orang)     |  Rp. 6.565.656       |"<<endl;
    cout<<"|     5.     |  Paket VIP : Booking dari Lantai 1 hingga Lantai 3 Restoran  (200 orang - 300 orang)   |  Rp. 8.654.321       |"<<endl;
    cout<<"|     6.     |  Paket VVIP : Booking dari Lantai 1 hingga Rooftop           (250 orang - 350 orang)   |  Rp. 13.265.204      |"<<endl;
    cout<<"|____________|________________________________________________________________________________________|______________________|"<<endl;
    cout << endl;
    cout << "[ MASUKKAN ANGKA 1-6 SESUAI TEMPAT YANG INGIN DIBOOKING ]" << endl;
    cout << "Masukkan No. Booking : ";
    cin >> c;
    cout << endl;

        if(c >= 1  and c <= 6 ){
    cout << "Info :" << endl;
    cout << "Anda memilih untuk Membooking : " << TempatBoking[c-1] << endl;
    cout << "Dengan harga : Rp." << HargaTempatBoking[c-1]  << endl;
    cout << endl;
    }else {
    cout << "Info :" << endl;
    cout << "Anda tidak memilih untuk Membooking,pilih angka (1 hingga 6) " << endl;
    cout << endl;
    goto MenuLantai;
    }

kepastianBoking2:

    cout << "*Apakah kamu yakin dengan pesananmu (y/n) ? : " ; //BERTANYA JIKA SUDAH YAKIN
    cin >> kepastianBoking2; //INPUT KEPASTIAN

    if (kepastianBoking2 == 'Y' or kepastianBoking2 == 'y') { //JIKA SUDAH YAKIN PROGRAM AKAN DILANJUTKAN
        cout << "Baiklah jika anda sudah yakin :3 !" << endl;
        cout << endl;
    } else if (kepastianBoking2 == 'N' or kepastianBoking2 == 'n' ) { // JIKA BELUM YAKIN AKAN KEMBALI KE CHECKPOINT
        cout << endl;
        system("cls");
        goto MenuLantai;
    } else { //JIKA SALAH INPUT
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl;
        cout << endl;
        goto kepastianBoking2;
    }

    cout << endl;
    cout << "         ~ Berdasarkan aturan Restoran : Penyewaan tempat perharinya harus berurutan ~        " << endl;
    cout << "|                Contoh seorang pelanggan menyewa 5 hari pada tanggal 26 juni                |" << endl;
    cout << "| Berarti menyewa tempat 5 hari mulai dari tanggal 26 hingga 4 hari kedepan secara berurutan |" << endl;
    cout << endl;
    cout << "Ingin menyewa berapa hari : "<< endl;;
    cin >> HariBoking;
    cout << "Ingin menyewa pada tanggal : " << endl;
    cout << "Tahun   : " ;
    cin >> TahunSewa;
    cout << "Bulan   : " ;
    cin >> BulanSewa;
    cout << "Tanggal : " ;
    cin >> TanggalSewa;

    totalhargapesanan = totalhargapesanan + (HargaTempatBoking[c-1]*HariBoking);

   //DATA DIRI YANG TELAH DIINPUTKAN PEMESAN
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    cout << endl;
    cout << "                            Menu yang Kamu Pesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        cout << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    cout << endl;
    cout << "~ Tempat yang kamu pesan : " << TempatBoking[c-1] << " selama " << HariBoking << " Hari kedepan ~" << endl;
    cout << "~ (Terhitung ketika sudah memasuki Tanggal yang di Booking) ~" << endl;
    cout << "~ Anda menyewa atau membooking tempat pada Tahun : "<< TahunSewa << " Bulan : "<< BulanSewa << " Tanggal : " << TanggalSewa << " ~" << endl;
    cout << "~ Harga Bookingan atau Sewa Tempat mu : Rp." << HargaTempatBoking[c-1]*HariBoking << " ~" << endl;
    cout << endl;
    cout << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    cout << "~ Nomor Handphone Anda : " << nohp << " ~" << endl;
    cout << "------------------------------------------------------------------------------" << endl;

kepastianBoking3:

    cout << "Note : Jika Tidak Yakin Ketik Huruf (n) , Jika Yakin Ketik Huruf (y) , " << endl;
    cout << "Note : Jika Ketik Huruf (u) maka semua yang diinput akan terhapus dan Program Kembali menampilkan menu Lantai" << endl;
    cout << "Note : Jika Memilih Tidak Yakin Program Akan Kembali ke Pilih Fitur " << endl;
;
    cout << endl;
    cout << "*Apakah kamu yakin dengan pesananmu (y/n) ? : "; //BERTANYA JIKA SUDAH YAKIN
    cin >> kepastianBoking3; //INPUT KEPASTIAN

    if (kepastianBoking3 == 'Y' or kepastianBoking3 == 'y') { //JIKA SUDAH YAKIN PROGRAM AKAN DILANJUTKAN
        cout << "Baiklah jika anda sudah yakin :3 !" << endl;
        cout << endl;
    } else if (kepastianBoking3 == 'N' or kepastianBoking3 == 'n' ) { // JIKA BELUM YAKIN AKAN KEMBALI KE CHECKPOINT
        cout << endl;
        system("cls");
        goto Pilihfitur;
    }  else if (kepastianBoking3 == 'U' or kepastianBoking3 == 'u' ) {
          totalhargapesanan = totalhargapesanan - (HargaTempatBoking[c-1]*HariBoking);
          cout << endl;
          goto MenuLantai;}
    else { //JIKA SALAH INPUT
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl;
        cout << endl;
        goto kepastianBoking3;
    }



//INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
    cout << "-----  Untuk Metode Pembayaran Sewa Atau Booking Tempat Restoran Hanya Melayani Pembayaran Dengan Transfer Bank -----" << endl;
    cout << endl ;
    cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
    cin.get();
    cin.get();
    cout << "==============================================================================================" << endl;
    cout << "--PERHATIAN : JANGAN MENTRANSFER UANG SEBELUM PIHAK RESTORAN MEMVALIDASI KETERSEDIAAN TEMPAT--" << endl;
    cout << "==============================================================================================" << endl;
    cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
    cin.get();
    cin.get();
    cout << "Transfer ke MANDIRI dengan No.Rekening : 1140020484963 Nama : PT.Restoran \n" ;
    cout << "Silahkan transfer uang sebesar Rp. " << totalhargapesanan  << "\nPihak Restoran akan memvalidasi secara otomatis jika kamu sudah mentransfer sesuai yang ditentukan\n";
    cout << endl;
    cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
    cin.get();
    cin.get();

    system("cls");

    FileRestoran.open("StrukPesanSewaBooking.txt",ios::app);
    FileRestoran << endl;
    FileRestoran << "STRUK PESAN DAN SEWA ATAU BOOKING TEMPAT" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;
    FileRestoran << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    FileRestoran << endl;
    FileRestoran << "                            Menu yang Dipesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        FileRestoran << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    FileRestoran << endl;
    FileRestoran << "~ Tempat yang kamu pesan : " << TempatBoking[c-1] << " selama " << HariBoking << " Hari kedepan ~" << endl;
    FileRestoran << "~ (Terhitung ketika sudah memasuki Tanggal yang di Booking) ~" << endl;
    FileRestoran << "~ Anda menyewa atau membooking tempat pada Tahun : "<< TahunSewa << " Bulan : "<< BulanSewa << " Tanggal : " << TanggalSewa << " ~" << endl;
    FileRestoran << "~ Harga Bookingan atau Sewa Tempat mu : Rp." << HargaTempatBoking[c-1]*HariBoking << " ~" << endl;
    FileRestoran << endl;
    FileRestoran << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    FileRestoran << "~ Nomor Handphone Anda : " << nohp << " ~" << endl;
    FileRestoran << "~ Metode Pembayaran : Transfer Bank ~" << endl;
    FileRestoran << "~ MOHON VALIDASI SEGERA JIKA UANG SUDAH DITRANSFER ~" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;
    FileRestoran.close(); //MENUTUP FILE NOTEPAD
    cout << endl;
}
    else if (pilihanboking == 2){

    cout << endl;
    MenuBooking:
    cout << "Pilih Lantai yang Ingin Dibooking (Sewa) : " << endl;
    cout<<".____________________________________________________________________________________________________________________________."<<endl;
    cout<<"|                                                   BOOKING TEMPAT                                                           |"<<endl;
    cout<<"|____________________________________________________________________________________________________________________________|"<<endl;
    cout<<"| No Booking |              Tempat   (HANYA MAKSIMAL 12 ORANG)                                        | Harga sewa per orang |"<<endl;
    cout<<"|            |                                                                                        |                      |"<<endl;
    cout<<"|     1.     |  Lantai 1 Restoran                                                                     |  Rp. 20.000          |"<<endl;
    cout<<"|     2.     |  Lantai 2 Restoran                                                                     |  Rp. 30.000          |"<<endl;
    cout<<"|     3.     |  Lantai 3 Restoran                                                                     |  Rp. 40.000          |"<<endl;
    cout<<"|     4.     |  Rooftop Restoran                                                                      |  Rp. 50.000          |"<<endl;
    cout<<".____________________________________________________________________________________________________________________________."<<endl;
    cout<<"| No Booking |              Paket  (Untuk  12 ORANG)                                                  |      Harga sewa      |"<<endl;
    cout<<"|            |                                                                                        |                      |"<<endl;
    cout<<"|     5.     |  Paket VIP : Lantai 3 Restoran ( 12 orang ) [ Bonus : Soda Gembira 12 pcs ]            |  Rp. 486.999         |"<<endl;
    cout<<"|     6.     |  Paket VVIP : Rooftop Restoran ( 12 orang ) [ Bonus : Milo w/ Cheese + oreo 12 pcs ]   |  Rp. 550.500         |"<<endl;
    cout<<"|____________|________________________________________________________________________________________|______________________|"<<endl;
    cout << endl;
    cout << "[ MASUKKAN ANGKA 1-6 SESUAI TEMPAT YANG INGIN DIBOOKING ]" << endl;
    cout << "Masukkan No. Booking : ";
    cin >> c;
    cout << endl;

    if(c == 5  and c == 6 ){
    OrangBoking = 12;
    cout << "Info :" << endl;
    cout << "Anda memilih untuk Membooking : " << TempatBoking2[c-1] << endl;
    cout << "Untuk : " << OrangBoking << " Orang" << endl;
    cout << "Dengan harga : Rp." << HargaTempatBoking2[c-1]  << endl;
    cout << endl;

    }else if (c >= 1  and c <= 5 ){
    OrangBoking:
    cout << "Masukkan berapa orang yang ingin memboking (Maks 12 Orang) :" ;
    cin >> OrangBoking;
    cout << endl;
    if (OrangBoking > 12 or OrangBoking < 0){
        cout << "Anda melebihi kapasitas,maaf" << endl;
        cout << endl;
        goto OrangBoking;
    }else {
    cout << "Info :" << endl;
    cout << "Anda tidak memilih untuk Membooking,pilih angka (1 hingga 6) " << endl;
    goto MenuBooking;
    cout << endl;
    }}

kepastianBokingg2:

    cout << "*Apakah kamu yakin dengan pesananmu (y/n) ? : " ; //BERTANYA JIKA SUDAH YAKIN
    cin >> kepastianBoking2; //INPUT KEPASTIAN

    if (kepastianBoking2 == 'Y' or kepastianBoking2 == 'y') { //JIKA SUDAH YAKIN PROGRAM AKAN DILANJUTKAN
        cout << "Baiklah jika anda sudah yakin :3 !" << endl;
        cout << endl;
    } else if (kepastianBoking2 == 'N' or kepastianBoking2 == 'n' ) { // JIKA BELUM YAKIN AKAN KEMBALI KE CHECKPOINT
        cout << endl;
        system("cls");
        goto MenuBooking;
    } else { //JIKA SALAH INPUT
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl;
        cout << endl;
        goto kepastianBokingg2;
    }

    cout << endl;
    cout << "~ PEMBOOKINGAN ~ " << endl;
    cout << endl;
    cout << "Ingin membooking pada tanggal : " << endl;
    cout << "Tahun   : " ;
    cin >> TahunSewa;
    cout << "Bulan   : " ;
    cin >> BulanSewa;
    cout << "Tanggal : " ;
    cin >> TanggalSewa;
    cout << "Jam [0.00 - 24.00] (WIB): " ;
    cin.ignore();
    getline(cin,Jamsewa);

    totalhargapesanan = totalhargapesanan + (HargaTempatBoking2[c-1]*OrangBoking);

   //DATA DIRI YANG TELAH DIINPUTKAN PEMESAN
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    cout << endl;
    cout << "                            Menu yang Kamu Pesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        cout << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    cout << endl;
    cout << "~ Tempat atau Paket yang dibooking: " << TempatBoking2[c-1] << endl;
    cout << "~ Untuk : " << OrangBoking << " Orang ~" << endl;
    cout << "~ (Terhitung ketika sudah memasuki Tanggal yang di Booking) ~" << endl;
    cout << "~ Anda menyewa atau membooking tempat pada Tahun : "<< TahunSewa << " Bulan : "<< BulanSewa << " Tanggal : " << TanggalSewa << " Jam : " << Jamsewa << " ~" << endl;
    cout << "~ Harga Bookingan atau Sewa Tempat mu : Rp." << HargaTempatBoking2[c-1]*OrangBoking << " ~" << endl;
    cout << endl;
    cout << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    cout << "~ Nomor Handphone Anda : " << nohp << " ~" << endl;
    cout << "------------------------------------------------------------------------------" << endl;

kepastianBokingg3:

    cout << "Note : Jika Tidak Yakin Ketik Huruf (n) , Jika Yakin Ketik Huruf (y) , " << endl;
    cout << "Note : Jika Ketik Huruf (u) maka semua yang diinput akan terhapus dan Program Kembali menampilkan menu Lantai" << endl;
    cout << "Note : Jika Memilih Tidak Yakin Program Akan Kembali ke Pilih Fitur " << endl;

    cout << endl;
    cout << "*Apakah kamu yakin dengan pesananmu (y/n) ? : "; //BERTANYA JIKA SUDAH YAKIN
    cin >> kepastianBoking3; //INPUT KEPASTIAN

    if (kepastianBoking3 == 'Y' or kepastianBoking3 == 'y') { //JIKA SUDAH YAKIN PROGRAM AKAN DILANJUTKAN
        cout << "Baiklah jika anda sudah yakin :3 !" << endl;
        cout << endl;
    } else if (kepastianBoking3 == 'N' or kepastianBoking3 == 'n' ) { // JIKA BELUM YAKIN AKAN KEMBALI KE CHECKPOINT
        cout << endl;
        system("cls");
        goto Pilihfitur;
    }  else if (kepastianBoking3 == 'U' or kepastianBoking3 == 'u' ) {
          totalhargapesanan = totalhargapesanan - (HargaTempatBoking[c-1]*HariBoking);
          cout << endl;
          goto MenuLantai;}
    else { //JIKA SALAH INPUT
        cout << endl;
        cout << "Kamu memasukkan huruf yang salah,silahkan ketik (y/n)" << endl;
        cout << endl;
        goto kepastianBoking3;
    }



//INSTRUKSI USER UNTUK MENSTRASFER UANG UNTUK MENU YANG DIPESAN DAN INSTRUKSI LAINNYA
    cout << "-----  Untuk Metode Pembayaran Sewa Atau Booking Tempat Restoran Hanya Melayani Pembayaran Dengan Transfer Bank -----" << endl;
    cout << endl << endl;
    cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
    cin.get();
    cin.get();
    cout << "==============================================================================================" << endl;
    cout << "--PERHATIAN : JANGAN MENTRANSFER UANG SEBELUM PIHAK RESTORAN MEMVALIDASI KETERSEDIAAN TEMPAT--" << endl;
    cout << "==============================================================================================" << endl;
    cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
    cin.get();
    cin.get();
    cout << "Transfer ke MANDIRI dengan No.Rekening : 1140020484963 Nama : PT.Restoran \n" ;
    cout << "Silahkan transfer uang sebesar Rp. " << totalhargapesanan  << "\nPihak Restoran akan memvalidasi secara otomatis jika kamu sudah mentransfer sesuai yang ditentukan\n";
    cout << endl;
    cout << "*Mohon untuk Mengetik ENTER untuk melanjutkan ! \n";
    cin.get();
    cin.get();

    system("cls");

    FileRestoran.open("StrukPesanSewaBooking.txt",ios::app);
    FileRestoran << endl;
    FileRestoran << "STRUK PESAN DAN SEWA ATAU BOOKING TEMPAT" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;
    FileRestoran << "                          ~ Atas Nama : " << atasnama  << " ~                " << endl;
    FileRestoran << endl;
    FileRestoran << "                            Menu yang Dipesan :                            " << endl;

        for(i=0;i<=n;i++){ //(PERULANGAN) I DIBUAT 0 DENGAN KONDISI i<=n DAN BILA TERPENUHI KONDISINYA MAKA i= i+1 JIKA TIDAK TERPENUHI MAKA KELUAR LOOP
            b = pesanann[i] ; // AGAR BISA DIMASUKKAN DALAM ARRAY
        FileRestoran << "~ " << namaPesanan[b-1] <<" Rp"<< harga[i] << " Untuk "<< porsiMakanan[i] << " Porsi ~"<< endl; //SAMA SEPERTI DI AWAL PROGRAM
        }
    FileRestoran << endl;
    FileRestoran << endl;
    FileRestoran << "~ Tempat atau Paket yang dibooking: " << TempatBoking2[c-1] << endl;
    FileRestoran << "~ Untuk : " << OrangBoking << " Orang ~" << endl;
    FileRestoran << "~ (Terhitung ketika sudah memasuki Tanggal yang di Booking) ~" << endl;
    FileRestoran << "~ Anda menyewa atau membooking tempat pada Tahun : "<< TahunSewa << " Bulan : "<< BulanSewa << " Tanggal : " << TanggalSewa << " Jam : " << Jamsewa << " ~" << endl;
    FileRestoran << "~ Harga Bookingan atau Sewa Tempat mu : Rp." << HargaTempatBoking2[c-1]*OrangBoking << " ~" << endl;
    FileRestoran << endl;
    FileRestoran << "~ Total Harga Pesanan mu Sekarang adalah : Rp." << totalhargapesanan << " ~ " << endl; // MEMBERITAHU TOTAL HARGA
    FileRestoran << "~ Nomor Handphone Anda : " << nohp << " ~" << endl;
    FileRestoran << "~ Metode Pembayaran : Transfer Bank ~" << endl;
    FileRestoran << "~ MOHON VALIDASI SEGERA JIKA UANG SUDAH DITRANSFER ~" << endl;
    FileRestoran << "------------------------------------------------------------------------------" << endl;
    FileRestoran.close(); //MENUTUP FILE NOTEPAD

    cout << endl;
    }

    else{cout << endl;
    cout << "Anda Salah memasukkan Angka, Harap Memasukkan angka yang benar" << endl;
    cout << endl;
    goto PilihanBoking;}

    }
    else{cout << endl;
    cout << "Anda Salah memasukkan Huruf, Harap Memasukkan huruf M/B" << endl;
    cout << endl;
    goto Pilihfitur;}

	system("cls");
    cout << "STRUK PESANAN BERHASIL DIBUAT :D" << endl;
    cout << "Terimakasih telah menggunakan program ini :)" << endl;
    cout << "Pesan lagi yaa nanti :)" << endl;
    cout << endl;

    cout << "[ Ketik ENTER untuk menutup program ]" << endl;
    cin.get(); //Agar ada sela seperti enter pada ms word

	return 0;
    }


//PENUTUP PROGRAM




