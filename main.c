#include <stdio.h>
#include <stdlib.h>
int main(){
   char str[1000];
   int even=0;                                   
   int odd=0;
   int i=0;
   while(gets(str)&&(str[0]!='0'))
   {
     while(str[i]!=NULL)
     {
       if(i%2==0)
       {
         even=even+(str[i]-'0');
       }
       else
       {
         odd=odd+(str[i]-'0');
       }
       i++;
     }
     if((even-odd)%11==0)
     {
      printf("%s is a multiple of 11.\n",str);
     }
     else
     {
      printf("%s is not a multiple of 11.\n",str);
     }
     i=0;
     even=0;
     odd=0;
   }



return 0;
}
