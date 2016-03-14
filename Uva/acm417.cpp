#include<stdio.h>
#include<map>
#include<iostream>
#include<string.h>
using namespace std;
char a[10],b[10],c[10],d[10],e[10],f[10];
int i,j,k,l,m,co;
map<string,int>mp;

int main()
{
  co=1;

  for(i=0;i<26;i++)
  {
   b[0]=i+'a';
   mp[b]=co;
   co++;
  }

//////////////////////////////

  for(i=0;i<26;i++)
  { memset(a,0,10);
    c[0]=i+'a';
    strcat(a,c);
   for(j=i+1;j<26;j++)
   {
     strcpy(b,a);
     c[0]=j+'a';
     strcat(b,c);
     mp[b]=co;
     co++;
   }
  }

//////////////////////////////////

for(i=0;i<26;i++)
 {
  memset(a,0,10);
  c[0]=i+'a';
  strcat(a,c);

  for(j=i+1;j<26;j++)
  {
   strcpy(b,a);
   c[0]=j+'a';
   strcat(b,c);



  for(k=j+1;k<26;k++)
  {

   strcpy(d,b);
   c[0]=k+'a';
   strcat(d,c);
   mp[d]=co;
   co++;
  }

  }
}

///////////////////////////////

for(i=0;i<26;i++)
{
 memset(a,0,10);
 c[0]=i+'a';
 strcat(a,c);

 for(j=i+1;j<26;j++)
 {
    strcpy(b,a);
   c[0]=j+'a';
   strcat(b,c);


  for(k=j+1;k<26;k++)
  {
   strcpy(d,b);
   c[0]=k+'a';
   strcat(d,c);
    for(l=k+1;l<26;l++)
    {
      strcpy(e,d);
     c[0]=l+'a';
     strcat(e,c);
     mp[e]=co;
     co++;
    }

  }
 }


}

//////////////////////

for(i=0;i<26;i++)
{
  memset(a,0,10);
  c[0]=i+'a';
  strcat(a,c);

  for(j=i+1;j<26;j++)
  {
    strcpy(b,a);
    c[0]=j+'a';
    strcat(b,c);

    for(k=j+1;k<26;k++)
    {
      strcpy(d,b);
    c[0]=k+'a';
    strcat(d,c);

      for(l=k+1;l<26;l++)
      {
       strcpy(e,d);
       c[0]=l+'a';
       strcat(e,c);

        for(m=l+1;m<26;m++)
        {
          strcpy(f,e);
          c[0]=m+'a';
          strcat(f,c);
          mp[f]=co;
          co++;

        }
      }
    }
  }
}

while(scanf("%s",a)==1)
{
 if(mp[a]==0)
  printf("0\n");
 else
  printf("%d\n",mp[a]);


}

return 0;
}
