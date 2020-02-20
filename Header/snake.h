/**
 * @file snake.h
 * @author Miralce
 * @brief 蛇体操作相关函数声明
 * @version 2.0
 * @date 2020-02-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef SNAKE_H
#define SNAKE_H

/**
 * @brief 保存蛇体数据的结构体
 * @warning 需要使用链表结构
*/
typedef struct snake
{
     int x;
     int y;
     struct snake *next;
} Snake;

extern int length; // 蛇长

extern Snake head; // 保存蛇头（链表头）数据

/**
 * @brief 初始化蛇，生成一个蛇头，和两个蛇身
 * @return None
 * @param [out] pSnake 传入蛇头的地址
*/
void initsnake(Snake *pSnake);

/**
 * @brief 更新蛇坐标
 * @return None
 * @param [out] pSnake 传入蛇头的地址
 * @param [in] key 按下的键位
*/
void updatesnake(Snake *pSnake, int key);

/**
 * @brief 添加蛇身
 * @return None
 * @param [out] pSnake 传入蛇头的地址
*/
void addsnake(Snake *pSnake);

/**
 * @brief 释放链表
 * @return None
 * @param [out] pSnake 传入蛇头的地址
*/
void release(Snake *pSnake);

/**
 * @brief 检查蛇头是否碰撞
 * @return 判断是否碰撞
 * @retval 0 碰撞了
 * @retval 1 没碰撞
 * @param [in] pSnake 传入蛇头地址
*/
int testcollide(Snake *pSnake);

#endif
