/**
 * @file map.c
 * @author Miracle
 * @brief 地图相关函数定义
 * @version 2.0
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

char map[20][20] = {' '};

/**
 * @brief 初始化地图，将四周边界赋值
 * @return None
 * @param 传入二伟数组地址
*/
void initmap(char (*pmap)[20])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (i == 0 || i == 19)
            {
                pmap[i][j] = '#';
            }
            if (j == 0 || j == 19)
            {
                pmap[i][j] = '#';
            }
        }
    }
}

/**
 * @brief 清空地图数据
 * @return None
 * @param 传入二伟数组地址
*/
void clearmap(char (*pmap)[20])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            pmap[i][j] = ' ';
        }
    }
}
