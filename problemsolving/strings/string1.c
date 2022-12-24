#include <stdio.h>
#include<string.h>
int main(){
    int flag  = 0;
    char m[20];
    char n[20];
    gets(m);
    gets(n);
    int i = 0;
    while(m[i]!='\0'  && n[i]!= '\0')
    {
     if(m[i]==n[i])
     i++;
     else{
        flag = 1;
        break;
     }
    }
    if(flag == 1)
    {
        printf("unequal");
    }
    else
    {
        printf("equal");
    }
 return 0;
}