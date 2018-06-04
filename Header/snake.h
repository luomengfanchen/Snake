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
extern Snake head;

/*
     函数声明
*/
void initsnake(Snake *pSnake);//初始化蛇，生成一个蛇头，和两个蛇身
void addsnake(Snake *pSnake);//添加蛇身
void updatesnake(Snake *pSnake,int key);//更新蛇坐标
void release(Snake *pSnake);//释放链表



#endif
