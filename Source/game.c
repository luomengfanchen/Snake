/**
 * @file game.c
 * @author Miracle
 * @brief 游戏相关函数定义
 * @version 2.0
 * @date 2020-02-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "snake.h"
#include "map.h"
#include "dispaly.h"
#include "delay.h"
#include "food.h"
#include "game.h"

/**
 * @brief 游玩游戏
 * @return None
 * @param None
*/
void game()
{
	initmap(map);	 //初始化地图
	initsnake(&head); //初始化蛇

	createfood(&food_x, &food_y);				 //生成食物
	while (testfood(food_x, food_y, &head) == 0) //检测食物是否与蛇坐标重合
	{
		createfood(&food_x, &food_y); //如果重合生成食物
	}

	int key = 115;
	while (1)
	{
		initmap(map); //生成地图边界

		if (testcollide(&head) == 0) //检测碰撞
		{
			gameover();
			break;
		}

		if ((head.x == food_x) && (head.y == food_y)) //如果蛇头坐标与食物坐标重合
		{
			addsnake(&head);							 //添加一节蛇身
			createfood(&food_x, &food_y);				 //生成食物
			while (testfood(food_x, food_y, &head) == 0) //检测食物是否与蛇坐标重合
			{
				createfood(&food_x, &food_y); //如果重合就重新生成食物
			}
		}

		if (_kbhit()) //检测键盘敲击
		{
			key = getch(); //把键盘相应的ANSCII码赋值给key
		}

		updatesnake(&head, key); //更新蛇坐标

		show(food_x, food_y, &head, map); //将数据在屏幕中显示出来

		Delay(500); //延时500毫秒

		clearmap(map); //清空地图数据

		system("cls"); //清空屏幕
	}

	release(&head); //释放
}

/**
 * @brief 显示游戏结束菜单
 * @return None
 * @param None
*/
void gameover()
{
	printf("# # # # # # # # # # # # # # # # # # # #");
	printf("\n\n\n\n\n\n");
	printf("              # # # # # # \n\n");
	printf("              游 戏 结 束\n\n\n");
	printf("              # # # # # # \n");
	printf("\n\n\n\n\n\n");
	printf("# # # # # # # # # # # # # # # # # # # #");
	Delay(5000);
}
