#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "..\Header\snake.h"
#include "..\Header\map.h"
#include "..\Header\dispaly.h"
#include "..\Header\delay.h"
#include "..\Header\food.h"


int main()
{
     initmap(map);//初始化地图
     initsnake(&head);//初始化蛇

     createfood(&food_x,&food_y);//生成食物
     while(testfood(food_x,food_y,&head)==0)//检测食物是否与蛇坐标重合
     {
          createfood(&food_x,&food_y);//如果重合生成食物
     }

     int key=115;
     while(1)
     {
          initmap(map);//生成地图边界

          if((head.x == food_x) && (head.y == food_y))//如果蛇头坐标与食物坐标重合
          {
               addsnake(&head);//添加一节蛇身
               createfood(&food_x,&food_y);//生成食物
               while(testfood(food_x,food_y,&head)==0)//检测食物是否与蛇坐标重合
               {
                     createfood(&food_x,&food_y);//如果重合就重新生成食物
               }

          }

          if(_kbhit())//检测键盘敲击
          {
               key=getch();//把键盘相应的ANSCII码赋值给key
          }

          updatesnake(&head,key);//更新蛇坐标

          show(food_x,food_y,&head,map);//将数据在屏幕中显示出来

          Delay(500);//延时500毫秒

          clearmap(map);//清空地图数据

          system("cls");//清空屏幕
     }

     release(&head);//释放
     return 0;
}
