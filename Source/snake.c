/**
 * @file snake.c
 * @author Miralce
 * @brief 蛇体操作相关函数定义
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "snake.h"
#include "food.h"

int length = 3; //蛇长

Snake head; //保存蛇头（链表头）数据

/**
 * @brief 初始化蛇，生成一个蛇头，和两个蛇身
 * @return None
 * @param 传入蛇头的地址
*/
void initsnake(Snake *pSnake)
{
    Snake *current = NULL;
    Snake *temp = NULL;

    pSnake->x = 4;
    pSnake->y = 2;

    current = (Snake *)malloc(sizeof(Snake));
    current->x = 3;
    current->y = 2;
    pSnake->next = current;
    temp = current;

    current = (Snake *)malloc(sizeof(Snake));
    current->x = 2;
    current->y = 2;
    temp->next = current;
    current->next = NULL;
}

/**
 * @brief 更新蛇坐标
 * @return None
 * @param 传入蛇头的地址
 * @param 按下的键位
*/
void updatesnake(Snake *pSnake, int key)
{
    int prev_x = pSnake->x; //保存上一个节点坐标
    int prev_y = pSnake->y;

    int cur_x = 0; //保存本节点坐标
    int cur_y = 0;

    switch (key) //更新蛇头坐标
    {
    case 115: //s
        pSnake->x = pSnake->x + 1;
        break;
    case 119: //w
        pSnake->x = pSnake->x - 1;
        break;
    case 97: //a
        pSnake->y = pSnake->y - 1;
        break;
    case 100: //d
        pSnake->y = pSnake->y + 1;
        break;
    }

    pSnake = pSnake->next;
    while (pSnake != NULL) //更新蛇身坐标
    {
        cur_x = pSnake->x;
        cur_y = pSnake->y;

        pSnake->x = prev_x;
        pSnake->y = prev_y;

        prev_x = cur_x;
        prev_y = cur_y;

        pSnake = pSnake->next;
    }
}

/**
 * @brief 添加蛇身
 * @return None
 * @param 传入蛇头的地址
*/
void addsnake(Snake *pSnake)
{
    Snake *AdditionSnake;

    AdditionSnake = (Snake *)malloc(sizeof(Snake));

    while (pSnake->next != NULL)
    {
        pSnake = pSnake->next;
    }

    pSnake->next = AdditionSnake;
    AdditionSnake->next = NULL;
}

/**
 * @brief 释放链表
 * @return None
 * @param 传入蛇头的地址
*/
void release(Snake *pSnake)
{
    pSnake = pSnake->next;
    Snake *temp = NULL;
    while (pSnake != NULL)
    {
        temp = pSnake->next;
        free(pSnake);
        pSnake = temp;
    }
}

/**
 * @brief 检查蛇头是否碰撞
 * @return 碰撞返回0，不碰撞返回1
 * @param 传入蛇头地址
 * @param 传入二维数组地址
*/
int testcollide(Snake *pSnake)
{
    if (pSnake->x == 0 || pSnake->x == 19 || pSnake->y == 0 || pSnake->y == 19)
    {
        return 0;
    }
    Snake *current = pSnake->next;
    while (current != NULL)
    {
        if (pSnake->x == current->x && pSnake->y == current->y)
        {
            return 0;
        }
        current = current->next;
    }
    return 1;
}
