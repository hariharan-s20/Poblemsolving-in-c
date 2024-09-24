#include <stdio.h>

int main()
{
   int num,fact,rem,i,copy,sum=0;
   scanf("%d",&num);
   copy=num;
   while(num>0)
   {
       rem=num%10;
       fact=1;
       for(i=rem;i>=1;i--)
       {
           fact=fact*i;
            
       }
      sum=sum+fact;
       num=num/10;
       
   }
   printf("%d \n",sum);
   if(sum==copy)
   {
       printf("strong number");
       
   }
   else
   {
       printf("not a strong number");
   }
}
