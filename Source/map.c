

char map[20][20]={' '};

/*
功能：初始化地图，将四周边界赋值
参数：传入二伟数组地址
*/
void initmap(char (*pmap)[20])
{
     for(int i=0;i<20;i++)
     {
          for(int j=0;j<20;j++)
          {
               if(i==0 || i==19)
               {
                    pmap[i][j]='#';
               }
               if(j==0 || j==19)
               {
                    pmap[i][j]='#';
               }
          }
     }
}

/*
功能：清空地图数据
参数：传入二维数组地址
*/
void clearmap(char (*pmap)[20])
{
     for(int i=0;i<20;i++)
     {
          for(int j=0;j<20;j++)
          {
               pmap[i][j]=' ';
          }
     }
}
