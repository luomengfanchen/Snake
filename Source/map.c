

char map[20][40]={' '};

//初始化地图，将四周边界赋值
void initmap(char (*pmap)[40])
{
     for(int i=0;i<20;i++)
     {
          for(int j=0;j<40;j++)
          {
               if(i==0)
               {
                    pmap[i][j]='#';
               }
               if(i==19)
               {
                    pmap[i][j]='#';
               }
               if(j==0 || j==39)
               {
                    pmap[i][j]='#';
               }
          }
     }
}
//清空地图数据
void clearmap(char (*pmap)[40])
{
     for(int i=0;i<20;i++)
     {
          for(int j=0;j<40;j++)
          {
               pmap[i][j]=' ';
          }
     }
}
