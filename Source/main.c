/**
 * @file main.c
 * @author Miracle
 * @brief 主函数定义
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#include "game.h"
#include "menu.h"
#include "delay.h"

/**
 * @brief 游戏主函数,进行初始化设置及游戏主逻辑结构
 * @return 检测是否正常退出
 * @param None
 * 
*/
int main()
{
	//初始设置
	system("title SnakeGame");
	system("mode con cols=40 lines=21"); // cols->宽 lines->高
	system("color 0A");

	int menuflag = 0;
	while (menuflag = menu())
	{
		if (menuflag == 1)
		{
			game(); //进行
		}
		else if (menuflag == 2)
		{
			helpmenu(); //显示帮助菜单
		}
		else
		{
			exitmenu(); //显示退出菜单
			break;
		}
	}

	return EXIT_SUCCESS;
}
