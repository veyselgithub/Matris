/**************************************************************************
**								SAKARYA ÜNİVERSİTESİ
**						BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLİŞİM SİSTEMLERİ MÜHENDİSLİĞİ BÖLÜMÜ
**								PROGRAMLAMAYA GİRİŞ	DERSİ
**									2017-2018 GÜZ DÖNEMİ
**
**							ÖDEV NUMARASI.........: 2
**							ÖĞRENCİ ADI...........: VEYSEL DOĞAN
**							ÖĞRENCİ NUMARASI......: b171200041
**							DERSİN ALINDIĞI GRUP..: A GRUBU
****************************************************************************/
#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int satir, sutun, deger;
	int dizi[10][10];
	int secim;

	while (true) {
		{
			cout << "..:: Matris İşlemleri ::.." << endl << "Matris Satir Sayisini Giriniz(1-10 arasinda):";
			cin >> satir;
			sutun = satir;	//kare matris olduğu için sütün sayısını satıra eşitledik
			system("cls");
			for (int i = 0; i < satir; i++) {
				for (int j = 0; j < sutun; j++) {
					cout << "[" << i + 1 << "," << j + 1 << "]= ";
					cin >> dizi[i][j];	//matris değerleri sırasıyla [1,1] gibi değerle girildi
				}
			}
			for (int i = 0; i < satir; i++) {
				cout << endl;
				for (int j = 0; j < sutun; j++) {
					cout << dizi[i][j] << " ";	//matris dizisini ekrana yazdırdık
				}
			}

		}
		cout << endl;

		cout << "1-Satir En Buyuk" << endl;
		cout << "2-Satir Toplam" << endl;
		cout << "Seciminiz:";
		cin >> secim; //kullanıcıya hangi işlemi yapacak onu sorduk
		if (secim == 1) {
			int max[10] = { 0 };

			for (int i = 0; i < satir; i++) {
				for (int j = 0; j < sutun; j++) {
					if (dizi[i][j] > max[i]) {
						max[i] = dizi[i][j]; //en büyük sayıları yazdırmak için tekrar bir dizi tanımladım

					}
				}
			}
			for (int k = 0; k < satir; k++)
			{
				if (max[k] != 0) //istenen sayılar yazıldıktan sonra 0 basmaması için 0 a kadar yazdırdım 
				{
					cout << max[k] << " "; //her bir satırda ki en büyük değer yazıldı

				}
			}	cout << endl;
			break;
		}
		else if (secim == 2) {
			int toplam[100] = { 0 };
			for (int i = 0; i < satir; i++) {
				for (int j = 0; j < sutun; j++) {

					toplam[i] += dizi[i][j]; //aynı şekilde toplamı yazdırmak için de bir dizi tanımladım
				}
			}
			for (int k = 0; k < satir; k++)
			{
				if (toplam[k] != 0)
				{
					cout << toplam[k] << " "; //her bir satırda ki verilerin toplamını ekrana yazdırdık

				}
			} cout << endl;
			break;
		}
		else {
			cout << "Hatali Secim" << endl; //eğer kullanıcı 1 veya 2 değilde başka seçenek girerse hata mesajı verdirdim
			system("Pause");
			system("cls");
		}
	}
}