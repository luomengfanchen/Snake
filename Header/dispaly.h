/**
 * @file dispaly.h
 * @author Miralce
 * @brief 显示函数声明
 * @version 2.0
 * @date 2020-02-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef DISPLAY_H
#define DISPALY_H

/**
 * @brief 将地图和蛇体以及食物在终端显示
 * @return None
 * @param [in] fx 食物的x坐标
 * @param [in] fy 食物的y坐标
 * @param [in] pSnake 蛇头（链表头）的地址
 * @param [in] pmap 二维数组的地址
*/
void show(int fx, int fy, Snake *pSnake, char (*pmap)[20]);

#endif
