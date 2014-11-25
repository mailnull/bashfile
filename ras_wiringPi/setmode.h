/*************************************************************************
	> File Name: setmode.h
	> Author: 
	> Mail:67731164@qq.com 
	> Created Time: 2014年11月25日 星期二 16时11分57秒
 ************************************************************************/
#include<wiringPi.h>
#include<string.h>
#ifndef _SETMODE_H
#define _SETMODE_H
#endif
int pinout(int n)
{
    wiringPiSetup();
    pinMode(n,OUTPUT);
    return 0;
}
int pinin(int n)
{
    wiringPiSetup();
    pinMode(n,INPUT);
    return 0;
}
int pincon(int n,int con)
{
    digitalWrite(n,con);
    return 0;
}
