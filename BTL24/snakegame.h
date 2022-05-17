#include"option.h"
void bang_menu(){
	textcolor(0);
	SetColor(7);
	int x=66,y=31;
	char c;
	int choose=0;
	//-----------Ve onix---------------
	gotoXY(0,0);
	ve_onix();
	//-----------Ve bang menu--------------
	SetColor(14);
	gotoXY(x,y);
	printf("_____________________________________________________");
	gotoXY(x,y+1);
	printf("==| |  || |                              |  ||  | |==");
	gotoXY(x,y+2);
	printf("==/ / // /                               /  //  / /==");
	gotoXY(x,y+3);
	printf("==\\ \\ \\\\ \\                                \\ \\\\  \\ \\==");
	gotoXY(x,y+4);
	printf("==| |  || \\                               /  \\\\ \\ \\==");
	gotoXY(x,y+5);
	printf("==/ /  // /                              /  //  / /==");
	gotoXY(x,y+6); 
	printf("==|_|__||_|______________________________|_||___|_|==");
	SetColor(7);
	gotoXY(x+17,y+2);
	printf("   1. New game     ");
	gotoXY(x+17,y+3);
	printf("   2. Option       ");
	gotoXY(x+17,y+4);
	printf("   3. Information  ");
	gotoXY(x+17,y+5);
	printf("   4. Exit         ");
	//------------menu dong---------------
	while(true){
		if(kbhit()){
			c=getch();
			if(c=='1'){
				gotoXY(x+17,y+2);
				SetColor(11);
				printf("   1. New game     ");
				gotoXY(x+17,y+3);
				SetColor(7);
				printf("   2. Option       ");
				gotoXY(x+17,y+4);
				SetColor(7);
				printf("   3. Information  ");
				gotoXY(x+17,y+5);
				SetColor(7);
				printf("   4. Exit         ");
				choose=1;
			}
			else if(c=='2'){
				gotoXY(x+17,y+2);
				SetColor(7);
				printf("   1. New game     ");
				gotoXY(x+17,y+3);
				SetColor(11);
				printf("   2. Option       ");
				gotoXY(x+17,y+4);
				SetColor(7);
				printf("   3. Information  ");
				gotoXY(x+17,y+5);
				SetColor(7);
				printf("   4. Exit         ");
				choose=2;
			}
			else if(c=='3'){
				gotoXY(x+17,y+2);
				SetColor(7);
				printf("   1. New game     ");
				gotoXY(x+17,y+3);
				SetColor(7);
				printf("   2. Option       ");
				gotoXY(x+17,y+4);
				SetColor(11);
				printf("   3. Information  ");
				gotoXY(x+17,y+5);
				SetColor(7);
				printf("   4. Exit         ");
				choose=3;
			}
			else if(c=='4'){
				gotoXY(x+17,y+2);
				SetColor(7);
				printf("   1. New game     ");
				gotoXY(x+17,y+3);
				SetColor(7);
				printf("   2. Option       ");
				gotoXY(x+17,y+4);
				SetColor(7);
				printf("   3. Information  ");
				gotoXY(x+17,y+5);
				SetColor(11);
				printf("   4. Exit         ");
				choose=4;
			}
			else if (c == 13){
				if(choose==1){
					system("cls");
					//toc_do=2;
					play_option();
					bang_menu();
				}
				else if(choose==2){
					system("cls");
					option();
				//	speed();
				}
				else if(choose==3){
					system("cls");
					printf("\n\nCreator: Le Hong Phuc - 6251071073");
					printf("\n         Nguyen Binh Minh - 6251071061");
					printf("\n         Lai Huu Loi - 6251071056");
					printf("\n         Bui Tuan Linh - 6251071053");
					printf("\n\t\t\t\t\t\tHow to play");
					printf("\n\t\t\tPress 1,2,3 or 4 to select");
					printf("\n\t\t\tIn mod 1 and mod 2, press %c %c <- -> to move",24,25);
					printf("\n\t\t\tIn mod 3,press %c %c <- -> or w s a d to move",24,25);
					while(true){
						if(kbhit()){
							char a=getch();
							if(a==13){	
								system("cls");
								bang_menu();
							}
						}
					}
					break;
				}
				else if(choose==4){
					textcolor(0);
					exit(0);				
				}
			}			
		}
	}
}


