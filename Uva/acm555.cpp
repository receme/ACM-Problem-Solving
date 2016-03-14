#include<stdio.h>
#include<string.h>

struct data{
    char ch1,a[15][2];
};

struct data s[4];
void process();
char ch[2],b[100],c[15][2];
int i,j,k,n,l;

int main(){

    while(1){
        
        scanf("%s",ch);
         if(ch[0]=='#') break;

      if(ch[0]=='S'){      
        s[0].ch1='W';
        s[1].ch1='N';
        s[2].ch1='E';
        s[3].ch1='S';
        }
     else if(ch[0]=='W'){      
        s[0].ch1='N';
        s[1].ch1='E';
        s[2].ch1='S';
        s[3].ch1='W';
        }
     else if(ch[0]=='N'){      
        s[0].ch1='E';
        s[1].ch1='S';
        s[2].ch1='W';
        s[3].ch1='N';
        }
     else if(ch[0]=='E'){        
        s[0].ch1='S';
        s[1].ch1='W';
        s[2].ch1='N';
        s[3].ch1='E';
        }
  
     getchar();

     scanf("%s",b);
     n=strlen(b);

     j=0;
     int p=0,x=0,y=0,z=0;
     for(i=0;i<n-1;i=i+2){
       if(j==0){
         s[j].a[p][0]=b[i];
         s[j].a[p][1]=b[i+1];
         j=1;
         p++;}
       else if(j==1){
         s[j].a[x][0]=b[i];
         s[j].a[x][1]=b[i+1];
         j=2;
         x++;}
       else if(j==2){
         s[j].a[y][0]=b[i];
         s[j].a[y][1]=b[i+1];
         j=3;
         y++;}
       else if(j==3){
         s[j].a[z][0]=b[i];
         s[j].a[z][1]=b[i+1];
         j=0;
         z++;
         }
     }

     scanf("%s",&b);

    n=strlen(b);

    for(i=0;i<n;i=i+2){
       if(j==0){
         s[j].a[p][0]=b[i];
         s[j].a[p][1]=b[i+1];
         j=1;
         p++;}
       else if(j==1){
         s[j].a[x][0]=b[i];
         s[j].a[x][1]=b[i+1];
         j=2;
         x++;}
       else if(j==2){
         s[j].a[y][0]=b[i];
         s[j].a[y][1]=b[i+1];
         j=3;
         y++;}
       else if(j==3){
         s[j].a[z][0]=b[i];
         s[j].a[z][1]=b[i+1];
         j=0;
         z++;}
     }
    for(i=0;i<4;i++)
     if(s[i].ch1=='S')
      break;
    process();

     for(i=0;i<4;i++)
     if(s[i].ch1=='W')
      break;
    process();

     for(i=0;i<4;i++)
     if(s[i].ch1=='N')
      break;
    process();

     for(i=0;i<4;i++)
     if(s[i].ch1=='E')
      break;
    process();


}

return 0;
}


void process(){
     
     char g[5]="CDSH";
     int w;
          
      printf("%c:",s[i].ch1);
     for(w=0;w<4;w++){
      k=0;
     for(j=0;j<13;j=j+1)
      if(s[i].a[j][0]==g[w]){
         c[k][0]=g[w];
         if(s[i].a[j][1]=='T')
          c[k][1]='a';
         else if(s[i].a[j][1]=='J')
           c[k][1]='b';
         else if(s[i].a[j][1]=='Q')
           c[k][1]='c';
         else if(s[i].a[j][1]=='K')
           c[k][1]='d';
         else if(s[i].a[j][1]=='A')
           c[k][1]='e';
         else
           c[k][1]=s[i].a[j][1];
         k++;
         }
        char temp1,temp2;
       for(j=0;j<k;j++)
        for(l=0;l<k-1;l++)
         if(c[l][1]>c[l+1][1]){
           temp1=c[l][0]; temp2=c[l][1];
           c[l][0]=c[l+1][0]; c[l][1]=c[l+1][1];
           c[l+1][0]=temp1; c[l+1][1]=temp2;
           }

       for(j=0;j<k;j++){
        printf(" %c",c[j][0]);
        if(c[j][1]=='a')
         printf("T");
        else if(c[j][1]=='b')
         printf("J");
        else if(c[j][1]=='c')
         printf("Q");
        else if(c[j][1]=='d')
         printf("K");
        else if(c[j][1]=='e')
         printf("A");
        else
         printf("%c",c[j][1]);
       }
     }
     
 printf("\n");
}

