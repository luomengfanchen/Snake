# 贪吃蛇游戏


## Introduce
一个简单的贪吃蛇游戏    
使用了链表保存蛇体数据  
拥有一个简单的开始菜单


## 全局变量
```C

int food_x = 0;              // 保存食物的x坐标

int food_y = 0;              // 保存食物的y坐标

char map[20][20];            // 保存地图数据


typedef struct snake         // 保存蛇体数据的链表结构体
{
    int x;
    int y;
    struct snake *next;
}Snake;


int length = 3;              // 蛇长

Snake head;                  // 保存蛇头（链表头）数据
```

## 函数声明列表


---
### delay.h
```C
/*
    TODO 功能：时间的延迟
    ? 参数：时间单位为毫秒
*/
void Delay(int time);
```


---
### display.h
```C
/*
    TODO 功能：将地图和蛇体以及食物在终端显示
    ? 参数1：食物的x坐标
    ? 参数2：食物的y坐标
    ? 参数3：蛇头（链表头）的地址
    ? 参数4：二维数组的地址
*/
void show(int fx,int fy,Snake *pSnake,char (*pmap)[20]);
```


---
### food.h
```C
/*
    TODO 功能：生成食物
    ? 参数1：食物的x坐标的地址
    ? 参数2：食物的y坐标的地址
*/
void createfood(int *fx,int *fy);

/*
    TODO 功能：测试食物生成的坐标是否与蛇座标以及地图边界重合
    ! 返回值：不重合返回1，重合返回0
    ? 参数1：食物的x坐标
    ? 参数2：食物的y坐标
    ? 参数3：蛇头（链表头）的地址
*/
int testfood(int x,int y,Snake *pSnake);

```


---
### game.h
```C
/*
    TODO 功能：游玩游戏
*/
void game();

/*
    TODO 功能:显示游戏结束菜单
*/
void gameover();
```


---
### map.h
```C
/*
    TODO 功能：初始化地图，将四周边界赋值
    ? 参数：传入二伟数组地址
*/
void initmap(char (*pmap)[20]);

/*
    TODO 功能：清空地图数据
    ? 参数：传入二伟数组地址
*/
void clearmap(char (*pmap)[20]);
```


---
### menu.h
```C
/*
    TODO 功能：显示开始菜单
    ? 返回值：为0表明进行游戏,为1表示退出
*/
int menu();

/*
    TODO 功能：显示帮助菜单
*/
void helpmenu();

/*
	TODO 功能：显示退出菜单
*/
void exitmanu();
```


---
### snake.h
```C
/*
     TODO 功能：初始化蛇，生成一个蛇头，和两个蛇身
     ? 参数：传入蛇头的地址
*/
void initsnake(Snake *pSnake);

/*
     TODO 功能：添加蛇身
     ? 参数：传入蛇头的地址
*/
void addsnake(Snake *pSnake);

/*
     TODO 功能：更新蛇坐标
     ? 参数1：传入蛇头的地址
     ? 参数2：按下的键位
*/
void updatesnake(Snake *pSnake,int key);

/*
     TODO 功能：释放链表
     ? 参数：传入蛇头的地址
*/
void release(Snake *pSnake);

/*
     TODO 功能：检查蛇头是否碰撞
     ! 返回值:碰撞返回0，不碰撞返回1
     ?参数1：传入蛇头地址
     ?参数2：传入二维数组地址
*/
int testcollide(Snake *pSnake);
```


