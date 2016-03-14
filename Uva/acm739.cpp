#include<stdio.h>
#include<map>
#include<string.h>
using namespace std;

char a[100],str[100],ch;
int i,j,k,l,m,n;

int main()
{


  map<char,int>mp;

  mp['B']=mp['P']=mp['F']=mp['V']=1;
  mp['C']=mp['S']=mp['K']=mp['G']=mp['J']=mp['Q']=mp['X']=mp['Z']=2;
  mp['D']=mp['T']=3;
  mp['L']=4;
  mp['M']=mp['N']=5;
  mp['R']=6;

 printf("         NAME                     SOUNDEX CODE\n");

  while(scanf("%s",str)==1)
  {

    n=strlen(str);
    ch=str[0];
    a[0]=ch;
    j=1;
    for(i=1;i<n;i++)
    {
     if(str[i]==ch)
     {
      continue;
     }
     else{
       a[j]=str[i];
       j++;
       ch=str[i];
     }
    }

    map<int,int>mp1;
    k=j;
    i=0;
    char b[100];
    for(j=0;j<k;j++)
    {
      if(j==0)
      {
       b[i]=a[j];
       i++;

      }
      else if(mp[a[j]]!=0&&mp[a[j]]!=mp[a[j-1]])
      {
        b[i]=mp[a[j]]+48;
        i++;

      }
      if(i==4)
       break;
    }

    for(j=i;j<4;j++)
      b[j]='0';

 b[j]='\0';


 printf("         %s",str);
 for(j=0;j<25-n;j++)
  printf(" ");
 printf("%s\n",b);



  }

  printf("                   END OF OUTPUT\n");

return 0;
}
