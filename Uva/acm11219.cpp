
#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,m,n,d1,d2,m1,m2,y1,y2,c=0;
    char a[20],b[20];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
                     
      scanf("%s %s",a,b);
      c++;
      d1=(a[0]-48)*10+(a[1]-48);
      m1=(a[3]-48)*10+(a[4]-48);
      y1=(a[6]-48)*1000+(a[7]-48)*100+(a[8]-48)*10+(a[9]-48);
      
      d2=(b[0]-48)*10+(b[1]-48);
      m2=(b[3]-48)*10+(b[4]-48);
      y2=(b[6]-48)*1000+(b[7]-48)*100+(b[8]-48)*10+(b[9]-48);
      
        if(d1==d2&&m1==m2&&y1==y2){
         printf("Case #%d: 0\n",c);
         continue; }
         
      if(y1<y2){
        printf("Case #%d: Invalid birth date\n",c);
        continue ;  }
       
      if(y1==y2)
       if(m1<m2||((m1==m2)&&(d1<d2))){
         printf("Case #%d: Invalid birth date\n",c);
         continue ;  }   
         
      k=y1-y2;
      if(k==0){
        printf("Case #%d: 0\n",c);
        continue; }   
      
      if(m1<m2)
       k=k-1;
      else if(m1==m2)
        if(d1<d2)
         k=k-1;
         
     if(k>130){
       printf("Case #%d: Check birth date\n",c);        
       continue ;}
     printf("Case #%d: %d\n",c,k);
            
      }
      
      return 0;
      }
