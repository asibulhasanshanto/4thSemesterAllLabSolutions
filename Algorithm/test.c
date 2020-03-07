#include<stdio.h>
int main()
{
    int h=1,d=256,i;
     for (i = 0; i <2; i++)
        {
            h = (h*d)%3;
        }
        printf("%d\n",h);
}
