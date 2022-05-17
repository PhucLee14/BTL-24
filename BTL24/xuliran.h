#include"trangtri.h"
void tao_ran1(){
	int x_tao;
	int y_tao;
	if(play_mod==1 || play_mod==3){
		 x_tao=24;
	     y_tao=15;
	}
	else if(play_mod==2){
		 x_tao=50;
		 y_tao=15;
	} 
	for(int i=0;i<sl1;i++){
		toadox1[i]=x_tao--;
		toadoy1[i]=y_tao;
	}
}

void tao_ran2(){
	int x_tao=94;
	int y_tao=15;
	for(int i=0;i<sl2;i++){
		toadox2[i]=x_tao++;
		toadoy2[i]=y_tao;
	}
}

void ve_ran1(){	
	char a(2);
	SetColor(11);
	for(int i=0;i<sl1;i++){
		gotoXY(toadox1[i],toadoy1[i]);
		if(i==0){
			printf("%c",2);
		}
		else{
			printf("O");
		}
	}
}

void ve_ran2(){	
	char a(2);
	SetColor(10);
	for(int i=0;i<sl2;i++){
		gotoXY(toadox2[i],toadoy2[i]);
		if(i==0){
			printf("%c",2);
		}
		else{
			printf("O");
		}
	}
}

void di_chuyen(int x1, int y1){
	for(int i=sl;i>0;i--){
		toadox1[i]=toadox1[i-1];
		toadoy1[i]=toadoy1[i-1];
	}	
	toadox1[0]=x1;
	toadoy1[0]=y1;
}

void di_chuyen1(int x1, int y1){
	for(int i=sl1;i>0;i--){
		toadox1[i]=toadox1[i-1];
		toadoy1[i]=toadoy1[i-1];
	}	
	toadox1[0]=x1;
	toadoy1[0]=y1;
}

void di_chuyen2(int x2, int y2){
	for(int i=sl2;i>0;i--){
		toadox2[i]=toadox2[i-1];
		toadoy2[i]=toadoy2[i-1];
	}	
	toadox2[0]=x2;
	toadoy2[0]=y2;
}

int cham_than(){
	for(int i=1;i<=sl1;i++){
		if(toadox1[0]==toadox1[i] && toadoy1[0]==toadoy1[i]){
		//	solo=1;
			return 1;
		}
		if(toadox1[0]==toadox2[i] && toadoy1[0]==toadoy2[i]){
			return 1;
		}
	}
	return 0;
}

int cham_than2(){
	for(int i=1;i<=sl1;i++){
		if(toadox1[0]==toadox1[i] && toadoy1[0]==toadoy1[i]){
			solo=1;
			return 1;
		}
		if(toadox1[0]==toadox2[i] && toadoy1[0]==toadoy2[i]){
			return 1;
			solo=1;
		}
	}
	for(int i=1;i<=sl2;i++){
		if(toadox2[0]==toadox2[i] && toadoy2[0]==toadoy2[i]){
			solo=2;
			return 1;
		}
		if(toadox2[0]==toadox1[i] && toadoy2[0]==toadoy1[i]){
			solo=2;
			return 1;
		}
	}
	return 0;
}
int gameOver(){
	if(toadox1[0]==18 || toadox1[0]==100 || toadoy1[0]==3 || toadoy1[0]==27 ){
		solo=1;
		return 1;
	}
	if(toadox2[0]==18 || toadox2[0]==100 || toadoy2[0]==3 || toadoy2[0]==27 ){
		solo=2;
		return 1;
	}
	if (play_mod==2) {
		if (level==1) {
			if (((toadoy1[0]==8) || (toadoy1[0]==22))) {
			if ((toadox1[0]>30) && (toadox1[0]<89)) return 1;
		}
			if (((toadox1[0]==31) || (toadox1[0]==88))) {
			if (((toadoy1[0]>8) && (toadoy1[0]<12)) || ((toadoy1[0]>18) && (toadoy1[0]<22))) return 1;
		}
	}
		if (level==2) {
			if (toadoy1[0]==20 && toadox1[0]>18 && toadox1[0]<51 ) return 1;
			if (toadoy1[0]==10 && toadox1[0]>67 && toadox1[0]<100) return 1;
			if (toadox1[0]==40 && toadoy1[0]>3 && toadoy1[0]<14) return 1;
			if (toadox1[0]==78 && toadoy1[0]>16 && toadoy1[0]<27) return 1;
	}
		if (level==3) {
			if (toadox1[0]==50 && toadoy1[0]>3 && toadoy1[0]<12) return 1;
			if (toadox1[0]==68 && toadoy1[0]>18 && toadoy1[0]<27) return 1;
			if (toadoy1[0]==12 && toadox1[0]>49 && toadox1[0]<86 ) return 1;
			if (toadoy1[0]==18 && toadox1[0]>32 && toadox1[0]<69) return 1;
		
			if (toadox1[0]==33 && toadoy1[0]>9 && toadoy1[0]<19) return 1;
			if (toadox1[0]==85 && toadoy1[0]>11 && toadoy1[0]<21) return 1;
			if (toadoy1[0]==7 && toadox1[0]>64 && toadox1[0]<89 ) return 1;
			if (toadoy1[0]==23 && toadox1[0]>29 && toadox1[0]<54) return 1;
		}
	}
	if(play_mod==3){
		return cham_than2();
	}
	else{
		return cham_than();
	}
}

