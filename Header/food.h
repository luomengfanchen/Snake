#ifndef FOOD_H
#define FOOD_H

extern int food_x;
extern int food_y;

/*
功能：生成食物
参数1：食物的x坐标的地址
参数2：食物的y坐标的地址
*/
void createfood(int *fx,int *fy);

/*
功能：测试食物生成的坐标是否与蛇座标以及地图边界重合
返回值：不重合返回1，重合返回0
参数1：食物的x坐标
参数2：食物的y坐标
参数3：蛇头（链表头）的地址
*/
int testfood(int x,int y,Snake *pSnake);
#endif
