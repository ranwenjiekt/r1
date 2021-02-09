#include <stdio.h>

// 计算袜子价格
void main()
{
   int number,price; // 数量 价格
   scanf("%d%d",&number,&price);
   int total=number*price;
  
   printf("input character a and b: %d,%d,%d\n",total,4<<2,4>>1);

}
