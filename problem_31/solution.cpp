#include<stdio.h>
#include<string.h>
#include<math.h>



char a[1000000],ch,b[10];
long i,j,n,l,p,t,cas=1;
double x,y,d,m;

int main(){

   while(scanf("%s",a)==1){
       if(strcmp(a,"END")==0) break;
         
   
   n=strlen(a);
   
   x=0;y=0;
   
   for(i=0;i<n;i++){
     p=10;m=0;                 
     while(a[i]>='0'&&a[i]<='9'){
       m=m*p+(a[i]-48);
       i++; }
     
    
    j=0;
    for(;;){
      
      if(a[i]==44||a[i]==46) break;       
      b[j]=a[i];
      j++;
      i++; }
    
 
     
   if(j==1){
   if(b[0]=='N')
      y=y+m;
   else if(b[0]=='S')
     y=y-m;   
   else if(b[0]=='E')
     x=x+m;
   else if(b[0]=='W')
     x=x-m;
}
else if(j==2){  
   if(b[0]=='N'&&b[1]=='E'){
     x=x+((m/2)*sqrt(2));
     y=y+((m/2)*sqrt(2)); }   
   else if(b[0]=='S'&&b[1]=='E'){
     x=x+((m/2)*sqrt(2));
     y=y-((m/2)*sqrt(2)); }
  
   else if(b[0]=='S'&&b[1]=='W'){
     x=x-((m/2)*sqrt(2));
     y=y-((m/2)*sqrt(2));
     }
   else if(b[0]=='N'&&b[1]=='W'){
     x=x-((m/2)*sqrt(2));
     y=y+((m/2)*sqrt(2)); }    

}


}   


d= sqrt((x*x)+(y*y));


printf("Map #%d\nThe treasure is located at (%.3lf,%.3lf).\n",cas,x,y);
printf("The distance to the treasure is %.3lf.\n\n",d);

cas++;
}

return 0;
}                           
