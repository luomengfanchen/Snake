#include "..\Header\map.h"
#include "..\Header\snake.h"
#include "..\Header\food.h"
#include <stdio.h>


/*
功能：将地图和蛇体以及食物在终端显示
参数1：食物的x坐标
参数2：食物的y坐标
参数3：蛇头（链表头）的地址
参数4：二维数组的地址
*/
void show(int fx,int fy,Snake *pSnake,char (*pmap)[20])
{
    map[fx][fy]='$';

    map[pSnake->x][pSnake->y]='@';
    pSnake=pSnake->next;
    while(pSnake != NULL)
    {
        map[pSnake->x][pSnake->y]='*';
        pSnake=pSnake->next;
    }

    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            printf("%c ",pmap[i][j]);
        }
        printf("\n");
    }
}
