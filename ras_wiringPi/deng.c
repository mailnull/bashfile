/*************************************************************************
	> File Name: deng.c
	> Author: 
	> Mail: 
	> Created Time: 2014年11月25日 星期二 17时00分43秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"setmode.h"

int main(int argc,char *argv[])
{
    int pin,pinc;
    if (argc==1){
        printf("Error!Enter the pin and value!\n");
        printf("useage:%s value value\n",argv[0]);
        return -1;
    }
    pin=atoi(argv[1]);
    pinc=atoi(argv[2]);
    pinout(pin);
    pincon(pin,pinc);
    return 0;
}
