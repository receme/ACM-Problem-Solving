#include<iostream>
#include<string.h>
#include<map>
using namespace std;

char a[1000],b[1000],s[1000],c[25][1000];
int x,y,i,j,k,m,n;

int main(){

    while(scanf("%d %d",&x,&y)==2){
           map<string,int>mp;
          for(i=0;i<x;i++){
           scanf("%s %s",a,b);
           mp[a]=i+1;
           strcpy(c[i+1],b);

           }

   for(i=0;i<y;i++){
    memset(s,0,1000);
     scanf("%s",s);
    if(mp[s]!=0)
     printf("%s\n",c[mp[s]]);
    else{
    n=strlen(s);

     if(s[n-1]=='y'){
      if(s[n-2]!='a'&&s[n-2]!='e'&&s[n-2]!='i'&&s[n-2]!='o'&&s[n-2]!='u'){
       s[n-1]='i';
       s[n]='e';
       s[n+1]='s'; }
      else
       s[n]='s'; }
     else if(s[n-1]=='o'||s[n-1]=='s'||(s[n-2]=='c'&&s[n-1]=='h')||(s[n-2]=='s'&&s[n-1]=='h')||s[n-1]=='x'){
         s[n]='e';
         s[n+1]='s';
         }
     else
      s[n]='s';

    printf("%s\n",s);
   }

}

 }

return 0;
}

