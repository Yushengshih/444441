#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int x,y,z;
 printf("請輸入你的出生年分(西元)：");
 scanf("%d",&x);
 printf("請輸入你的出生月分：");
 scanf("%d",&y);
 printf("請輸入你的出生日期：");
 scanf("%d",&z);
 printf("你的出生年月日為：%d年%d月%d日\n",x,y,z);
 system("pause");
 return 0; 
}
