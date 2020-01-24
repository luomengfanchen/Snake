#include <stdio.h>
#include <stdlib.h>

#include "game.h"
#include "menu.h"
#include "delay.h"

// main函数
int main()
{
	//初始设置
	system("title SnakeGame");
	system("mode con cols=40 lines=21");// cols->宽 lines->高
	system("color 0A");


	int menuflag = 0;
	while(menuflag = menu())
	{
		if(menuflag == 1)
		{
			game();//进行
		}
		else if(menuflag == 2)
		{
			helpmenu();//显示帮助菜单
		}
		else
		{
			exitmenu();//显示退出菜单
			break;
		}
	}

	return EXIT_SUCCESS;
}
