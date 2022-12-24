#include <stdio.h>
#include<string.h>
int main()
{
char str1[10];
int k = 0 ;
scanf("%s" , str1);
printf("%s" , str1);
while(str1[k]!='\0'){
    k++;
}
for(int  i = 0; i<k ; i++)
{
    for(int j=0 ; j<=i ; j++){
        printf("%c" , str1[j]);
    }
    printf("\n");
}
return 0;

}