void play0(){
	sl1=4;
	diem=0;
	SetColor(11);
	//----BUILD GAME
	//----setting
	ve_tuong();
	tao_ran1();
	tao_moi();
	int x1=toadox1[0];
	int y1=toadoy1[0];
	check=2; 		//check=0 => xuong
					//check=1 => len
					//check=2 => phai
					//check=3 => trai
	//----play1
	while(true){
		//----Xoa du lieu cu
		gotoXY(toadox1[sl1], toadoy1[sl1]);
		printf(" ");
		//----in
		ve_ran1();
		ve_moi();
		//----Dieu khien
		if(kbhit()){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72 && check!=0){
					check=1;
				}
				else if(c==80 && check!=1){
					check=0;
				}
				else if(c==77 && check!=3){
					check=2;
				}
				else if(c==75 && check!=2){
					check=3;
				}
			}
		}
		//----Di chuyen
		if(check==0){
			y1++;
		}
		else if(check==1){
			y1--;
		}
		else if(check==2){
			x1++;
		}
		else if(check==3){
			x1--;
		}
		
		//----Cham bien
		if(gameOver()){
			ve_gameOver();
			char c=getch();
			if(c==13){
				system("cls");
				bang_menu();
				break;
			}
			else{
				continue;
			}
		}
		xu_li_an_moi();
		//----xu li ran
		di_chuyen1(x1,y1);
		//----speed
		toc_do_option();
	}
	textcolor(0);
	SetColor(15);
}

void play1(){
	sl1=4;
	diem=0;
	SetColor(11);
	//----BUILD GAME
	//----setting
	ve_tuong();
	tao_ran1();
	tao_ran2();
	tao_moi();
	int x1=toadox1[0];
	int y1=toadoy1[0];
	int x2=toadox2[0];
	int y2=toadoy2[0];
	check=2; 	//check=0 => xuong
					//check=1 => len
					//check=2 => phai
					//check=3 => trai
	//----play1
	while(true){
		//----Xoa du lieu cu
		gotoXY(toadox1[sl1], toadoy1[sl1]);
		printf(" ");
		gotoXY(toadox2[sl1], toadoy2[sl1]);
		printf(" ");
		//----in
		ve_ran1();
		ve_ran2();
		ve_moi();
		//----Dieu khien
		if(kbhit()){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72 && check!=0){
					check=1;
				}
				else if(c==80 && check!=1){
					check=0;
				}
				else if(c==77 && check!=3){
					check=2;
				}
				else if(c==75 && check!=2){
					check=3;
				}
			}
		}
		//----Di chuyen
		if(check==0){
			y1++;
			y2--;
		}
		else if(check==1){
			y1--;
			y2++;
		}
		else if(check==2){
			x1++;
			x2--;
		}
		else if(check==3){
			x1--;
			x2++;
		}
		
		//----Cham bien
		if(gameOver()){
			ve_gameOver();
			
			char c=getch();
			if(c==13){
				system("cls");
				bang_menu();
				break;
			}
			
		}
		xu_li_an_moi();
		//----xu li ran
		di_chuyen1(x1,y1);
		di_chuyen2(x2,y2);
		//----speed
		toc_do_option();
	}
	textcolor(0);
	SetColor(15);
}


