/**
 * @file dispaly.c
 * @author Miralce
 * @brief 显示函数定义
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

#include "map.h"
#include "snake.h"
#include "food.h"

/**
 * @brief 将地图和蛇体以及食物在终端显示
 * @return None
 * @param 食物的x坐标
 * @param 食物的y坐标
 * @param 蛇头（链表头）的地址
 * @param 二维数组的地址
*/
void show(int fx, int fy, Snake *pSnake, char (*pmap)[20])
{
    map[fx][fy] = '$';

    map[pSnake->x][pSnake->y] = '@';
    pSnake = pSnake->next;
    while (pSnake != NULL)
    {
        map[pSnake->x][pSnake->y] = '*';
        pSnake = pSnake->next;
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("%c ", pmap[i][j]);
        }
        printf("\n");
    }
}
