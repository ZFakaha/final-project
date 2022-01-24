#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h> 
#include <fstream> 
using namespace std;

char user[20], pass[20];

void benar (float a){
	float nilai = (a*10)/14;
	cout<<"Nilai anda : "<<nilai;
}

void login(){
   system("cls");
   cout << "================================================"<<endl;
   cout << "=====================LOGIN======================"<<endl;
   cout << "================================================"<<endl;
    char Cuser[20], Cpass[20], ulangi;
    string luser, lpass;
    
	cout << "Jangan menggunakan spasi" << endl;
    cout << "Masukan Username = ";
    cin >> luser;
    
    cout << "Masukan Password = ";
    cin >> lpass;
    

    ifstream mydata;
    mydata.open("data.txt");
    mydata >> Cuser;
    mydata >> Cpass;
    
   if(luser == Cuser && lpass == pass){
        cout << "Berhasil!!!";
    }else{
        cout << "Gagal Login" << endl;
        cout << "Ulangi?(Y/T).....";
        cin >> ulangi;
        if((ulangi == 'y') || (ulangi == 'Y')){
            login();
        }else{
            exit(0);
        }
    }
}
 

void registrasi(){
   system("cls");
   cout << "================================================"<<endl;
   cout << "===================REGISTRASI==================="<<endl;
   cout << "================================================"<<endl;
    cout << "Jangan menggunakan spasi" << endl;
	cout << "Username = ";
    cin >> user;
    if(strlen(user) < 4){
        cout << "Username harus lebih dari 4 karakter";
        return registrasi();
    }
    cout << "Password = ";
    cin >> pass;
      if(strlen(pass) < 4){
        cout << "Password harus lebih dari 5 karakter";
        return registrasi();

    }

    ofstream data_user;
    data_user.open("data.txt");
    data_user << user <<endl;
    data_user << pass;
    data_user.close();
    cout << "Data Berhasil Di Tambah...";
    login();

}

