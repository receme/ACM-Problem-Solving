#include<stdio.h>
#include<string.h>

double sum,a;
char str[20];
int i,j,t,n,m,cas;
int main()
{
 scanf("%d",&cas);

 for(t=0;t<cas;t++)
 {
    sum=0;
    for(i=0;i<12;i++)
    {
      scanf("%lf",&a);
      sum=sum+a;
    }

sum=sum/12.0;
sprintf(str,"%.2lf",sum);
//printf("\n%.2lf\n\n",sum);
//printf("%s\n\n",str);

n=strlen(str);



m=n-3;
printf("%d $",t+1);

for(i=0;i<m;i++)
{
  if((m-i)%3==0&&m>3)
   printf(",");
  printf("%c",str[i]);

}
printf("%c%c%c",str[n-3],str[n-2],str[n-1]);
printf("\n");
  // printf("%d $%.2lf")
 }


return 0;
}
