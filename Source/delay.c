/**
 * @file delay.c
 * @author Miracle
 * @brief 延时函数定义
 * @version 2.0
 * @date 2020-02-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <time.h>

/**
 * @brief 实现时间的延迟
 * @return None
 * @param [in] time 时间单位为毫秒
 */
void Delay(int time)
{
    clock_t now = clock();
    while (clock() - now < time)
        ;
}
