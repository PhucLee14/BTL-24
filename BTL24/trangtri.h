#include<stdio.h>
#include<stdbool.h>
#include"mylib.h"
#define MAX 100
int toadox1[MAX] ;
int toadoy1[MAX] ;
int toadox2[MAX] ;
int toadoy2[MAX] ;
int xmoi,ymoi;
int sl=4;
int solo;
int sl1=4,sl2=4;
int diem=0;
int diem2=0;
int level=1;
int check;
int check1,check2;
int toc_do=2;
int choose_sp;
int play_mod=1;
int choose_mod;
char name[13]="Player";
char name1[13]="Player1";
char name2[13]="Player2";
//=========== Nguyen mau ham ============
//=========== Cac ham setting ==============
void option();
void play();
void play0();
void play1();
void play2();
void play3();
void play_option();
void InGamePlay2();
void speed();
void xu_li_an_moi12();
void toc_do_option();
int an_moi1();
int cham_than();
int cham_than2();
int an_moi2();
//========== Ve, trang tri ==================
void ve_tuong();
void map3level();
void ve_onix();
void ve_ran_menu();
void ve_menu(int xt, int yt);
void bang_menu();
void loading();
void ve_khung_trai();
void ve_khung_phai();
void ve_cay(int x, int y);
void ve_inputgame();
//========== Cac ham ran ==================
void tao_ran1();
void tao_ran2();
void ve_ran1();
void ve_ran2();
void di_chuyen1(int x1,int y1);
void di_chuyen2(int x2,int y2);
//========= Game over ==============
int gameOver();
void ve_gameOver();
void record();
//========= Moi ================
void tao_moi();
void ve_moi();
bool kiem_tra_moi();
//========= Xu li =============
void xu_li_an_moi();
int cham_than();

void ve_cay(int x, int y){
	gotoXY(x,y);
	SetColor(2);
	printf("   A");
	gotoXY(x,y+1);
	printf("  /I\\");
	gotoXY(x,y+2);
	printf(" //I\\\\");
	gotoXY(x,y+3);
	printf("///I\\\\\\");
	gotoXY(x,y+4);
	printf("'//I\\\\'");
	gotoXY(x,y+5);
	SetColor(6);
	printf("  'I'");
	gotoXY(x,y+6);
	printf("+++++++");
}

void ve_khung_phai(){
	int x=100;
	int y=4;
	SetColor(15);
	gotoXY(x,y);
	printf("      ___");
	gotoXY(x,y+1);
	printf("   .((`  )`. ");
	gotoXY(x,y+2);
	printf("  ((   .   ) ");
	gotoXY(x,y+3);
	printf(" __..__)____))");
	gotoXY(x+2,y+5);
	SetColor(8);
	printf("        x");
	gotoXY(x+2,y+6);
	printf("          x");
	gotoXY(x+2,y+7);
	SetColor(12);
	printf("    ______||");
	gotoXY(x+2,y+8);
	printf("   /_____/  \\");
	SetColor(3);
	gotoXY(x+2,y+9);
	printf("   _____|_\"\"_|");
	gotoXY(x+2,y+10);
	printf("   _[X]_|____|");
	gotoXY(x+2,y+11);
	SetColor(4);
	printf("    /-/");
	gotoXY(x+2,y+12);
	printf("   /-/");
	SetColor(6);
	gotoXY(x+2,y+7);
	printf(".-.");
	gotoXY(x+2,y+8);
	printf("|=|");
	gotoXY(x+2,y+9);
	printf("| |");
	gotoXY(x+2,y+10);
	printf("|_|");
	
}

void ve_khung_trai(){
	ve_cay(5,4);
	ve_cay(5,12);
	ve_cay(5,20);
}

