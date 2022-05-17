#include"xuliran.h"
void speed(){
	system("cls");
	int xt=18,yt=1;
	gotoXY(8,1);
	SetColor(10);
	ve_ran_menu();
	SetColor(4);
	ve_menu(xt,yt);
	SetColor(7);
	gotoXY(xt+37,yt+6);
	printf("LEVEL");
	gotoXY(xt+33,yt+1+7);
	printf("1. Easy");
	gotoXY(xt+33,yt+1+8);
	printf("2. Medium");
	gotoXY(xt+33,yt+1+9);
	printf("3. Hard");
	gotoXY(xt+33,yt+1+10);
	printf("4. Back");
	while(true){
		if(kbhit()){
			char c=getch();
			if(c=='1'){
				gotoXY(xt+33,yt+1+7);
				SetColor(11);
				printf("1. Easy ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Medium  ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Hard  ");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back  ");
				choose_sp=1;
			}
			else if(c=='2'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Easy  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(11);
				printf("2. Medium ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Hard  ");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back  ");
				choose_sp=2;
			}
			else if(c=='3'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Easy  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Medium  ");
				gotoXY(xt+33,yt+1+9);
				SetColor(11);
				printf("3. Hard ");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back  ");
				choose_sp=3;
			}	
			else if(c=='4'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Easy  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Medium  ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Hard  ");
				gotoXY(xt+33,yt+1+10);
				SetColor(11);
				printf("4. Back ");
				choose_sp=4;
			}
			else if(c==13){
				if(choose_sp==1){
					system("cls");
					toc_do=1;
					option();
				}
				else if(choose_sp==2){
					system("cls");
					toc_do=2;
					option();
				}
				else if(choose_sp==3){
					system("cls");
					toc_do=3;
					option();
				}
				else if(choose_sp==4){
					SetColor(7);
					system("cls");
					option();
				}
				choose_sp=0;
			}	
		}
	}
}

void play(){
	system("cls");
	SetColor(7);
	int xt=18,yt=1;
	gotoXY(8,1);
	SetColor(10);
	ve_ran_menu();
	SetColor(4);
	ve_menu(xt,yt);
	SetColor(7);
	gotoXY(xt+38,yt+6);
	printf("MOD");
	gotoXY(xt+33,yt+1+7);
	printf("1. Classic  ");
	gotoXY(xt+33,yt+1+8);
	printf("2. Map      ");
	gotoXY(xt+33,yt+1+9);
	printf("3. Challenge");
	gotoXY(xt+33,yt+1+10);
	printf("4. Back     ");
	while(true){
		if(kbhit()){
			char m=getch();
			if(m=='1'){
				gotoXY(xt+33,yt+1+7);
				SetColor(11);
				printf("1. Classic  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Map      ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Challenge");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back     ");
				choose_mod=1;
			}
			else if(m=='2'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Classic  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(11);
				printf("2. Map      ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Challenge");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back     ");
				choose_mod=2;
			}
			else if(m=='3'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Classic  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Map      ");
				gotoXY(xt+33,yt+1+9);
				SetColor(11);
				printf("3. Challenge");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back     ");
				choose_mod=3;
			}
			else if(m=='4'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Classic  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Map      ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Challenge");
				gotoXY(xt+33,yt+1+10);
				SetColor(11);
				printf("4. Back     ");
				choose_mod=4;
			}
			else if(m==13){
				if(choose_mod==1){
					play_mod=1;
					option();
				}
				else if(choose_mod==2){
					play_mod=2;
					option();
				}
				else if(choose_mod==3){
					play_mod=3;
					option();
				}
				else if(choose_mod==4){
					option();
				}
			}
		}
	}
}

void play_option(){
	if(play_mod==1){
		play0();
	}
	else if(play_mod==2){
		play2();
	} 
	else if(play_mod==3){
		play3();
	} 
}


void option(){
	char co;
	int choose1;
	SetColor(7);
	system("cls");
	int xt=18,yt=1;
	gotoXY(8,1);
	SetColor(10);
	ve_ran_menu();
	SetColor(4);
	ve_menu(xt,yt);
	gotoXY(xt+37,yt+6);
	SetColor(7);
	printf("OPTION");
	gotoXY(xt+33,yt+1+7);
	printf("1. Input name  ");
	gotoXY(xt+33,yt+1+8);
	printf("2. Speed       ");
	gotoXY(xt+33,yt+1+9);
	printf("3. Mod         ");
	gotoXY(xt+33,yt+1+10);
	printf("4. Back        ");
	while(true){
		if(kbhit()){
			co=getch();
			if(co=='1'){
				gotoXY(xt+33,yt+1+7);
				SetColor(11);
				printf("1. Input name  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Speed       ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Mod         ");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back         ");
				choose1=1;
			}
			else if(co=='2'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Input name  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(11);
				printf("2. Speed       ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Mod         ");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back         ");
				choose1=2;
			}
			else if(co=='3'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Input name  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Speed       ");
				gotoXY(xt+33,yt+1+9);
				SetColor(11);
				printf("3. Mod         ");
				gotoXY(xt+33,yt+1+10);
				SetColor(7);
				printf("4. Back         ");
				choose1=3;
			}
			else if(co=='4'){
				gotoXY(xt+33,yt+1+7);
				SetColor(7);
				printf("1. Input name  ");
				gotoXY(xt+33,yt+1+8);
				SetColor(7);
				printf("2. Speed       ");
				gotoXY(xt+33,yt+1+9);
				SetColor(7);
				printf("3. Mod         ");
				gotoXY(xt+33,yt+1+10);
				SetColor(11);
				printf("4. Back         ");
				choose1=4;
			}
			else if(co==13){
				if(choose1==1){
					system("cls");
					
					SetColor(4);
					ve_inputname();
					SetColor(7);
					ShowCur(1);
					if(play_mod==3){
						gotoXY(7,6);
						printf("Player2's name: ");
						gotoXY(7,4);
						printf("Player1's name: "); scanf("%s",&name1);
						gotoXY(7,6);
						printf("Player2's name: "); scanf("%s",&name2);
					}
					else{
						gotoXY(7,5);
						printf("Input your name: ");
						scanf("%s",&name);
					}
					ShowCur(0);
					option();
				}
				else if(choose1==2){
					speed();
				}
				else if(choose1==3){
					play();
				}
				else if(choose1==4){
					system("cls");
					bang_menu();
				}
			}
		}
	}
}

