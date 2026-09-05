#include <reg52.h>   // 51单片机寄存器定义头文件

sbit LED = P2^0;     // 给 P2.0 引脚起名叫 LED（对应板上的 D1 灯）

void Delay_ms(unsigned int ms)   // 延时函数：输入几就大约延时几毫秒
{
    unsigned int i, j;
    for(i = ms; i > 0; i--)
        for(j = 114; j > 0; j--);
}

void main(void)      // 主函数，程序从这里开始
{
    while(1)         // 死循环：单片机程序要一直循环不能结束
    {
        LED = 0;     // P2.0 输出低电平 → 灯亮
        Delay_ms(500);
        LED = 1;     // P2.0 输出高电平 → 灯灭
        Delay_ms(500);
    }
}