
char map[20][40]={' '};
//初始化地图，将四周边界赋值
void initmap()
{
     for(int i=0;i<20;i++)
     {
          for(int j=0;j<40;j++)
          {
               if(i==0)
               {
                    map[i][j]='#';
               }
               if(i==19)
               {
                    map[i][j]='#';
               }
               if(j==0 || j==39)
               {
                    map[i][j]='#';
               }
          }
     }
}
//清空地图数据
void clearmap()
{
     for(int i=0;i<20;i++)
     {
          for(int j=0;j<40;j++)
          {
               map[i][j]=' ';
          }
     }
}
