#include<stdio.h>

int a[200]={9,11,22,33,44,55,101,111,121,131,141,151,202,212,222,232,242,252,303,313,323,333,
343,353,404,414,424,434,444,454,505,515,525,535,545,555,606,616,626,636,646,656,707,717,727,737,747,757,808,818,
828,838,848,858,909,919,929,939,949,959,1001,1111,1221,1331,1441,1551,2002,2112,2222,2332};

int i,j,h,m,n,l,tim,b[10];
char c;
int main(){
    
    scanf("%d",&n);
    
    for(l=0;l<n;l++){
     scanf("%d%c%d",&h,&c,&m);
     
     tim=h*100+m;
    if(tim<9){
     printf("00:0%d\n",tim+1);
     continue; }
    if(tim>=55&&tim<101){
     printf("01:01\n");
     continue; }
    if(tim>=959&&tim<1001){
     printf("10:01\n");
     continue; } 
    if(tim>=2332){
    printf("00:00\n");
     continue; } 
   for(i=0;i<73;i++){
    if(tim>=a[i]&&tim<a[i+1]){
      m=a[i+1];
      j=0;
      while(m!=0){
      b[j]=m%10;
      m=m/10;
      j++; }
      
      if(j==2){
       printf("00:%d%d\n",b[1],b[0]);
       break;
       }
      if(j==3){
       printf("0%d:%d%d\n",b[2],b[1],b[0]);
       break;
       }         
      if(j==4){
       printf("%d%d:%d%d\n",b[3],b[2],b[1],b[0]);
       break;
       } }
}
}
return 0;
} 
