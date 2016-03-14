#include<stdio.h>
#include<string.h>

char a[100];
int k;

int main(){
    k=0;
    while(scanf("%s",&a)==1){
       if(a[0]=='#')
        break;
    k++;    
    if(strcmp(a,"HELLO")==0)
      printf("Case %d: ENGLISH\n",k);
    else if(strcmp(a,"HOLA")==0)
      printf("Case %d: SPANISH\n",k);
    else if(strcmp(a,"HALLO")==0)
      printf("Case %d: GERMAN\n",k); 
    else if(strcmp(a,"BONJOUR")==0)
      printf("Case %d: FRENCH\n",k); 
    else if(strcmp(a,"CIAO")==0)
      printf("Case %d: ITALIAN\n",k); 
    else if(strcmp(a,"ZDRAVSTVUJTE")==0)
      printf("Case %d: RUSSIAN\n",k); 
    else 
      printf("Case %d: UNKNOWN\n",k);            
    
    
    
    }
    
return 0;
}                            
                             
                             
