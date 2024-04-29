/* repaet.c */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int i;
    int s=0;
    for(i=1;i<10;i++){
        s=s+i;
        printf("%d\t%d\n",i,s);
    }
    return 0;
}
