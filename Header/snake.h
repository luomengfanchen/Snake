#ifndef SNAKE_H
#define SNAKE_H

typedef struct snake
{
     int x;
     int y;
     struct snake *next;
}Snake;

extern int length;//蛇长

extern Snake head;//保存蛇头（链表头）数据

/*
功能：初始化蛇，生成一个蛇头，和两个蛇身
参数：传入蛇头的地址
*/
void initsnake(Snake *pSnake);

/*
功能：添加蛇身
参数：传入蛇头的地址
*/
void addsnake(Snake *pSnake);

/*
功能：更新蛇坐标
参数1：传入蛇头的地址
参数2：按下的键位
*/
void updatesnake(Snake *pSnake,int key);

/*
功能：释放链表
参数：传入蛇头的地址
*/
void release(Snake *pSnake);

/*
功能：检查蛇头是否碰撞
返回值:碰撞返回0，不碰撞返回1
参数1：传入蛇头地址
参数2：传入二维数组地址
*/
int testcollide(Snake *pSnake);


#endif
