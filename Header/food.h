#ifndef FOOD_H
#define FOOD_H

extern int food_x;
extern int food_y;

void createfood(int *fx,int *fy);//生成食物

int testfood(int x,int y,Snake *pSnake);//测试食物生成的坐标是否与蛇座标以及地图边界重合

#endif
