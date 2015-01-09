/*************************************************************************
	> File Name: decode.c
	> Author: 
	> Mail: 
	> Created Time: 2014年12月10日 星期三 21时24分40秒
 ************************************************************************/

#include<stdio.h>


FILE *fp;

int main(int argc ,char *argv[])
{
    float raw[200]={0};
    float midcode;
    int  i,j,k,m,n;
    int code[200]={0};
    

    fp=fopen(argv[1],"r");
    if((fp==NULL))
    {
        printf("NO FILE\n");
        return -1;
    }

    for(i=0;i<200;i++)
    {
        fscanf(fp,"%f",&raw[i]);
        //midcode=(raw[i+1]-raw[i])*1000;
        //printf("%f   ",midcode);
        //j=(unsigned)(int)midcode;
        //code[i]=j;
        //printf("%f\n",raw[i]);
    }
    //printf("........................................\n");
    k=0;
    for(j=0;j<200;j++)
    {
    
        midcode=(raw[j+1]-raw[j])*1000*1000;
        code[k]=(unsigned)(int)midcode;
       // printf("%d   ",k);
        printf("%u\n",code[k]);
    
        k++;
        
    }
    return 0;
}
