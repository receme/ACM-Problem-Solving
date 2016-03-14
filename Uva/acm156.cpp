#include<stdio.h>
#include<map>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<ctype.h>
using namespace std;

int i,j,n;
char a[100],c[100];

struct data{

 char b[100],so[100];
 int co;
}s[10000],t;


int main(){
    
   
    map<string,int>mp;
    n=0;
    
    while(scanf("%s",a)==1){
      
     
      if(a[0]=='#'){
      
      for(i=0;i<n;i++)
       for(j=0;j<n-1;j++)
        if(strcmp(s[j].b,s[j+1].b)>0){
         t=s[j];
         s[j]=s[j+1];
         s[j+1]=t; }
         
         
      for(i=0;i<n;i++)
       if(s[i].co==1) 
        printf("%s\n",s[i].b);                             
      
      
      
     for(i=0;i<10000;i++)
      s[i].co=0; 
      
     mp.clear(); 
      n=0;
      continue;
      //memset(a,0,100);
      }
      
      
     strcpy(c,a);
     
     for(i=0;i<strlen(c);i++)
      c[i]=tolower(c[i]);
    sort(c,c+strlen(c));
     
     if(mp[c]==0){
     strcpy(s[n].b,a);
     strcpy(s[n].so,c);
     s[n].co++;
     n++; 
     mp[c]=1;
     } 
     
     else{
          
     for(i=0;i<n;i++)
      if(strcmp(s[i].so,c)==0){
        s[i].co++;
        break; }
                 
    }       
       
}

return 0;
}      
     
    
