/**
 * @file map.h
 * @author Miracle
 * @brief 地图相关函数声明
 * @version 2.0
 * @date 2020-02-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef MAP_H
#define MAP_H

extern char map[20][20];

/**
 * @brief 初始化地图，将四周边界赋值
 * @return None
 * @param [out] pmap 传入二伟数组地址
*/
void initmap(char (*pmap)[20]);

/**
 * @brief 清空地图数据
 * @return None
 * @param [out] pmap 传入二伟数组地址
*/
void clearmap(char (*pmap)[20]);

#endif
