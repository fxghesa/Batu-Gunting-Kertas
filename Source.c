#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int kredit, kamu, dia, menang=0, kalah=0, seri=0, i;
char pilihan;
void gameengine();
void opening();
void pesan();

void pesan()  
{  
	MessageBoxA(NULL,"Ini dulu, baru itu!! :D","",MB_OK);  
	//return 0;  
}  

void gameengine()
{
	printf("Kamu pengen main berapa set? "); scanf("%d", &kredit);
	printf("Oh gitu,, kamu pengen main sebanyak %d kali, ya udah yuks main :P\n", kredit);
	for(i=1;i<=kredit;i++){
		system("CLS");
		srand(time(NULL));
        dia=rand()%4;
		printf("Set ke-%d dimulai, sekarang tentukan pilihan anda! ", i); scanf("%c", &pilihan);
		if(dia == '1'){
			if(pilihan == '1'){
				printf("Selamat kamu seri! :)");
				seri++;
			}
			if(pilihan == '2'){
				printf("Membosankan kamu kalah! :P");
				kalah++;
			}
			if(pilihan == '3'){
				printf("Wew,, Amazing! :D");
				menang++;
			}
		}
		if(dia == '2'){
			if(pilihan == '2'){
				printf("Selamat kamu seri! :)");
				seri++;
			}
			if(pilihan == '3'){
				printf("Membosankan kamu kalah! :P");
				kalah++;
			}
			if(pilihan == '1'){
				printf("Wew,, Amazing! :D");
				menang++;
			}
		}
		if(dia == '3'){
			if(pilihan == '3'){
				printf("Selamat kamu seri! :)");
				seri++;
			}
			if(pilihan == '1'){
				printf("Membosankan kamu kalah! :P");
				kalah++;
			}
			if(pilihan == '2'){
				printf("Wew,, Amazing! :D");
				menang++;
			}
		}
	}
}
void opening()
{
	printf("\tSelamat Datang di Game ''batu gunting kertas'',, !!\n\n");
	printf("Berikut adalah opsi yang bisa kamu gunakan di game ini: \n");
	printf("(1). Gunting\n");
	printf("(2). Batu\n");
	printf("(3). Kertas\n");
	printf("Dengan ini Ghesa mengucapkan selamat bermain! :) ...\n\n");
}
void main()
{
	char opsi;
	pesan();
	reset:
	opening();
	gameengine();
	printf("Game selesi nih, coba deh sekarang cek stat kamu!!\n");
	printf("Menang \t : %d\n", menang);
	printf("Kalah \t : %d\n", kalah);
	printf("Seri \t : %d\n", seri);
	printf("Masih belum puas? :P Pengen main lagi? coba lagi donk!! [y/n]"); scanf("%c", &opsi);
	if(opsi == 'y'){
		printf("Ye,,ye main lagi!! :P\n\n")
		goto reset;
	else if(opsi == 'n')
		printf("\nYa udah deh kalo gitu, Ghesa pamit dulu ya!! :P\n Arigatou Gozaimasu!! :)\n");
}