#include<stdio.h>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

char a[10000],b[10000],c[10000];
int i,l,n,flag;

int main(){
    
    map<char,char>mp,mp1;
    mp['A']='A'; mp['E']='3'; mp1['3']='E'; mp['J']='L'; mp1['L']='J'; mp['S']='2'; mp1['2']='S'; mp['Z']='5'; mp1['5']='Z';
    mp['H']='H'; mp['I']='I'; mp['M']='M'; mp['O']='O'; mp['T']='T'; mp['U']='U'; mp['V']='V'; mp['W']='W'; mp['X']='X';
    mp['Y']='Y'; mp['1']='1'; mp['8']='8';
    
 while(scanf("%s",a)==1){
                         
     n=strlen(a);
    if(n==1){
    if(mp[a[0]]==0||a[0]!=mp[a[0]])         
     printf("%s -- is a regular palindrome.\n\n",a); 
    else
     printf("%s -- is a mirrored palindrome.\n\n",a);
    continue; }
    
    strcpy(b,a);
  reverse(b,b+n);
    
  l=strcmp(a,b);  
  
  if(l==0){  
     flag=0; 
    for(i=0;i<n;i++)
     if(mp[a[i]]==0||a[i]=='E'||a[i]=='J'||a[i]=='L'||a[i]=='J'||a[i]=='S'||a[i]=='Z'){
      flag=1;
      break;  }  
   
  
  
  if(flag==0)
    printf("%s -- is a mirrored palindrome.\n\n",a);
  else
    printf("%s -- is a regular palindrome.\n\n",a);
}
else{
  flag=0; 
    for(i=0;i<n;i++)
     if(mp[a[i]]==0&&mp1[a[i]]==0){
      flag=1;
      break;  } 
   
   for(i=0;i<n;i++)
    if(mp[a[i]]!=0)
     b[i]=mp[a[i]];
    else
     b[i]=a[i];
    
  strcpy(c,b);
  reverse(c,c+n);
  
  if(strcmp(b,c)==0&&flag==0)
   printf("%s -- is a mirrored string.\n\n",a);
  else
   printf("%s -- is not a palindrome.\n\n",a);    
     
}     
     
      
    
}    
return 0;

}
