#include "..\Header\map.h"
#include "..\Header\snake.h"
#include "..\Header\food.h"
#include <stdio.h>


//将地图和蛇体在终端显示
void show(int fx,int fy,Snake *pSnake,char (*pmap)[40])
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
          for(int j=0;j<40;j++)
          {
               printf("%c",pmap[i][j]);
          }
          printf("\n");
     }
}