void ve_onix(){
	printf("\n                                                       _");
	printf("\n                                       ___            | |");
	printf("\n                                   .-\"'   `...._      | |");
	printf("\n                      _,--\"'-.   ,' .           `.    | |");
	printf("\n                    .'       ,`,'    \\            `.  | |");
	printf("\n                  ,'.      .','       \\            | L  |");
	printf("\n           __,..,'   `----\"  `         \\       _..-+.`  |..");
	printf("\n        ,'\"     .             '._  ___...-._ ,'     |   |  `--.");
	printf("\n       /       _|              | `\"        .'       |   |      `.");
	printf("\n      /`  _.-`'  ._..----""`._ |         ,'         |   |        .");
	printf("\n     | .-\"         `-._    _,.' `.     .'          L    |         `.");
	printf("\n  ,-""\"--..._       |  '`""       `-../\\     _,\"''\"|    |.._       ,|");
	printf("\n /    '.     `\"----,'                 ` '._,'      |  J     `.   .' |");
	printf("\n/_.-'\"  `-.___..-.\"                    \\ ,'   \\    |   '    | `.'   '");
	printf("\n`                |                    _.'          |  |,_   '   `. /");
	printf("\n .        _______|                 .-'    |.       `. '           |");
	printf("\n  `...---\"     .-'               .'       | `.                 ,  '");
	printf("\n  ,'._     _,-\"                  `        |  ,`.  ,  .    _.-'|    `.");
	printf("\n .    `""-'    `.                 \\       `.....`.     .-',   |        .");
	printf("\n |             _,|                 ._ --.        |     '\"--...       '");
	printf("\n  `.--\"`.....-\" ,                    /\".`        |   |        _____,'");
	printf("\n    .       | .'_                   /   \\        |  j       \"'_,..'");
	printf("\n     /`-...-+\"   `.                 '   .'.__ -..'  |_,..   ,'  |");
	printf("\n    '          ____.                 \\  |    \"`-..___,....-.    '");
	printf("\n     .     _.""'   |                    `. .                 / .-'");
	printf("\n      `. .'       .._                   \\ \\               / /");
	printf("\n        `-._   _.'   `.                  \\.--......____ .' /");
	printf("\n          .'`""    .'  .                    .            '_.'");
	printf("\n          |       /    |____               `\"._     _,-\"      ,-'\"'");
	printf("\n           `. _.,'     |    `.                 `--\"'       _.--,.'");
	printf("\n             `'--.__,.\"       |                          ,' .' |");
	printf("\n                   |   ,.._   |\"--._                  ,-+-.'  /");
	printf("\n                   `..'    ``.'   ,.`.     _..__.-""\"-.__.'\\\"'");
	printf("\n                     `----.,\"    '   .--..'   _..`-../:  _,'");
	printf("\n                           .    /  .'  _.'\\.-\"  |     '-""");
	printf("\n                            \"--+--\"`..'   |.   ,^.__,'");
	printf("\n                                     `---\"  `-" "");
}

void ve_ran_menu(){
	FILE *f;
	f=fopen("ve_ran.txt","r");
	char c;
	printf("\n");
	while ((c = fgetc(f)) != EOF)
    {
        //Xu?t t?ng ký t? ra màn hình
        printf("%c", c);
    }
    fclose(f);
}

void ve_inputname(){
	FILE *f;
	f=fopen("inputname.txt","r");
	char c;
	printf("\n");
	while ((c = fgetc(f)) != EOF)
    {
        //Xu?t t?ng ký t? ra màn hình
        printf("%c", c);
    }
    fclose(f);
}

void ve_menu(int xt, int yt){
	gotoXY(xt+38,yt);
	printf("/()\\");
	gotoXY(xt+23+11,yt+1);
	printf("__//    \\\\__");
	gotoXY(xt+19+11,yt+2);
	printf("__//   	        \\\\__");
	gotoXY(xt+15,yt+3);
	printf("_____________//____________________\\\\_____________");
	gotoXY(xt+14,yt+4);
	printf("(   ______//____________________________\\\\______   )");
	gotoXY(xt+15,yt+5);
	printf("| |  //                                    \\\\  | |");
	gotoXY(xt+15,yt+6);
	printf("| | (_)                                    (_) | |");
	gotoXY(xt+15,yt+7);
	printf("| |                                            | |");
	gotoXY(xt+15,yt+8);
	printf("| |                                            | |");
	gotoXY(xt+15,yt+9);
	printf("| |                                            | |");
	gotoXY(xt+15,yt+10);
	printf("| |                                            | |");
	gotoXY(xt+15,yt+11);
	printf("| |                                            | |");
	gotoXY(xt+15,yt+12);
	printf("| |____________________________________________| |");
	gotoXY(xt+14,yt+13);
	printf("(__________________________________________________)");
}

