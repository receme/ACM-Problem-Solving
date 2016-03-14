#include<stdio.h>
#include<string.h>
char a[100][100],x[100],y[100];
int i,j,k,m,l,cas,r,len1,len2,big,count;

int main(){
    
    scanf("%d",&cas);
    
    for(l=0;l<cas;l++){
     scanf("%d",&m);
     
     for(i=0;i<m;i++)
      scanf("%s",a[i]);
    
     big=0; 
    for(i=0;i<m-1;i++)
     for(j=i+1;j<m;j++){
       
       strcpy(x,a[i]); strcpy(y,a[j]);
       len1=strlen(x); len2=strlen(y);
          
     for(r=0;r<len2-2;r++){
     count=0;
     for(k=0;k<len1;k++){
      if(r+k>=len2) break;
      if(x[k]==y[r+k])
       count++; 
       }
   
      if(count>big)
       big=count;
       }
       
      for(r=0;r<len1-2;r++){
     count=0;
     for(k=0;k<len2;k++){
      if(r+k>=len1) break;
      if(x[r+k]==y[k])
       count++; 
       }
   
      if(count>big)
       big=count;
       }
       
}

printf("%d\n",big);
}
return 0;
}
        
