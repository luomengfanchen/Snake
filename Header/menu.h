/**
 * @file menu.h
 * @author Miracle
 * @brief 菜单相关函数声明
 * @version 2.0
 * @date 2020-02-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef MENU_H
#define MENU_H

/**
 * @brief 显示开始菜单
 * @return 返回是否进行游戏
 * @retval 0 表市进行游戏
 * @retval 1 表式进行游戏
 * @param None
*/
int menu();

/**
 * @brief 显示帮助菜单
 * @return None
 * @param None
*/
void helpmenu();

/**
 * @brief 显示退出菜单
 * @return None
 * @param None
*/
void exitmenu();

#endif