#include<iostream>
#include<map>
#include<string.h>
using namespace std;

map<string,int>m;
int i,j,k,n,l,p;
char s[100],a[1000001][20],b[1000001][20],c[100];
//string s,a[1000],b[1000],c;
int main(){
    l=1;
     while(gets(s)){
      
      if(s[0]==NULL)
       break;
      
     
     n=strlen(s);
     
     for(i=0;i<n;i++)
      if(s[i]==' '){
       k=i;
       break; }     
    j=0;
   for(i=0;i<k;i++){
    a[l][j]=s[i];
    j++; }
 j=0;
 for(i=k+1;i<n;i++){
  b[l][j]=s[i];
  j++; }
  l++; 
}   

 for(i=1;i<=l;i++)
  m[b[i]]=i;                


 while(scanf("%s",c)==1){
    if(m[c]==0)
     printf("eh\n"); 
    else
     printf("%s\n",a[m[c]]);
}

return 0;

}      
     
                                                           
