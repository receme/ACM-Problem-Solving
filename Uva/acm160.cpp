#include<stdio.h>
#include<math.h>

int prime[10000]={0};
void gen()
   {
        long i=0,j=0,chk=1,index=3;
        prime[0]=1;
        prime[1]=2;
        prime[2]=3;
      for(j=5;j<=10000;j++)
         {
         for(i=1;prime[i]<=sqrt(j);i++)
            {
               chk=j%prime[i];
               if(chk==0)
               break;

            }
               if(chk)
                  prime[index++]=j;
         }
  }

int main()
{
   int i,k,p,j,w;
   int fact,sum=0,count=0;
   gen();
   while(scanf("%d",&fact)&&fact!=0)
   {
      
      count=0;
      printf("%3d! =",fact);
      for(i=1;prime[i]<=fact;i++)
      {
         sum=0;
         for(j=1;j<10000;j++)   
         {   
            p=pow(prime[i],j);
            if(p>fact)break;
            else
            {
               sum+=floor(fact/p);
            }
         }
         if(count>=15)
         {
            printf("\n");
            printf("      ");   
            count=0;
         }
         printf("%3d",sum);
         count++;
      }
    
      printf("\n");
   }
   
return 0;
}
