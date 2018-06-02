#include <stdlib.h>
#include <time.h>
#include "..\Header\snake.h"


int food_x=0;
int food_y=0;

void createfood()
{
     srand(time(NULL));
     food_x=rand()%20;
     food_y=rand()%40;

}

int testfood(int x,int y,Snake *current)
{

     if(x ==0 || x == 20 || y ==0 || y == 40)
     {
          return 0;
     }

     while(current!=NULL)
     {
          if(x == current->x && y == current->y)
          {
               return 0;
          }
          current=current->next;
     }

     return 1;
}