void ve_tuong(){
	ve_khung_phai();
	ve_khung_trai();
	SetColor(5);
	char c=205;
	char b=186;
	
	for(int x=0;x<=119;x++){
		gotoXY(x,3);
		printf("%c",c);
		gotoXY(x,27);
		printf("%c",c);
	}
	for(int x=100;x<=119;x++){
		gotoXY(x,17);
		printf("%c",c);
	}
	for(int y=3;y<=27;y++){
		gotoXY(18,y);
		printf("%c",b);
		gotoXY(100,y);
		printf("%c",b);
	}
	char e=202,f=203,g=204;
	gotoXY(18,27); printf("%c",e);
	gotoXY(100,27); printf("%c",e);	
	gotoXY(18,3); printf("%c",f);
	gotoXY(100,3); printf("%c",f);
	gotoXY(100,17); printf("%c",g);
}

void map3level() {
	int x,y,a=177;;
	ve_tuong();
	if (level==1) {
		for (x=31; x<=88; x++){
			gotoXY (x,8);
			printf ("%c",a);
			gotoXY (x,22);
			printf ("%c",a);
		}
			for (y=9; y<=11; y++) {
			gotoXY (31,y);
			printf ("%c",a);
			gotoXY (88,y);
			printf ("%c",a);
		}
			for (y=19; y<=21; y++) {
			gotoXY (31,y);
			printf ("%c",a);
			gotoXY (88,y);
			printf ("%c",a);
		}
		gotoXY(56,28);
		SetColor(25);
		printf("Map 1");
	}
	
	if (level==2) {
		for (x=19; x<=50; x++){
			gotoXY (x,20);
			printf ("%c",a);
		}
		for (x=68; x<=99; x++){
			gotoXY (x,10);
			printf ("%c",a);
		}
		for (y=4; y<=13; y++) {
			gotoXY (40,y);
			printf ("%c",a);
		}
		for (y=17; y<=26; y++) {
			gotoXY (78,y);
			printf ("%c",a);
		}
		gotoXY(56,28);
		SetColor(25);
		printf("Map 2");
	}
	
	if (level==3) {
		for (y=4; y<=11; y++) {
			gotoXY (50,y);
			printf ("%c",a);
		}
		for (y=19; y<=26; y++) {
			gotoXY (68,y);
			printf ("%c",a);
		}
		for (x=50; x<=85; x++){
			gotoXY (x,12);
			printf ("%c",a);
		}
		for (x=33; x<=68; x++){
			gotoXY (x,18);
			printf ("%c",a);
		}
		for (y=10; y<=18; y++) {
			gotoXY (33,y);
			printf ("%c",a);
		}
		for (y=12; y<=20; y++) {
			gotoXY (85,y);
			printf ("%c",a);
		}
		for (x=65; x<=88; x++){
			gotoXY (x,7);
			printf ("%c",a);
		}
		for (x=30; x<=53; x++){
			gotoXY (x,23);
			printf ("%c",a);
		}
		gotoXY(56,28);
		SetColor(25);
		printf("Map 3");
	}
}

