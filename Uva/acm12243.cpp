#include<stdio.h>
#include<string.h>
#include<ctype.h>


char a[1000],b[100][30];
int i,j,k,n;

int main(){
    
    while(gets(a)){
       
    if(a[0]=='*')
     break;   
                   
    n=strlen(a);
  j=0; 
  char * pch;
  pch = strtok (a," ");
  while (pch != NULL)
  {
    //printf ("%s\n",pch);
    strcpy(b[j],pch);
    j++;
    pch = strtok (NULL," ");
  }
   
    char ch=tolower(b[0][0]);
    k=0;
    for(i=1;i<j;i++)
     if(tolower(b[i][0])!=ch){
       k=1;
       break; }
       
   if(k==0)
    printf("Y\n");
   else
    printf("N\n");    

}


return 0;
}
