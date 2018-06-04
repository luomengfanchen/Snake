#ifndef MAP_H
#define MAP_H


extern char map[20][40];

void initmap(char (*pmap)[40]);//初始化地图，将四周边界赋值
void clearmap(char (*pmap)[40]);//清空地图数据

#endif
