#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;


int i,m,n;
string str;

int main(){
  map<string,int>mp;
while(scanf("%d",&n)==1)
{
  cin>>str;
  m=str.length();
  if(n>m)
  {
   printf("\n");
   continue;
  }

   mp.clear();



   for(i=0;i<=m-n;++i)
   {

    mp[str.substr(i,n)]++;
   }

  m=0;
  for(map<string,int>::iterator it=mp.begin();it!=mp.end();++it)
  {
    if((*it).second>m){
     m=(*it).second;
     str=(*it).first; }
  }

  cout<<str<<endl;
}

return 0;
}
