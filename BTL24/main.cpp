#include"snakegame.h"
int main(){
	ShowCur(0);
	srand(time(NULL));
	loading();
	bang_menu();
	getch();
	return 0;
}
