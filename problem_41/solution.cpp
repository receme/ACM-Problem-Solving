#include<stdio.h>
#include<string.h>

int main(){
    int a,b,c,l,x=0,h,g=4,t;
    char d[6],i,j,k,n[5];
    strcpy(n,"?");
    
    while(scanf("%d%c%d%c",&a,&i,&b,&t)==4){
           h=0; 
           //scanf("%d%c%d%c",&a,&i,&b,&t);
           scanf("%[^\n]",d);          
            if(strcmp(d,n)==0)
              continue;
              
            l=strlen(d);
            if(l==3)
              h=(d[0]-48)*100+(d[1]-48)*10+(d[2]-48);
            else if(l==2)
              h=(d[0]-48)*10+(d[1]-48);
            else if(l==1)
              h=(d[0]-48);
                  
      
            if(i=='+' && a+b==h)
                  ++x;            
            else if(i=='-'&& (a-b)==h) 
                  ++x;
              
            
            
            }
    
    
    printf("%d\n",x);
    
    
    return 0;
    }
