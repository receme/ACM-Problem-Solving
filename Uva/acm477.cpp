#include<stdio.h>
#include<math.h>
#include<string.h>

long i,j,l,flag,t[100];
double a[20],b[20],c[20],d[20],x,y,s;
char ch[2];
int main(){

      i=0;
  while(1){
      scanf("%s",ch);
      if(ch[0]=='*')
       break;
      if(ch[0]=='r'){
       scanf("%lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i]);
       t[i]=0;}
      else if(ch[0]=='c'){
       scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
        t[i]=1; }
       i++;

 }

 l=1;
 while(scanf("%lf %lf",&x,&y)==2){

      if(x==9999.9&&y==9999.9)
        break;
     flag=0;
     for(j=0;j<i;j++){

       if(t[j]==1){
           s=sqrt((x-a[j])*(x-a[j])+(y-b[j])*(y-b[j]));
         if(s<c[j]){
          printf("Point %ld is contained in figure %ld\n",l,j+1);
          flag=1;}
       }
       else{
       if(x>a[j]&&x<c[j]&&y<b[j]&&y>d[j]){
         printf("Point %ld is contained in figure %ld\n",l,j+1);
         flag=1;
         }
       }}

     if(flag==0)
      printf("Point %ld is not contained in any figure\n",l);



l++;
 }

return 0;
}
