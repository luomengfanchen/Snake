/**
 * @file menu.h
 * @author Miracle
 * @brief 菜单相关函数声明
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef MENU_H
#define MENU_H

/**
 * @brief 显示开始菜单
 * @return None
 * @param 为0表明进行游戏,为1表示退出
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
 * @param：None
*/
void exitmenu();

#endif