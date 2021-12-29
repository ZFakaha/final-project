#include <iostream>
#include <stdlib.h>
using namespace std;

void benar (float a){
	float nilai = (a*10)/8;
	cout<<"Nilai anda : "<<nilai;
}
int main(){
	string jawaban;
	float skor=0;
	
	cout<<"**************************************************************"<<endl;
	cout<<"------------ SELAMAT DATANG DI GAME CERDAS CERMAT ------------"<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<endl;
	cout<<" Ketik y untuk memulai permainan "<<endl;
	cout<<" Ketik t untuk keluar "<<endl;
	cin>>jawaban;
	if((jawaban=="y") || (jawaban=="Y")){
		system("cls");
		cout<<"1.blalalalalalalalalalalallaalal?"<<endl;
		cout<<endl;
		cout<<"A. apa"<<endl;
		cout<<"B. apa"<<endl;
		cout<<"C. apa"<<endl;
		cout<<"D. apa"<<endl;
		cout<<"E. apa"<<endl;
		cout<<endl;
		cout<<"Masukkan jawaban : ";
		cin>>jawaban;
		if((jawaban=="b") || (jawaban=="B")){
			skor++;
			cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{ cout<<"Jawaban salah!";
			}
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"2.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="c") || (jawaban=="C")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;	
			}
			
	cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"3.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="c") || (jawaban=="C")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{
				cout<<"Jawaban salah!"<<endl;
			}
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"4.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="b") || (jawaban=="B")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{
				cout<<"Jawaban salah!"<<endl;
			}
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"5.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="e") || (jawaban=="E")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{
				cout<<"Jawaban salah!"<<endl;
			}
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"6.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="d") || (jawaban=="D")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{
				cout<<"Jawaban salah!"<<endl;
			}
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"7.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="a") || (jawaban=="A")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{
				cout<<"Jawaban salah!"<<endl;
			}
			cout<<"Jawab soal selanjutnya (Tekan Enter)"<<endl;
			cin.get();
			system("cls");
			cout<<endl;
			cout<<"8.blalalalalalalal?"<<endl;
			cout<<endl;
			cout<<"A. apa"<<endl;
			cout<<"B. apa"<<endl;
			cout<<"C. apa"<<endl;
			cout<<"D. apa"<<endl;
			cout<<"E. apa"<<endl;
			cout<<endl;
			cout<<"Masukkan jawaban : ";
			cin>>jawaban;
			if((jawaban=="d") || (jawaban=="D")){
				skor++;
				cout<<"SELAMAT JAWABAN ANDA BENAR !!!"<<endl;
			}else{
				cout<<"Jawaban salah!"<<endl;
			}
			cout<<"Skor benar : "<<skor<<endl;
			benar(skor);
	}else if((jawaban=="t") || (jawaban=="T")){
		cin.ignore();
	}
	
	return 0;
}
	
