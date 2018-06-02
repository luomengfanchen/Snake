#include "..\Header\map.h"
#include "..\Header\snake.h"
#include "..\Header\food.h"
#include <stdio.h>


//将地图和蛇体在终端显示
void show()
{
     map[food_x][food_y]='$';

     map[head->x][head->y]='@';
     current=head->next;
     while(current != NULL)
     {
          map[current->x][current->y]='*';
          current=current->next;
     }

     for(int i=0;i<20;i++)
     {
          for(int j=0;j<40;j++)
          {
               printf("%c",map[i][j]);
          }
          printf("\n");
     }
}
