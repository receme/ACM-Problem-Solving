#include<stdio.h>
#include<iostream>
#include<map>
#include<string.h>
using namespace std;

char a[70],b[70],ch;
int i,j,l,n,cas;

int main(){
   
  scanf("%d",&cas); 
  
  gets(a);
  getchar();
  int flag=0;
  for(l=0;l<cas;l++){
   map<char,char>mp;
    gets(a);
    if(flag!=0)
     printf("\n");
     flag=1;
    n=strlen(a); 
    i=0;j=0;
    while(1){
     scanf("%c",&ch);
     if(ch=='\n') break;
     printf("%c",ch);
     mp[a[i]]=ch;
     i++;
     j++;
     if(j>n)
      mp[' ']=ch;
     
     }
    if(i!=n){
      for(j=i;j<n;j++)
       mp[a[j]]=' ';  }       
    
    printf("\n");
    printf("%s\n",a);
    
   while(gets(a)){
     if(a[0]==NULL)
      break;
      
    n=strlen(a);
    
    for(i=0;i<n;i++)
     if(mp[a[i]]!=0)
      cout<<mp[a[i]];
     else
      printf("%c",a[i]);                 
    
    printf("\n");                
}

}

return 0;
}                   