void ve_gameOver(){
	SetColor(14);
	for(int x=50;x<=71;x++){
		gotoXY(x,11);
		printf("*");
		gotoXY(x,12);
		printf(" ");
		gotoXY(x,13);
		printf(" ");
		gotoXY(x,15);
		printf(" ");
		gotoXY(x,17);
		printf(" ");
		gotoXY(x,18);
		printf(" ");
		gotoXY(x,19);
		printf("*");		
	}
	for(int y=11;y<=19;y++){
		gotoXY(50,y);
		printf("*");
		gotoXY(71,y);
		printf("*");	
	}
	if (play_mod==1) {
		gotoXY(51,14);
		SetColor(12);
		printf("      GameOver!   ");
		gotoXY(51,16);
		printf("      SCORE: %d   ",diem);
	}
	else if(play_mod==2){
		gotoXY(51,15);
		SetColor(12);
		printf("      GameOver!   ");
	}
	else if(play_mod==3){
		gotoXY(51,13);
		SetColor(12);
		printf("      GameOver!   ");
		if(solo==2){
			gotoXY(51,15);
			printf("     Player1 Win  ");	
			gotoXY(51,17);
			printf("      Score: %d  ",diem);
		}
		else if(solo==1){
			gotoXY(51,15);
			printf("     Player2 Win  ");
			gotoXY(51,17);
			printf("      Score: %d  ",diem2);
		}
	}
	char c=getch();
			if(c==13){
				system("cls");
				record();
			}
}

void tao_moi(){
	do {
		xmoi=rand()%(99-19+1)+19;//rand()%(b-a+1)+a
		ymoi=rand()%(26-4+1)+4;
	} while (kiem_tra_moi()==true);
}

bool kiem_tra_moi () {
	for (int i = 0; i<sl; i++) {
		 	if (toadox1[i] == xmoi && toadoy1[i] == ymoi) return true;
		} 
	if (play_mod==2) {
		if (level==1) {
			if (((ymoi==8) || (ymoi==22))) {
				if ((xmoi>30) && (xmoi<89)) return true;
			}
			if (((xmoi==31) || (xmoi==88))) {
				if (((ymoi>8) && (ymoi<12)) || ((ymoi>18) && (ymoi<22))) return true;
			}
		}
		if (level==2) {
			if (ymoi==20 && xmoi>18 && xmoi<51 ) return true;
			if (ymoi==10 && xmoi>67 && xmoi<100) return true;
			if (xmoi==40 && ymoi>3 && ymoi<14) return true;
			if (xmoi==78 && ymoi>16 && ymoi<27) return true;
		}
		if (level==3) {
			if (xmoi==50 && ymoi>3 && ymoi<12) return true;
			if (xmoi==68 && ymoi>18 && ymoi<27) return true;
			if (ymoi==12 && xmoi>49 && xmoi<86 ) return true;
			if (ymoi==18 && xmoi>32 && xmoi<69) return true;
		
			if (xmoi==33 && ymoi>9 && ymoi<19) return true;
			if (xmoi==85 && ymoi>11 && ymoi<21) return true;
			if (ymoi==7 && xmoi>64 && xmoi<89 ) return true;
			if (ymoi==23 && xmoi>29 && xmoi<54) return true;
		}
	}	
	return false;
}

void ve_moi(){
//	char a(4);
	SetColor(12);
	gotoXY(xmoi,ymoi);
	printf("%c",4);
}

int an_moi(){
	if(toadox1[0]==xmoi && toadoy1[0]==ymoi){
		return 1;
	}	
	if(toadox2[0]==xmoi && toadoy2[0]==ymoi){
		return 1;
	}
	return 0;
}

int an_moi1(){
	if(toadox1[0]==xmoi && toadoy1[0]==ymoi){
		return 1;
	}
	return 0;
}

int an_moi2(){
	if(toadox2[0]==xmoi && toadoy2[0]==ymoi){
		return 1;
	}
	return 0;
}

