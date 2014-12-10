/*************************************************************************
	> File Name: dearry.c
	> Author: 
	> Mail: 
	> Created Time: 2014年12月10日 星期三 12时28分32秒
 ************************************************************************/

#include<stdio.h>
#define MAX 200
#define MAXdecode 100
#define Qian_st   34
#define Qian_ed   50
#define hou_st    67
#define hou_ed    83
#define ONE     2240
#define ZERO    1120
FILE *fp;
int a[200]={0},b[200]={0};
int i,j,k,n;
unsigned int   m=0,h=0;
char mm=0,hh=0;
int qian[8]={0},hou[8]={0};
int main(int argc,char *argv[]){
    //fp=fopen("/root/rasdecode/30.csv","r");
   // printf("%s\n",argv[1]);
    if(argc<3){
        printf("miss argvs..................................\n");
        printf("Usege:%s file type\n");
        return -1;
    }
    fp=fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("NO file \n");
        return -1;
    }
    for(i=0;i<200;i++)
    {
        fscanf(fp,"%d",&a[i]);
     //   printf("%d\n",a[i]);
    }
    fclose(fp);
   // printf("This the \n\n\n");
    for(i=0;i<MAXdecode;i++)
    {
        if(a[i]>4000 && a[i]<4800)
            b[i]=4500;
        else if(a[i]>1200 && a[i]<1700)
            b[i]=1680;
        else if(a[i]>5000)
            b[i]=5100;
        else
            b[i]=560;
       // printf("%d        %d             %d\n",i,a[i],b[i]);
    }
     for(k=34;k<49;k=k+2){
        n=b[k]+b[k+1];
         i=0;
         if(n==1120)
             qian[i]=0;
        else if(n==2240)
            qian[i]=1;
        m+=qian[i];
        m=m<<1;
        //printf("%d   %d    %d \n",qian[i],n,m);
        i++;
                                
    }
     for(k=66;k<81;k+=2)
    {
        n=b[k]+b[k+1];
        i=0;
        if(n==1120)
            hou[i]=0;
        else if(n==2240)
            hou[i]=1;
        h+=hou[i];
        h=h<<1;
        i++;
        
    }
    m=m>>1;
    mm=~m;
    h=h>>1;
    hh=~h;
    //printf("0x");
    //printf("%X%X",m,mm);
    //printf("%X%X\n",h,hh);
    int code=0;
    code+=m;
    code=code<<8;
    code+=mm;
    code=code<<8;
    code+=h;
    code=code<<8;
    code+=hh;
    printf("%s    ",argv[2]);
    printf("%#X\n",code);
    return 0;
}

