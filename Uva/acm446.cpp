#include<stdio.h>
#include<string.h>
#include<math.h>
//#include<conio.h>

int i,j,k,l,m,n,cas;
char ch[2],s[10];
int a[20],b[20],sum1,sum2,p,c[100],o,t;
int main(){
    scanf("%d",&cas);
    
    for(l=0;l<cas;l++){
     
     
     scanf("%s",s);
     n=strlen(s);
     
     for(i=0;i<13;i++){
      a[i]=0;
      b[i]=0; }
     o=0;
     for(i=n-1;i>=0;i--){
      if(s[i]>='0'&&s[i]<='9')
        m=s[i]-48;
      else
        m=s[i]-55;  
        j=0;
        while(m!=0){
         c[j]=m%2;
         m=m/2;
         j++; }
       
       t=o+j;j=0;
       for(k=o;k<t;k++){
         a[k]=c[j];
         j++; }
       o=o+4; 
         }
      sum1=0;m=0;
     for(p=0;p<12;p++){
       sum1=sum1+a[p]*pow(2,m);
       m++; }   
         
      scanf("%s",ch);
      scanf("%s",s); 
      n=strlen(s);
     o=0;
     for(i=n-1;i>=0;i--){
      if(s[i]>='0'&&s[i]<='9')
        m=s[i]-48;
      else
        m=s[i]-55;  
        j=0;
        while(m!=0){
         c[j]=m%2;
         m=m/2;
         j++; }
       t=j+o;j=0;
       for(k=o;k<t;k++){
         b[k]=c[j];
         j++; } 
        o=o+4;
        
         }  
      
     sum2=0;m=0;
     for(p=0;p<12;p++){
       sum2=sum2+b[p]*pow(2,m);
       m++; }
      
     if(ch[0]=='+')
      sum1=sum1+sum2;
     else
      sum1=sum1-sum2;
      
      for(p=12;p>=0;p--)
       printf("%d",a[p]);
      printf(" %c ",ch[0]);
     for(p=12;p>=0;p--)
       printf("%d",b[p]);
     printf(" = %d\n",sum1);   


}

return 0;
}
