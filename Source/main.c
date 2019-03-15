#include <stdio.h>
#include <stdlib.h>

#include "..\Header\game.h"
#include "..\Header\menu.h"
#include "..\Header\delay.h"
//	main函数
int main()
{
	if(menu()==0)
	{
		game();
	}
	else
	{
		system("cls");
		printf("# # # # # # # # # # # # # # # # # # # #");
		printf("\n\n\n\n\n\n\n\n");
		printf("     正在为你退出游戏\n");
		printf("\n\n\n\n\n\n\n\n");
		printf("# # # # # # # # # # # # # # # # # # # #\n");
		Delay(1000);
	}
	return 0;
}
