#ifndef MAP_H
#define MAP_H


extern char map[20][20];

/*
功能：初始化地图，将四周边界赋值
参数：传入二伟数组地址
*/
void initmap(char (*pmap)[20]);

/*
功能：清空地图数据
参数：传入二伟数组地址
*/
void clearmap(char (*pmap)[20]);

#endif
