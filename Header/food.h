/**
 * @file food.h
 * @author Miracle
 * @brief 食物相关函数声明
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef FOOD_H
#define FOOD_H

extern int food_x;
extern int food_y;

/**
 * @brief 生成食物
 * @return None
 * @param 食物的x坐标的地址
 * @param 食物的y坐标的地址
*/
void createfood(int *fx, int *fy);

/**
 * @brief 测试食物生成的坐标是否与蛇座标以及地图边界重合
 * @return 不重合返回1，重合返回0
 * @param 食物的x坐标
 * @param 食物的y坐标
 * @param 蛇头（链表头）的地址
*/
int testfood(int x, int y, Snake *pSnake);
#endif
