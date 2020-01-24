#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "menu.h"
#include "delay.h"

/*
	TODO 功能：显示开始菜单
	? 返回值：为1表明进行游戏, 为2表示游戏说明, 为3表示退出
*/
int menu()
{
	int flag=1;
	int key=0;
	while(1)
	{
		system("cls");
		printf("# # # # # # # # # # # # # # # # # # # #\n\n\n\n\n\n");
		switch(flag)
		{
			case 1:
				printf("  >>       开 始 游 戏\n\n\n\n");
				printf("           游 戏 说 明\n\n\n\n");
				printf("           退 出 游 戏\n\n\n\n\n");
				break;
			case 2:
				printf("           开 始 游 戏\n\n\n\n");
				printf("  >>       游 戏 说 明\n\n\n\n");
				printf("           退 出 游 戏\n\n\n\n\n");
				break;
			case 3:
				printf("           开 始 游 戏\n\n\n\n");
				printf("           游 戏 说 明\n\n\n\n");
				printf("  >>       退 出 游 戏\n\n\n\n\n");
				break;
		}
		printf("# # # # # # # # # # # # # # # # # # # #\n");

		key=getch();
		switch(key)
		{
			case 13://Enter
				if(flag == 1)
				{
					return 1;
				}
				if(flag == 2)
				{
					return 2;
				}
					
				if(flag == 3)
				{
					return 3;
				}
				break;
			case 119://w
				if(flag==1)
					flag=3;
				else
					flag--;
				break;
			case 115://s
				if(flag==3)
					flag=1;
				else
					flag++;
				break;
		}
	}


}
/*
	TODO 功能：显示帮助菜单
*/
void helpmenu()
{
	system("cls");
	printf("# # # # # # # # # # # # # # # # # # # #\n\n\n\n");
	printf("               游戏说明\n\n\n\n");
	printf("  在菜单中使用w，s进行移动\n\n\n\n");
	printf("  按下回车键进行确认\n\n\n\n");
	printf("  在游戏中使用w，s，a，d 进行上下左右移动\n\n\n\n");
	printf("        将为你在10秒后自动退出\n");
	printf("# # # # # # # # # # # # # # # # # # # #\n");
	Delay(10000);
}

/*
	TODO 功能：显示退出菜单
*/
void exitmenu()
{
	system("cls");
	printf("# # # # # # # # # # # # # # # # # # # #");
	printf("\n\n\n\n\n\n\n\n");
	printf("           正在为你退出游戏\n");
	printf("\n\n\n\n\n\n\n\n");
	printf("# # # # # # # # # # # # # # # # # # # #\n");
	Delay(1000);
}
