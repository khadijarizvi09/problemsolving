#include <stdio.h>
#include<string.h>
int main()
{
    int flag = 0;
  char name[20];
  gets(name);
  printf("%s\n",name); //puts(name);
  int i =0;
  while(name[i] != '\0'){
    i = i+1;
  }
  printf("%d\n",i);
int t;
 i = i-1;
int j = 0;
while(j<i)
{
  t = name[i]  ;
  name[i] = name[j];
  name[j] = t;
  j++;
  i--;
}
printf("%s\n" , name);
while(i<j)
{
    if(name[j]!=name[i])
    {
        flag = 1;
        break;
    }
    j++ ;
    i--;
}
if(flag ==1)
printf("not a palindrom");
else
printf("palindrom");
 return 0;
}