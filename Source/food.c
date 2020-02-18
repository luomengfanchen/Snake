/**
 * @file food.c
 * @author Miracle
 * @brief 食物相关函数定义
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "snake.h"

int food_x = 0;
int food_y = 0;

/**
 * @brief 生成食物
 * @return None
 * @param 食物的x坐标的地址
 * @param 食物的y坐标的地址
*/
void createfood(int *fx, int *fy)
{
    srand(time(NULL));
    *fx = rand() % 19;
    *fy = rand() % 19;
}

/**
 * @brief 测试食物生成的坐标是否与蛇座标以及地图边界重合
 * @return 不重合返回1，重合返回0
 * @param 食物的x坐标
 * @param 食物的y坐标
 * @param 蛇头（链表头）的地址
*/
int testfood(int fx, int fy, Snake *pSnake)
{
    if (fx == 0 || fy == 0)
    {
        return 0;
    }

    while (pSnake != NULL)
    {
        if ((fx == pSnake->x) && (fy == pSnake->y))
        {
            return 0;
        }
        pSnake = pSnake->next;
    }
    return 1;
}
