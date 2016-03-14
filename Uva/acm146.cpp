
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    char a[100],b[100];
    int i,n;
    
    while(scanf("%s",a)==1){
         if(a[0]=='#') break;
         
        n=strlen(a);
        if(n==1){
          printf("No Successor\n");
          continue; }
        for(i=0;i<n;i++)
         b[i]=a[i];
       
        next_permutation(a,a+n);
        
        if(a[0]<b[0])
         printf("No Successor\n");
        else{      
        for(i=0;i<n;i++)
        printf("%c",a[i]);
        printf("\n");
        }         
              
        }
        
        return 0;
        }
                            
