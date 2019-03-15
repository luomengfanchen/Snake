//实现时间延迟
#include<time.h>

/*
功能：时间的延迟
参数：时间单位为毫秒
*/
void Delay(int time)
{
    clock_t now=clock();
    while(clock()-now<time);
}