void play3(){
	sl1=4,sl2=4;
	diem=0;
	diem2=0;
	SetColor(11);
	//----BUILD GAME
	//----setting
	ve_tuong();
	tao_ran1();
	tao_ran2();
	tao_moi();
	int x1=toadox1[0];
	int y1=toadoy1[0];
	int x2=toadox2[0];
	int y2=toadoy2[0];
	check1=2;
	check2=3; 	//check=0 => xuong
					//check=1 => len
					//check=2 => phai
					//check=3 => trai
	//----play1
	while(true){
		//----Xoa du lieu cu
		gotoXY(toadox1[sl1], toadoy1[sl1]);
		printf(" ");
		gotoXY(toadox2[sl2], toadoy2[sl2]);
		printf(" ");
		//----in
		ve_ran1();
		ve_ran2();
		ve_moi();
		//----Dieu khien
		if(kbhit()){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72 && check2!=0){
					check2=1;
				}
				else if(c==80 && check2!=1){
					check2=0;
				}
				else if(c==77 && check2!=3){
					check2=2;
				}
				else if(c==75 && check2!=2){
					check2=3;
				}
			}
	//		char d=getch();
			if(c=='w' && check1!=0){
					check1=1;
				}
			else if(c=='s' && check1!=1){
				check1=0;
			}
			else if(c=='d' && check1!=3){
				check1=2;
			}
			else if(c=='a' && check1!=2){
				check1=3;
			}
		}/*
		if(kbhit()){
				char c=getch();
				
		}*/
		//----Di chuyen 1
		if(check1==0){
			y1++;
		}
		else if(check1==1){
			y1--;
		}
		else if(check1==2){
			x1++;
		}
		else if(check1==3){
			x1--;
		}
		//----Di chuyen 2
		if(check2==0){
			y2++;
		}
		else if(check2==1){
			y2--;
		}
		else if(check2==2){
			x2++;
		}
		else if(check2==3){
			x2--;
		}
		//----Cham bien
		if(gameOver()){
			ve_gameOver();
			char c=getch();
			if(c==13){
				system("cls");
				bang_menu();
				break;
			}
			else{
				continue;
			}
		}
		
		xu_li_an_moi12();
		//----xu li ran
	//	if(solo==0){
			di_chuyen1(x1,y1);
			di_chuyen2(x2,y2);
	/*	}
		else if(solo==1){
			di_chuyen1(x1,y1);
		}
		else if(solo==2)		{
			di_chuyen2(x2,y2);
		}
	*/	
		//----speed
		toc_do_option();
	}
	textcolor(0);
	SetColor(15);
}

void play2(){
	SetColor(11);
	//----BUILD GAME
	//----setting
   //	loading();
	switch (level) { //----play	
	 	case 1:
	 		system("cls");
	 		map3level();
 			InGamePlay2 ();
 			if (level==0) {
 				system ("cls");
 				ve_gameOver();
				break;
			}
		case 2:
		//	loading();
			system("cls");
			Sleep (1000);
			map3level();
 			InGamePlay2 (); 
 			if (level==0) {
 				system ("cls");
 				ve_gameOver();
				break;
			}
 		case 3:
 		//	loading();
 	 		system("cls");
 	 		Sleep (1000);
 			map3level();
 			InGamePlay2 (); 	
 			if (level==0) {
 				system ("cls");
 				ve_gameOver();
			break;
		}
	 	default:
	 		system ("cls");
		 	gotoXY(56,14);
			SetColor(12);
			printf("Complete!");	
			gotoXY(56,16);
			printf("Score: %d",diem);
			Sleep (1000);
			level=1;
			break;
 	}
}

void InGamePlay2 () {
	sl1=4;
	diem=0;
	SetColor(11);
	//----BUILD GAME
	//----setting
	tao_ran1();
	tao_moi();
	int x1=toadox1[0];
	int y1=toadoy1[0];
	check=2; 	//check=0 => xuong
					//check=1 => len
					//check=2 => phai
					//check=3 => trai
	//----play1
	ve_ran1();
	Sleep(1000);
	while(true){
		//----Xoa du lieu cu
		gotoXY(toadox1[sl1], toadoy1[sl1]);
		printf(" ");
		//----in
		if (sl1==14) {
			sl1 = 4;
			check = 2;
			level++;
			break;
		}
		ve_ran1();
		ve_moi();
		//----Dieu khien
		if(kbhit()){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72 && check!=0){
					check=1;
				}
				else if(c==80 && check!=1){
					check=0;
				}
				else if(c==77 && check!=3){
					check=2;
				}
				else if(c==75 && check!=2){
					check=3;
				}
			}
		}
		//----Di chuyen
		if(check==0){
			y1++;
		}
		else if(check==1){
			y1--;
		}
		else if(check==2){
			x1++;
		}
		else if(check==3){
			x1--;
		}
		
		//----Cham bien
		if(gameOver()){
			ve_gameOver();
			level=1;
			char c=getch();
			if(c==13){
				system("cls");
				bang_menu();
				break;
			}
			else{
				continue;
			}
		}
		xu_li_an_moi();
		//----xu li ran
		di_chuyen1(x1,y1);
		//----speed
		toc_do_option();
	}
	textcolor(0);
	SetColor(15);
}

