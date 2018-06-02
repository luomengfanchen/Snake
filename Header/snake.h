#ifndef SNAKE_H
#define SNAKE_H

typedef struct snake
{
     int x;
     int y;
     struct snake *next;
}Snake;

/*
     变量声明
*/
extern Snake *head;
extern Snake *current;
extern Snake *previous;
/*
     函数声明
*/
void initsnake();//初始化蛇，生成一个蛇头，和两个蛇身
int testeat();//检测是否吃到食物
void addsnake();//添加蛇身
void updatesnake();//更新蛇坐标
void release();//释放链表

#endif