int main(){
	string jawaban;
	float skor=0;
	
	cout<<"**************************************************************"<<endl;
	cout<<"------------ SELAMAT DATANG DI GAME CERDAS CERMAT ------------"<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<endl;
	main:
	cout<<" Ketik y untuk memulai permainan "<<endl;
	cout<<" Ketik t untuk keluar "<<endl;
	cout<<"Jawaban : ";
	cin>>jawaban;
	if((jawaban=="y") || (jawaban=="Y")){
		registrasi();
		/*
			Ada beberapa perubahan syntax dalam coding.
			Agar codingan ini dapat berjalan tanpa adanya debug dan error.
			1. ada beberapa dalam if else untuk operator nilai mengggunakan petik 1 (')
		*/
		play:
		//MUH. ARYO PRAMBUDI WIRYONO_18.11.2591(belum)
		system("cls");
		cout << "1. Linus Trovalds adalah pencipta?" << endl;
		cout << endl;
		cout << "A. Sistem operasi Linux" << endl;
		cout << "B. Windows" << endl;
		cout << "C. Android" << endl;
		cout << "D. Microsoft" << endl;
		cout<<endl;
		cout << "Jawaban: ";
		cin >> jawaban;	

		if ((jawaban == "A") || (jawaban == "a")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
				cout<<"Penjelasan: "<<endl;
				cout<<"Linus Trovalds sendiri adalah pencipta dari sistem operasi Linux, salah satu sistem operasi yang terbuka untuk umum (open-source)."<<endl;
				cout<<"Berkat ciptaannya, banyak sekali teknologi yang dijalankan dengan sistem operasi berbasis Linux. Salah satunya adalah Android."<<endl;
				cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
				getch();
			}
			else {
				cout<<"Maaf, Jawaban anda salah!"<<endl;
				cout<<"Penjelasan: "<<endl;
				cout<<"Linus Trovalds sendiri adalah pencipta dari sistem operasi Linux, salah satu sistem operasi yang terbuka untuk umum (open-source)."<<endl;
				cout<<"Berkat ciptaannya, banyak sekali teknologi yang dijalankan dengan sistem operasi berbasis Linux. Salah satunya adalah Android."<<endl;
				cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
				getch();
			}
		system ("cls");
		cout << "2. siapa penemu tetikus(mouse)?" << endl;
		cout <<endl;
		cout << "A. Fujio Masuoka" << endl;
		cout << "B. Gerald Anderson Lawson" << endl;
		cout << "C. Martin Cooper" << endl;
		cout << "D. Douglas Englebart" << endl;
		cout<<endl;
		cout << "Jawaban: ";
		cin >> jawaban;
		if ((jawaban == "D") || (jawaban == "d")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
				cout<<"Penjelasan: "<<endl;
				cout<<"Dr Douglas C Engelbart adalah penemu tetikus atau mouse yang biasa kamu gunakan untuk mengendalikan PC atau laptop."<<endl;
				cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
				getch();
			}
			else {
				cout<<"Maaf, Jawaban anda salah!"<<endl;
				cout<<"Penjelasan: "<<endl;
				cout<<"Dr Douglas C Engelbart adalah penemu tetikus atau mouse yang biasa kamu gunakan untuk mengendalikan PC atau laptop."<<endl;
				cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
				getch();
			}
		//MUHAMMAD ANDIKA NUGROHO_21.11.4330
		system ("cls");
		cout<<"3. Pada tahun berapakah mikroprosesor pertama ditemukan?"<<endl;
		cout<<endl;
		cout<<"A. 1971"<<endl;
		cout<<"B. 1972"<<endl;
		cout<<"C. 1973"<<endl;
		cout<<"D. 1974"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		
		if ((jawaban == "A") || (jawaban == "a")){
			skor++;
			cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Pada tahun 1971 munculah microprocessor pertama Intel, microprocessor 4004 ini digunakan pada mesin kalkulator Busicom."<<endl;
			cout<<"Dengan penemuan ini maka terbukalah jalan untuk memasukkan kecerdasan buatan pada benda mati."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		else {
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Pada tahun 1971 munculah microprocessor pertama Intel, microprocessor 4004 ini digunakan pada mesin kalkulator Busicom."<<endl;
			cout<<"Dengan penemuan ini maka terbukalah jalan untuk memasukkan kecerdasan buatan pada benda mati."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		//FAHRUL FUGUH FERDIAN_21.11.4331
		system("cls");
		cout<<"4. Penemu bilangan biner adalah"<<endl;
		cout<<endl;
		cout<<"A. Gottfried Wilhelm Leibniz"<<endl;
		cout<<"B. Halfric Tintus"<<endl;
		cout<<"C. Wolfstain Eiber"<<endl;
		cout<<"D. Scien Potentia"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		
		if ((jawaban == "A") || (jawaban == "a")){
			skor++;
			cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Bilangan biner merupakan bilangan yang mengacu pada dua jenis angka, yaitu 0 dan 1."<<endl;
			cout<<"Bilangan biner ini diciptakan oleh seorang ilmuan yang bernama Gottfried Wilhelm Leibniz."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		else {
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Bilangan biner merupakan bilangan yang mengacu pada dua jenis angka, yaitu 0 dan 1."<<endl;
			cout<<"Bilangan biner ini diciptakan oleh seorang ilmuan yang bernama Gottfried Wilhelm Leibniz."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		
		system("cls");
		cout<<"5. Penemu 'telgraf nirkabel' adalah"<<endl;
		cout<<endl;
		cout<<"A. Nikola Tesla"<<endl;
		cout<<"B. Edwin Howard Armstrong"<<endl;
		cout<<"C. James Maxwell"<<endl;
		cout<<"D. Guglielmo Marconi"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		
		if ((jawaban == "D") || (jawaban == "d")){
			skor++;
			cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Guglielmo Marconi adalah seorang insinyur listrik Italia dan peraih hadiah Nobel, terkenal setelah mengembangkan suatu sistem telegrafi tanpa kabel yang dikenal sebagai radio."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		else {
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Guglielmo Marconi adalah seorang insinyur listrik Italia dan peraih hadiah Nobel, terkenal setelah mengembangkan suatu sistem telegrafi tanpa kabel yang dikenal sebagai radio."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		//NABIILA AZARINE FIRDAUS_21.11.4332
		system("cls");
		cout<<"6. Tokoh yang disebut sebagai bapak internet adalah ?"<<endl;
		cout<<endl;
		cout<<"A. Tim Berners-Lee\n";
		cout<<"B. Vint Cerf & Robert Kahn\n";
		cout<<"C. Martin Cooper\n";
		cout<<"D. Henry Edward ‘Ed’ Roberts\n";
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;

		if((jawaban=="b") || (jawaban=="B")){
			skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Vint Cerf & Robert Kahn adalah salah satu pencetus dot com, atau arti lainnya adalah internet yang seperti kita ketahui sekarang. Pada tahun 1990,"<<endl;
			cout<<"Tim Berners-Lee mencetuskan internet yang digabung dengan konsep hypertext sehingga muncullah World Wide Web (WWW) yang mengubah tatanan dunia."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
		else{
			cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Vint Cerf & Robert Kahn adalah salah satu pencetus dot com, atau arti lainnya adalah internet yang seperti kita ketahui sekarang. Pada tahun 1990,"<<endl;
			cout<<"Tim Berners-Lee mencetuskan internet yang digabung dengan konsep hypertext sehingga muncullah World Wide Web (WWW) yang mengubah tatanan dunia."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
		
		system("cls");
		cout<<"7. Ray Tomlinson adalah ?"<<endl;
		cout<<endl;
		cout<<"A. Bapak PC\n";
		cout<<"B. Bapak E-mail\n";
		cout<<"C. Bapak ponsel\n";
		cout<<"D. Bapak wi-fi ‘Ed’ Roberts\n";
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;

		if((jawaban=="b") || (jawaban=="B")){
			skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Ray Tomlinson adalah seorang ilmuwan lulusan MIT asal AS yang pada tahun 1971 menciptakan sistem pesan elektronik seminal pertama di dunia."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
		else{
			cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Ray Tomlinson adalah seorang ilmuwan lulusan MIT asal AS yang pada tahun 1971 menciptakan sistem pesan elektronik seminal pertama di dunia."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
		//AMALINA NUR SABRINA_21.11.4334
		
		system ("cls");
		cout<<"8. Perempuan yang pada awalnya merupakan staf Menteri Pariwisata dan Ekonomi Kreatif,\n";
		cout<<"kemudian pada tahun 2013 menjadi Kepala Kebijakan Publik dan Hubungan Pemerintah di Indonesia adalah ...\n";
		cout<<endl;
        cout<<"A Shinta Nugroho\n";
        cout<<"B Anantya Van Bronckhrost\n";
        cout<<"C Rini Sugiyanto\n";
        cout<<"D Jim Geovedi\n";
		cout<<endl;
        cout<<"Jawaban : ";
        cin>>jawaban;

        if ((jawaban == "A") || (jawaban == "a")){
            skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Sejak tahun 2013, Shinto telah menjadi Kepala Kebijakan Publik dan Hubungan Pemerintah di Google Indonesia. Kiprah perempuan satu ini dalam bidang teknologi juga tak perlu diragukan."<<endl;
			cout<<"Shinto yang awalnya adalah seorang staf Menteri Pariwisata dan Ekonomi Kreatif, berharap ada banyak perempuan Indonesia yang terlibat dalam perkembangan teknologi."<<endl;
			cout<<"Sebagai kepala kebijakan publik Google Indonesia, Shinto cukup memberikan perhatian terhadap perkembangan teknologi di Indonesia. Menurutnya, Indonesia memiliki potensi besar SDM,"<<endl;
			cout<<"karena di Google paling banyak merekrut tenaga dari Indonesia. Ia juga menjadi perpanjangan tangan dari pimpinan tertinggi Google dalam penyampai kebijakan."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
		else{
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Sejak tahun 2013, Shinto telah menjadi Kepala Kebijakan Publik dan Hubungan Pemerintah di Google Indonesia. Kiprah perempuan satu ini dalam bidang teknologi juga tak perlu diragukan."<<endl;
			cout<<"Shinto yang awalnya adalah seorang staf Menteri Pariwisata dan Ekonomi Kreatif, berharap ada banyak perempuan Indonesia yang terlibat dalam perkembangan teknologi."<<endl;
			cout<<"Sebagai kepala kebijakan publik Google Indonesia, Shinto cukup memberikan perhatian terhadap perkembangan teknologi di Indonesia. Menurutnya, Indonesia memiliki potensi besar SDM,"<<endl;
			cout<<"karena di Google paling banyak merekrut tenaga dari Indonesia. Ia juga menjadi perpanjangan tangan dari pimpinan tertinggi Google dalam penyampai kebijakan."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		
		system ("cls");
		cout << "9. Marty Cooper, merupakan salah satu dari sekian banyaknya orang yang memiliki pengaruh dalam perkembangan dunia teknologi\n.";
		cout<<"Berkat penemuannya, kita dapat melakukan berbagai hal, seperti mengirim dan menerima pesan, melakukan panggilan,\n";
		cout<<"bermain game, dan masih banyak lagi. Berdasarkan pernyataan tersebut, Marty Cooper merupakan penemu ...\n";
		cout<<endl;
        cout << "A Kamera Digital\n";
        cout << "B Telepon Genggam\n";
        cout << "C Televisi\n";
        cout << "D Situs Web\n";
		cout<<endl;
        cout << "Jawaban: ";
        cin >> jawaban;

        if ((jawaban == "B") || (jawaban == "b")){
            skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Marty Cooper (wbur.org) Marty Cooper merupakan penemu telepon genggam pertama yang waktu itu memiliki berat 0,9 kg yang diberi nama Motorola DynaTAC."<<endl;
			cout<<"Motorola DynaTAC inilah yang kemudian menjadi cikal bakal smartphone ramping seperti hari ini."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		else {
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Marty Cooper (wbur.org) Marty Cooper merupakan penemu telepon genggam pertama yang waktu itu memiliki berat 0,9 kg yang diberi nama Motorola DynaTAC."<<endl;
			cout<<"Motorola DynaTAC inilah yang kemudian menjadi cikal bakal smartphone ramping seperti hari ini."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		//AVIVA PRADASYAH_21.11.4335
		system("cls");
		cout<<"10. Siapa penemu word wide web atau www?"<<endl;
		cout<<endl;
		cout<<"A. Bill Gates "<<endl;
		cout<<"B. Tim Berners-Lee "<<endl;
		cout<<"C. Martin Cooper "<<endl;
		cout<<"D. Kenneth Thompson "<<endl;
		cout<<"E. Norman Abramson"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		if((jawaban=="b") || (jawaban=="B")){
			skor++;
			cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Tim Berners-Lee, seorang insinyur Inggris yang menemukan World Wide Web pada tahun 1989,"<<endl;
			cout<<"mengungkap sebuah rencana ambisius yang merinci langkah-langkah untuk tata kelola dunia online yang lebih baik."<<endl;
			cout<<"Beberapa di antaranya adalah mengatasi masalah informasi yang salah, pengawasan data, dan sensor."<<endl;
			}
		else{ 
			cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Jawaban yang benar adalah = B"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Tim Berners-Lee, seorang insinyur Inggris yang menemukan World Wide Web pada tahun 1989,"<<endl;
			cout<<"mengungkap sebuah rencana ambisius yang merinci langkah-langkah untuk tata kelola dunia online yang lebih baik."<<endl;
			cout<<"Beberapa di antaranya adalah mengatasi masalah informasi yang salah, pengawasan data, dan sensor."<<endl;
		}
		cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
		getch();
		
		
		system("cls");
		cout<<"11. Siapa yang menciptakan cikal bakal surat elektronik atau E-mail dan mendapat julukan bpk E-mail?"<<endl;
		cout<<endl;
		cout<<"A. henry edward "<<endl;
		cout<<"B. vint cerf "<<endl;
		cout<<"C. Ray tomlison "<<endl;
		cout<<"D. martin cooper "<<endl;
		cout<<"E. tim berners-lee "<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		if((jawaban=="c") || (jawaban=="C")){
			skor++;
			cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Satu hari di penghujung 1971, saat internet belum ada. Seorang pria menulis pesan di komputer."<<endl;
			cout<<"Pesan yang tertulis hanya urutan awal tombol pada keyboard komputer 'QWERTYUIOP'."<<endl;
			cout<<"Pria tersebut mengirim rangkaian huruf itu ke dirinya sendiri via jaringan komputer. Pria itu adalah Ray Tomlinson, pekerja pada Bolt,"<<endl;
			cout<<"Beranek & Newman, salah satu perusahaan kontraktor di ARPANET,"<<endl;
			cout<<"cikal-bakal pengembang jaringan internet Departemen Pertahanan Amerika Serikat (AS)."<<endl;
			cout<<"Pesan yang ditulis Ray Tomlinson itu adalah cikal bakal dari sistem yang kita kenal saat ini dengan nama email."<<endl;
			cout<<"Email atau electronic mail alias surat elektronik menjadi penantang dari keberadaan surat konvensional yang selama berabad-abad sebagai alat komunikasi manusia."<<endl;
		}
		else{
			cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Jawaban yang benar adalah = C"<<endl;
			cout<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Satu hari di penghujung 1971, saat internet belum ada. Seorang pria menulis pesan di komputer."<<endl;
			cout<<"Pesan yang tertulis hanya urutan awal tombol pada keyboard komputer 'QWERTYUIOP'."<<endl;
			cout<<"Pria tersebut mengirim rangkaian huruf itu ke dirinya sendiri via jaringan komputer. Pria itu adalah Ray Tomlinson, pekerja pada Bolt,"<<endl;
			cout<<"Beranek & Newman, salah satu perusahaan kontraktor di ARPANET,"<<endl;
			cout<<"cikal-bakal pengembang jaringan internet Departemen Pertahanan Amerika Serikat (AS)."<<endl;
			cout<<"Pesan yang ditulis Ray Tomlinson itu adalah cikal bakal dari sistem yang kita kenal saat ini dengan nama email."<<endl;
			cout<<"Email atau electronic mail alias surat elektronik menjadi penantang dari keberadaan surat konvensional yang selama berabad-abad sebagai alat komunikasi manusia."<<endl;
		}
		cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
		getch();
		
		//HYASINTUS RANDI SANJAYA_21.11.4336
		system("cls");
		cout<<"12. Siapa pendiri dari Microsoft?"<<endl;
		cout<<endl;
		cout<<"A. Steve Jobs"<<endl;
		cout<<"B. Mark Zuckerberg"<<endl;
		cout<<"C. Bill Gates"<<endl;
		cout<<"D. William Tanuwidjaja"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		
		if ((jawaban == "C") || (jawaban == "c")){
            skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Bill Gates lahir dengan nama William Henry “Bill” Gates III. Dirinya merupakan seorang investor, pebisnis, filantropis,"<<endl;
			cout<<"dan penulis yang berasal dari Amerika Serikat. Sejak 1975, Bill Gates merupakan pendiri Microsoft, CEO, lalu akhirnya menjadi ketua non-eksekutif Microsoft sampai sekarang."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		else {
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Bill Gates lahir dengan nama William Henry “Bill” Gates III. Dirinya merupakan seorang investor, pebisnis, filantropis,"<<endl;
			cout<<"dan penulis yang berasal dari Amerika Serikat. Sejak 1975, Bill Gates merupakan pendiri Microsoft, CEO, lalu akhirnya menjadi ketua non-eksekutif Microsoft sampai sekarang."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		
		system("cls");
		cout<<"13. Siapa pendiri dari Tokopedia"<<endl;
		cout<<endl;
		cout<<"A. William Tanuwidjaja"<<endl;
		cout<<"B. Bill Gates"<<endl;
		cout<<"C. Nadiem Makariem Anwar"<<endl;
		cout<<"D. Steve Jobs"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		
		if ((jawaban == "A") || (jawaban == "a")){
            skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"William Tanuwijaya (lahir 11 November 1981) merupakan seorang pengusaha Indonesia yang juga merupakan pendiri Tokopedia,"<<endl;
			cout<<"sebuah situs web perdagangan elektronik yang memungkinkan penggunanya untuk membeli barang secara daring."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		else {
            cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"William Tanuwijaya (lahir 11 November 1981) merupakan seorang pengusaha Indonesia yang juga merupakan pendiri Tokopedia,"<<endl;
			cout<<"sebuah situs web perdagangan elektronik yang memungkinkan penggunanya untuk membeli barang secara daring."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
        }
		
		//ZULFA FAKAHA_21.11.4337
		system("cls");
		cout<<"14. Bahasa pemrograman apa yang ditemukan oleh James Arthur Gosling?"<<endl;
		cout<<endl;
		cout<<"A. Ruby"<<endl;
		cout<<"B. Python"<<endl;
		cout<<"C. C#"<<endl;
		cout<<"D. Java"<<endl;
		cout<<"E. C++"<<endl;
		cout<<endl;
		cout<<"Jawaban : ";
		cin>>jawaban;
		if((jawaban=="d") || (jawaban=="D")){
			skor++;
            cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Penemu pertama bahasa pemrograman java adalah James Arthur Gosling atau biasa dikenal dengan nama James Gosling yang lahir pada tanggal 19 Mei 1955."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
		else{
			cout<<"Maaf, Jawaban anda salah!"<<endl;
			cout<<"Penjelasan: "<<endl;
			cout<<"Penemu pertama bahasa pemrograman java adalah James Arthur Gosling atau biasa dikenal dengan nama James Gosling yang lahir pada tanggal 19 Mei 1955."<<endl;
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			getch();
		}
			
		//perhitungan skor
		system("cls");
		string username;
    	ifstream data_user;
   		data_user.open("data.txt");
   		data_user >> username;

		cout << "Username : "<< username <<endl;
		cout<<"Skor benar : "<<skor<<endl;
		benar(skor);
		getch();
		repeat:
		cout<<"\nPlay Again? (Y/T) : ";
		cin>>jawaban;
		
		if((jawaban=="Y") || (jawaban=="y")){
			goto play;
		}
		else if((jawaban=="T") || (jawaban=="t")){
			cout<<"ThankYou for Playing this game"<<endl;
			cout<<"Kelompok 1"<<endl;
			cout<<"MUH. ARYO PRAMBUDI WIRYONO_18.11.2591: Pengisi soal nomor 1 dan nomor 2"<<endl;
			cout<<"MUHAMMAD ANDIKA NUGROHO_21.11.4330: Pencetus ide fitur login dan register, Pengisi soal nomor 3"<<endl;
			cout<<"FAHRUL FUGUH FERDIAN_21.11.4331: Pengisi soal nomor 4 dan nomor 5"<<endl;
			cout<<"NABIILA AZARINE FIRDAUS_21.11.4332: Pengisi soal nomor 6 dan nomor 7"<<endl;
			cout<<"AMALINA NUR SABRINA_21.11.4334: Pengisi soal nomor 8 dan nomor 9"<<endl;
			cout<<"AVIVA PRADASYAH_21.11.4335: Pengisi soal nomor 10 dan nomor 11"<<endl;
			cout<<"HYASINTUS RANDI SANJAYA_21.11.4336: Pencetus ide buat game, Bagian analisis dan pengoreksi, Pengisi soal nomor 12 dan nomor 13"<<endl;
			cout<<"ZULFA FAKAHA_21.11.4337: Pengisi soal nomor 14"<<endl;
			getch();
			cout<<"See You Again : )";
			getch();
		}
		else{
			system("cls");
			cout<<"Mohon maaf, masukan input yang benar"<<endl;
			goto repeat;
		}
		
	}
	else if ((jawaban=="t") || (jawaban=="T")){
		system("cls");
		cout<<"ThankYou for Playing this game"<<endl;
		cout<<"Kelompok 1"<<endl;
		cout<<"MUH. ARYO PRAMBUDI WIRYONO_18.11.2591: Pengisi soal nomor 1 dan nomor 2"<<endl;
		cout<<"MUHAMMAD ANDIKA NUGROHO_21.11.4330: Pencetus ide fitur login dan register, Pengisi soal nomor 3"<<endl;
		cout<<"FAHRUL FUGUH FERDIAN_21.11.4331: Pengisi soal nomor 4 dan nomor 5"<<endl;
		cout<<"NABIILA AZARINE FIRDAUS_21.11.4332: Pengisi soal nomor 6 dan nomor 7"<<endl;
		cout<<"AMALINA NUR SABRINA_21.11.4334: Pengisi soal nomor 8 dan nomor 9"<<endl;
		cout<<"AVIVA PRADASYAH_21.11.4335: Pengisi soal nomor 10 dan nomor 11"<<endl;
		cout<<"HYASINTUS RANDI SANJAYA_21.11.4336: Pencetus ide buat game, Bagian analisis dan pengoreksi, Pengisi soal nomor 12 dan nomor 13"<<endl;
		cout<<"ZULFA FAKAHA_21.11.4337: Pengisi soal nomor 14"<<endl;
		getch();
		cout<<"See You Again : )";
		getch();
	}
	else{
		system("cls");
		cout<<"Mohon maaf, masukan input yang benar"<<endl;
		goto main;
	}
	
	return 0;
}
	
