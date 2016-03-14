#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<iostream>
using namespace std;

char str[200][100],str1[200][100],a[100];
int i,j,k,n,l,cas,p,ll;

int main(){

 scanf("%d\n",&cas);

ll=0;
for(l=0;l<cas;l++)
{

 for(i=0;i<101;i++)
  memset(str1[i],0,100);

 if(ll!=0)
  printf("\n");

  ll=1;

 i=0;
 map<string,int>mp;

 while(gets(str[i]))
 {
   if(strcmp(str[i],"")==0)
    break;

   i++;
 }

 for(j=0;j<i;j++)
  for(k=0;k<i-1;k++)
   if(strcmp(str[k],str[k+1])>0)
   {
    strcpy(a,str[k]);
    strcpy(str[k],str[k+1]);
    strcpy(str[k+1],a);
   }






 for(j=0;j<i;j++)
 {
  n=strlen(str[j]);
  k=0;
  for(p=0;p<n;p++)
  {
   if(str[j][p]!=' ')
   {
   str1[j][k]=str[j][p];
   k++;
   }

  }

  sort(str1[j],str1[j]+k);
 mp[str1[j]]=1;

 }

for(j=0;j<i-1;j++)
{
 if(mp[str1[j]]==0)
  continue;

 for(k=j+1;k<i;k++)
 {
  if(strcmp(str1[j],str1[k])==0)
  {
   printf("%s = %s\n",str[j],str[k]);
  }


 }
}

}

return 0;

}




