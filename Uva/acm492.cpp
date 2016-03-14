
#include<stdio.h>
#include<string.h>
//#include<conio.h>

int main(){
    char a[1000000],b[1000000];
    int i,j,k,n,flag;

    while(gets(a)){

        n=strlen(a);

        for(i=0;i<n;i++){

            k=0;
            flag=0;
            while((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
               b[k]=a[i];
               k++;
               i++;
               flag=1;}
             if(flag==1){
             
    if(b[0]=='a'||b[0]=='A'||b[0]=='e'||b[0]=='E'||b[0]=='I'||b[0]=='i'||b[0]=='o'||b[0]=='O'||b[0]=='u'||b[0]=='U'){
       for(j=0;j<k;j++)
        printf("%c",b[j]);
      
        if(i==n){
           if((a[i-1]>=65&&a[i-1]<=90)||(a[i-1]>=97&&a[i-1]<=122))
            goto x; } 
        printf("ay");
        
    }
else if(!(b[0]=='a'||b[0]=='A'||b[0]=='e'||b[0]=='E'||b[0]=='I'||b[0]=='i'||b[0]=='o'||b[0]=='O'||b[0]=='u'||b[0]=='U')){
        for(j=1;j<k;j++)
         printf("%c",b[j]);
          if(i==n){
           if((a[i-1]>=65&&a[i-1]<=90)||(a[i-1]>=97&&a[i-1]<=122))
            goto x; }                  
         printf("%c",b[0]);
         printf("ay"); } 
           }
             
    
            
             printf("%c",a[i]);

    }
    
     if((a[n-1]>=65&&a[n-1]<=90)||(a[n-1]>=97&&a[n-1]<=122))
      printf("\b");
    
    x:
          
    printf("\n");

    }

    return 0;
}


