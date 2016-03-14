#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

char a[1001][30],b[1001][30],str[30],str1[30];
int i,j,k,l,m,n,p=0,cas;

int main()
{

 scanf("%d",&cas);

for(l=0;l<cas;l++)
{
 map<string,int>mp;
 scanf("%d",&m);

 for(i=0;i<m;i++)
 {
  scanf("%s",a[i]);
  strcpy(b[i],a[i]);
  sort(b[i],b[i]+strlen(b[i]));
  mp[b[i]]=1;
 }
 if(p!=0)
  printf("\n");
  p=1;


 while(scanf("%s",str)==1)
 {
  if(strcmp(str,"END")==0)
   break;
 strcpy(str1,str);
  sort(str1,str1+strlen(str1));

  if(mp[str1]==0)
  {
   printf("Anagrams for: %s\n",str);
   printf("No anagrams for: %s\n",str);
   continue;
  }

printf("Anagrams for: %s\n",str);
 k=1;
  for(i=0;i<m;i++)
  {
   if(strcmp(str1,b[i])==0)
   {
    printf("%3d) %s\n",k,a[i]);
    k++;
   }


  }
 }


}


 return 0;
}
