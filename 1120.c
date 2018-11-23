#include<stdio.h>
#include<stdlib.h>
unsigned char shumaguan[][11]={"0xc0","0xf9","0xa4","0xb0","0x99","0x92","0x82","0xf8","0x80","0x90","0xbf"};
void set_SMG_Display(char N[8])
{
    char i;
    int x;
    for(i=0;i<8;i++)
    {
       if(N[i]=='-')
       {
         printf("%s",shumaguan[10]);
        }
       else
       {
         x=N[i]-'0';
         printf("%s",shumaguan[x]);
       }
    }
}

int main()
{
    char N[8];
    scanf("%s",N);
    set_SMG_Display(N);
    return 0;
}
