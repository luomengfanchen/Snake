#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "..\Header\snake.h"


int food_x=0;
int food_y=0;

/*
功能：生成食物
参数1：食物的x坐标的地址
参数2：食物的y坐标的地址
*/
void createfood(int *fx,int *fy)
{
    srand(time(NULL));
    *fx=rand()%19;
    *fy=rand()%19;
}

/*
功能：测试食物生成的坐标是否与蛇座标以及地图边界重合
返回值：不重合返回1，重合返回0
参数1：食物的x坐标
参数2：食物的y坐标
参数3：蛇头（链表头）的地址
*/
int testfood(int fx,int fy,Snake *pSnake)
{
    if(fx ==0 || fy ==0)
    {
        return 0;
    }

    while(pSnake!=NULL)
    {
        if((fx == pSnake->x) && (fy == pSnake->y))
        {
            return 0;
        }
        pSnake=pSnake->next;
    }
    return 1;
}
