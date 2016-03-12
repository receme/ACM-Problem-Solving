#include<stdio.h>
#include<string.h>

long i,j,l,flag;
double a[20],b[20],c[20],d[20],x,y;
char ch[2];
int main(){
  
  i=0;  
  while(1){
      scanf("%s",ch);
      if(ch[0]=='*')
       break;
     
       scanf("%lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i]);
       
       i++; 
             
 }
 
 l=1;
 while(scanf("%lf %lf",&x,&y)==2){
      
      if(x==9999.9&&y==9999.9)
        break;
     flag=0;   
     for(j=0;j<i;j++)
       if(x>a[j]&&x<c[j]&&y<b[j]&&y>d[j]){
         printf("Point %ld is contained in figure %ld\n",l,j+1);
         flag=1;
         }
         
     if(flag==0)
      printf("Point %ld is not contained in any figure\n",l);
   l++;   
    
}        

return 0;
}