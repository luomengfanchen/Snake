#include <stdlib.h>
#include "..\Header\snake.h"
#include "..\Header\food.h"
Snake *head=NULL;
Snake *current=NULL;
//初始化蛇，生成一个蛇头，和两个蛇身
void initsnake()
{
     head=(Snake *)malloc(sizeof(Snake));
     head->x=4;
     head->y=2;
     current=(Snake *)malloc(sizeof(Snake));
     current->x=3;
     current->y=2;
     head->next=current;
     current->next=(Snake *)malloc(sizeof(Snake));
     current=current->next;
     current->x=2;
     current->y=2;
     current->next=NULL;
}

//更新蛇坐标
void updatesnake(int key)
{
     int prev_x=head->x;//保存上一个节点坐标
     int prev_y=head->y;

     int cur_x=0;//保存本节点坐标
     int cur_y=0;

     switch(key)//更新蛇头坐标
     {
          case 115://s
               head->x=head->x+1;
               break;
          case 119://w
               head->x=head->x-1;
               break;
          case 97://a
               head->y=head->y-1;
               break;
          case 100://d
               head->y=head->y+1;
               break;
          default:
               ;
     }

     current=head->next;

     while(current != NULL)//更新蛇身坐标
     {
          cur_x=current->x;
          cur_y=current->y;

          current->x=prev_x;
          current->y=prev_y;

          prev_x=cur_x;
          prev_y=cur_y;

          current=current->next;
     }

}

//检测是否吃到食物
int testeat()
{
     if((head->x != food_x) && (head->y != food_y))
     {
          return 0;
     }
     return 1;
}

//添加蛇身
void addsnake()
{

     Snake *AdditionSnake;
     AdditionSnake=(Snake *)malloc(sizeof(Snake));

     current=head;
     while(current->next != NULL)
     {
          current=current->next;
     }

     current->next=AdditionSnake;
     AdditionSnake->next=NULL;


}

//释放链表
void release()
{
     Snake *temp=NULL;
     current=head;
     while(current != NULL)
     {
          temp=current->next;
          free(current);
          current=temp;
     }

}
