/**
 * @file food.c
 * @author Miracle
 * @brief 食物相关函数定义
 * @version 2.0
 * @date 2020-02-20
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
 * @param [out] fx 食物的x坐标的地址
 * @param [out] fy 食物的y坐标的地址
*/
void createfood(int *fx, int *fy)
{
    srand(time(NULL));
    *fx = rand() % 19;
    *fy = rand() % 19;
}

/**
 * @brief 测试食物生成的坐标是否与蛇座标以及地图边界重合
 * @return 返回是否重合的值
 * @retval 1 不重合
 * @retval 0 重合
 * @param [in] x 食物的x坐标
 * @param [in] y 食物的y坐标
 * @param [in] pSnake 蛇头（链表头）的地址
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
