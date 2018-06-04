#ifndef DISPLAY_H
#define DISPALY_H

/*
     功能：将地图和蛇体以及食物在终端显示
     参数1：食物的x坐标
     参数2：食物的y坐标
     参数3：蛇头（链表头）的地址
     参数4：二维数组的地址
*/
void show(int fx,int fy,Snake *pSnake,char (*pmap)[20]);

#endif
