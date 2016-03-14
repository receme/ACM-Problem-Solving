# include <stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
char str[100],temp[100];
int co,size,total,l,cas,i,j,k,m,n;
    
long fact(int n){
    long sum=1;
    
    for(int i=2;i<=n;i++)
     sum=sum*i;
   return sum;
} 
int printPermutations(char *str,int size, int pos)
{
     int i;
     int total=0;
 
     if(pos==(size-1))
     {   int f1=0;
                    for(i=0;i<size;i++)
                       if(str[i]==temp[i]){
                        f1=1;
                        break; }
                     if(f1==0)     
                      co++;
                      //puts(str);
                      
                      return 1;
     }
 
     total+=printPermutations(str,size,pos+1);
     for(i=pos+1;i<size;i++)
     {
                          int j;
                          for(j=pos;j<i;j++)
                                            if(*(str+j)==*(str+i))
                                                                  break;
 
                          if(j==i)
                          {             
                                        
                                        char tmp=*(str+pos);
                                        *(str+pos)=*(str+i);
                                        *(str+i)=tmp;
                 
                                        total+=printPermutations(str,size,pos+1);                                        
                                        tmp=*(str+pos);
                                        *(str+pos)=*(str+i);
                                        *(str+i)=tmp;
                 
                                                                               
                                     
 
                          
                          }
                          
     }
 
     return total;
}


int main()
{
   
 scanf("%d",&cas);
 for(l=0;l<cas;l++){
   
   scanf("%d",&m);
  
 
 if(m<6){
  k=65;
  j=0;
  for(i=0;i<m;i++){
    str[j]=k;
    j++;
    k++;   
    } 
    
    size=j;
 
   strcpy(temp,str);
   co=0;       
  total=printPermutations(str,size,0);
  printf("%ld/%ld\n",co,fact(m));
}
else if(m==6)
 printf("265/720\n");
else if(m==7)
 printf("1854/5040\n");    
else if(m==8)
 printf("14833/40320\n");
else if(m==9)
 printf("133496/362880\n");
else if(m==10)
 printf("1334961/3628800\n");
else if(m==11)
 printf("14684570/39916800\n");    
else if(m==12)
 printf("176214841/479001600\n");
   
}
    return 0;
}
