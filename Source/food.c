#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "..\Header\snake.h"


int food_x=0;
int food_y=0;

void createfood(int *fx,int *fy)//生成食物
{
     srand(time(NULL));
     *fx=rand()%19;
     *fy=rand()%39;

}

int testfood(int fx,int fy,Snake *pSnake)//测试食物生成的坐标是否与蛇座标以及地图边界重合
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
