#include <stdio.h>
#include <windows.h>

int main(){
int h,m,s;
int d=6000;//this is gonna be delay
printf("Set time: \n");
scanf("%d%d%d",&h,&m,&s);
if(h>12||m>60||s>60){
    printf("You've provided incorect data!\n");
    exit(0);
}
while(1){
    s++;
    if(s>59){
        m++;
        s=0;
    }
    if(m>59){
        h++;
        m=0;
    }
    if(h>12){
       h=1;
    }
    printf("Clock: \n");
    printf("%.2d:%.2d:%.2d",h,m,s);
    Sleep(d);
    system("cls");
}
}
