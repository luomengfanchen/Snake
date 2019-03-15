#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "..\Header\menu.h"
#include "..\Header\delay.h"
/*
功能：显示开始菜单
返回值：为0表明进行游戏,为1表示退出
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
				printf("  >>     开 始 游 戏\n\n\n\n");
				printf("         游 戏 说 明\n\n\n\n");
				printf("         退 出 游 戏\n\n\n\n\n");
				break;
			case 2:
				printf("         开 始 游 戏\n\n\n\n");
				printf("  >>     游 戏 说 明\n\n\n\n");
				printf("         退 出 游 戏\n\n\n\n\n");
				break;
			case 3:
				printf("         开 始 游 戏\n\n\n\n");
				printf("         游 戏 说 明\n\n\n\n");
				printf("  >>     退 出 游 戏\n\n\n\n\n");
				break;
		}
		printf("# # # # # # # # # # # # # # # # # # # #\n");

		key=getch();
		switch(key)
		{
			case 13:
				if(flag==1)
					return 0;
				if(flag==2)
					help();
				if(flag==3)
					return 1;
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
功能：显示帮助菜单
*/
void help()
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
