#include<stdio.h>
int main()
{
    FILE *fp;
    int n;
    fp = fopen("inp.txt","r");
    if(fp == NULL)
    {
        printf("Couldn't open file\n");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        fscanf(fp,"%d",&n);
        printf("%d\n",n);
    }
}