void loading(){
	int xw=1,yw=1;
	char c='%';
	SetColor(11);
	gotoXY(4,26);
	printf("LOADING ");
	for(int i=12;i<=112;i++){
		SetColor(i/8);
		gotoXY(xw,yw);
		printf(" __       __  ________  __         ______    ______   __       __  ________         ________  ______ ");
		gotoXY(xw,yw+1);
		printf("/  |  _  /  |/        |/  |       /      \\  /      \\ /  \\     /  |/        |       /        |/      \\");
		gotoXY(xw,yw+2);
		printf("## | / \\ ## |########/ ## |      /######  |/######  |##  \\   /## |########/        $$$$$$$$//$$$$$$  |");
		gotoXY(xw,yw+3);
		printf("## |/#  \\## |## |__    ## |      ## |  ##/ ## |  ## |###  \\ /### |## |__              $$ |  $$ |  $$ |");
		gotoXY(xw,yw+4);
		printf("## /###  ## |##    |   ## |      ## |      ## |  ## |####  /#### |##    |             $$ |  $$ |  $$ |");
		gotoXY(xw,yw+5);
		printf("## ##/## ## |#####/    ## |      ## |   __ ## |  ## |## ## ##/## |#####/              $$ |  $$ |  $$ |");
		gotoXY(xw,yw+6);
		printf("####/  #### |## |_____ ## |_____ ## \\__/  |## \\__## |## |###/ ## |## |_____           $$ |  $$ \\__$$ |");
		gotoXY(xw,yw+7);
		printf("###/    ### |##       |##       |##    ##/ ##    ##/ ## | #/  ## |##       |          $$ |  $$    $$/ ");
		gotoXY(xw,yw+8);
		printf("##/      ##/ ########/ ########/  ######/   ######/  ##/      ##/ ########/           $$/    $$$$$$/");
		gotoXY(xw+24,yw+11);
		printf("  ______   __    __   ______   __    __  ________   ______    ______   __       __  ________ ");
		gotoXY(xw+24,yw+12);
		printf(" /      \\ /  \\  /  | /      \\ /  |  /  |/        | /      \\  /      \\ /  \\     /  |/        |");
		gotoXY(xw+24,yw+13);
		printf("/$$$$$$  |$$  \\ $$ |/$$$$$$  |$$ | /$$/ $$$$$$$$/ /$$$$$$  |/$$$$$$  |$$  \\   /$$ |$$$$$$$$/");
		gotoXY(xw+24,yw+14);
		printf("$$ \\__$$/ $$$  \\$$ |$$ |__$$ |$$ |/$$/  $$ |__    $$ | _$$/ $$ |__$$ |$$$  \\ /$$$ |$$ |__   ");
		gotoXY(xw+24,yw+15);
		printf("$$      \\ $$$$  $$ |$$    $$ |$$  $$<   $$    |   $$ |/    |$$    $$ |$$$$  /$$$$ |$$    | ");
		gotoXY(xw+24,yw+16);
		printf(" $$$$$$  |$$ $$ $$ |$$$$$$$$ |$$$$$  \\  $$$$$/    $$ |$$$$ |$$$$$$$$ |$$ $$ $$/$$ |$$$$$/ ");
		gotoXY(xw+24,yw+17);
		printf("/  \\__$$ |$$ |$$$$ |$$ |  $$ |$$ |$$  \\ $$ |_____ $$ \\__$$ |$$ |  $$ |$$ |$$$/ $$ |$$ |_____");
		gotoXY(xw+24,yw+18);
		printf("$$    $$/ $$ | $$$ |$$ |  $$ |$$ | $$  |$$       |$$    $$/ $$ |  $$ |$$ | $/  $$ |$$       |");
		gotoXY(xw+24,yw+19);
		printf(" $$$$$$/  $$/   $$/ $$/   $$/ $$/   $$/ $$$$$$$$/  $$$$$$/  $$/   $$/ $$/      $$/ $$$$$$$$/");
		gotoXY(i,26);
		//Sleep(20);
	    
		if(i<47){
			Sleep(50);
		}
		else if(i==47){
			Sleep(1000);
		}
		else if(47<i&&i<=72){
			Sleep(200);
		}
		else if(i==73){
			Sleep(1000);
		}
		else if(73<i && i<98){
			Sleep(180);
		}
		else{
			Sleep(50);
		}
		
		textcolor(11*16);
		printf(" ");
		gotoXY(114,26);
		textcolor(0);
		SetColor(11);
		printf("%d%c",i-12,c);
	}
	Sleep(2000);
	textcolor(0);	
	system("cls");
}