void xu_li_an_moi(){
	if(an_moi()){
		sl1++;
		tao_moi();
		ve_moi();
		//Hien thi diem
		diem++;
	}
	gotoXY(102,18);
	SetColor(15);
	printf("Name: %s",name);
	gotoXY(102,22);
	SetColor(15);
	if(play_mod==1){
		printf("Mod: Classic");
	}
	else if(play_mod==2){
		printf("Mod: Map");
	}
	else if(play_mod==3){
		printf("Mod: Challenge");
	}
	gotoXY(102,24);
	SetColor(15);
	if(toc_do==1){
		printf("Level: Easy");
	}
	else if(toc_do==2){
		printf("Level: Medium");
	}
	else if(toc_do=3){
		printf("Level: Hard");
	} 	
//	if (play_mod==1 || play_mod==3){
		gotoXY(102,26);
		SetColor(15);
		printf("Score: %d",diem);
//	}
	if (play_mod==2) {
		gotoXY(102,19);
		SetColor(18);
		printf("Eat %d more", 14-sl);
		gotoXY(102,20);
		SetColor(18);
		printf("to pass level");
	}
}


void xu_li_an_moi12(){
	if(an_moi1()){
		sl1++;
		diem++;
		tao_moi();
		ve_moi();
	}
	else if(an_moi2()){
		sl2++;
		diem2++;
		tao_moi();
		ve_moi();
	}	
	gotoXY(102,18);
	SetColor(15);
	printf("Name 1: %s",name1);
	gotoXY(102,20);
	SetColor(15);
	printf("Name 2: %s",name2);
//	gotoXY(102,24);
//	SetColor(15);
//	if(play_mod==1){
//		printf("Mod: Classic");
//	}
//	else if(play_mod==2){
//		printf("Mod: Map");
//	}
//	else if(play_mod==3){
//		printf("Mod: Challenge");
//	}
	gotoXY(102,22);
	SetColor(15);
	if(toc_do==1){
		printf("Level: Easy");
	}
	else if(toc_do==2){
		printf("Level: Medium");
	}
	else if(toc_do=3){
		printf("Level: Hard");
	} 	
	if (play_mod==1 ){
		gotoXY(102,26);
		SetColor(15);
		printf("Score: %d",diem);
	}
	if(play_mod==3){
		gotoXY(102,24);
		SetColor(15);
		printf("Score 1: %d",diem);	
		gotoXY(102,26);
		SetColor(15);
		printf("Score 2: %d",diem2);	
	}
	if (play_mod==2) {
		gotoXY(102,19);
		SetColor(18);
		printf("Eat %d more", 14-sl1);
		gotoXY(102,20);
		SetColor(18);
		printf("to pass level");
	}
}

void toc_do_option(){
	if(toc_do==1){
		if(check==2 || check==3){
			Sleep(250);
		}
		else{
			Sleep(450);
		}
	}
	else if(toc_do==2){
		if(check==2 || check==3){
			Sleep(100);
		}
		else{
			Sleep(180);
		}
	}
	else if(toc_do==3){
		if(check==2 || check==3){
			Sleep(50);
		}
		else{
			Sleep(90);
		}
	}
	else if(toc_do==0){
		if(check==2 || check==3){
			Sleep(100);
		}
		else{
			Sleep(180);
		}
	}
}

void record() {
	char x,y;
	SetColor (10);
	if (play_mod==1) {
		FILE *f1=fopen ("recordmod1.txt","a+");
		fprintf(f1,"Player Name :%s\n",name);
		fprintf (f1,"Score :%d\n",diem);
		for(int i=0; i<=50; i++)
	        fprintf(f1,"%c",'_');
	    fprintf(f1,"\n");
	    fclose(f1);
	    printf("Wanna see past records press 'y' or press any key to exit!\n");
	    x=getch();
	    system("cls");
	    if(x=='y')
	    {
	    	printf ("Classic mode\n");
	    	printf ("***************************\n");
	        f1=fopen("recordmod1.txt","r");
	        do
	        {
	            putchar(y=getc(f1));
	        }
	        while(y!=EOF);
	        while(true){
	        	if(kbhit){
	        		char p=getch();
	        		if(p==13){
	        			bang_menu();
					}
				}
			}
	    }
	    else// if(x==32)
		{
	    	bang_menu();
		}
	    fclose(f1);
	}
	if (play_mod==3) {
		FILE *f2=fopen ("recordmod2.txt","a+");
		fprintf(f2,"Player1 Name :%s\n",name1);
		fprintf (f2,"Score :%d\n",diem);
		fprintf(f2,"Player2 Name :%s\n",name2);
		fprintf (f2,"Score :%d\n",diem2);
		for(int i=0; i<=50; i++)
	        fprintf(f2,"%c",'_');
	    fprintf(f2,"\n");
	    fclose(f2);
	    printf("Wanna see past records press 'y' or press any key to exit!\n");
	    x=getch();
	    system("cls");
	    if(x=='y')
	    {
	    	printf ("Challenge mode\n");
	    	printf ("***************************\n");
	        f2=fopen("recordmod2.txt","r");
	        do
	        {
	            putchar(y=getc(f2));
	        }
	        while(y!=EOF);
	        while(true){
	        	if(kbhit){
	        		char p=getch();
	        		if(p==13){
	        			bang_menu();
					}
				}
			}
	    } 
	    else// if(x==32)
		{
	    	bang_menu();
		}
	    fclose(f2);
	}
//	printf ("Press 'Enter' to back menu");
}
