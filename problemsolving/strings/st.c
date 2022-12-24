#include <stdio.h>
#include <string.h>
int  main()
{
  char s[10];
  gets(s);
  puts(s);
  int flag = 0 ;
  if(s[0] == '_' ||(s[0] >='A' && s[0] <= 'Z' ) || (s[0] >='a' && s[0]<='z')  )
  {
   int i = 1;
   while(s[i]<='\0')
   {
    if(s[i] == '_' ||(s[i] >='A' && s[i] <= 'Z' ) || (s[i] >='a' && s[i]<='z')|| (s[i]>=0 && s[i]<=0 )||s[i]=='$')
    {
        i++;
    printf("valid");
    }
  

  
  else{
        flag = 1;
        break;
    }
   }
   if(flag ==1)
   {
    printf("invalid");
   }
   else{
    printf("valid");
   }
  
  
  }
  else
    printf("invalid");
  

return 0;
}
