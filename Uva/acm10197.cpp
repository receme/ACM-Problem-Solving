#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

char a[50],b[50],c[10],d[10],ch;
int i,m,n;

int main()
{
 ch=243;
  m=0;
 while(scanf("%s\n",a)==1)
 {
     gets(b);

    if(m!=0)
     printf("\n");
    m++;

    printf("%s (to %s)\n",a,b);
    n=strlen(a);

    if(!((a[n-2]=='a'||a[n-2]=='e'||a[n-2]=='i')&&a[n-1]=='r')){
      printf("Unknown conjugation\n");
      continue; }

    memset(b,0,50);

    for(i=0;i<n-2;i++)
     b[i]=a[i];

    if(a[n-2]=='a')
    {
    cout<<"eu        "<<b<<"o"<<endl;
    cout<<"tu        "<<b<<"as"<<endl;
    cout<<"ele/ela   "<<b<<"a"<<endl;
    cout<<"n"<<ch<<"s       "<<b<<"amos"<<endl;
    cout<<"v"<<ch<<"s       "<<b<<"ais"<<endl;
    cout<<"eles/elas "<<b<<"am"<<endl;
    }
    else if(a[n-2]=='e')
    {
    cout<<"eu        "<<b<<"o"<<endl;
    cout<<"tu        "<<b<<"es"<<endl;
    cout<<"ele/ela   "<<b<<"e"<<endl;
    cout<<"n"<<ch<<"s       "<<b<<"emos"<<endl;
    cout<<"v"<<ch<<"s       "<<b<<"eis"<<endl;
    cout<<"eles/elas "<<b<<"em"<<endl;
    }
    else
    {
    cout<<"eu        "<<b<<"o"<<endl;
    cout<<"tu        "<<b<<"es"<<endl;
    cout<<"ele/ela   "<<b<<"e"<<endl;
    cout<<"n"<<ch<<"s       "<<b<<"imos"<<endl;
    cout<<"v"<<ch<<"s       "<<b<<"is"<<endl;
    cout<<"eles/elas "<<b<<"em"<<endl;
    }



 }

return 0;
}
