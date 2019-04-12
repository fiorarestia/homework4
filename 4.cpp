#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int day,h,h2,min,s,ss,min2,s2; 
printf("請輸入秒數:"); 
scanf("%d",&ss); 
s = ss % 60; 
s2 = ss / 60; 
min = s2 % 60; 
min2 = s2 / 60; 
h = min2 % 24; 
h2 = min2 / 24; 
day = h2 % 24; 
printf("%02d天%02d時%02d分%02d秒\n",day,h,min,s);
system("pause"); 
}
