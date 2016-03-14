
#include<stdio.h>
#include<string.h>
int main(){

    int i,j,k,n,m,t,a[200][200],b[200][200],d,l,x,y,temp;
    char c[100],e[200];

    scanf("%d",&n);

    for(l=0;l<n;l++){
        scanf("%d",&m);

      for(i=0;i<m;i++){
       scanf("%s",e);
       for(j=0;j<m;j++)
        a[i][j]=e[j]-48; }


     scanf("%d",&d);
     for(k=0;k<=d;k++){
        gets(c);
        if(c[0]=='t'){

         for(i=0;i<m;i++)
          for(j=0;j<m;j++)
             b[j][i]=a[i][j];

        for(i=0;i<m;i++)
         for(j=0;j<m;j++)
          a[i][j]=b[i][j]; }

        if(c[0]=='i'){
            for(i=0;i<m;i++)
             for(j=0;j<m;j++)
              a[i][j]=a[i][j]+1;
        }



       if(c[0]=='d'){
         for(i=0;i<m;i++)
         for(j=0;j<m;j++)
           a[i][j]=a[i][j]-1;
          }

       if(c[0]=='r'){
          x=c[4]-48;
          y=c[6]-48;
          for(i=0;i<m;i++){
           temp=a[x-1][i];
           a[x-1][i]=a[y-1][i];
           a[y-1][i]=temp; }   }

       if(c[0]=='c'){
           x=c[4]-48;
           y=c[6]-48;

        for(i=0;i<m;i++){
           temp=a[i][x-1];
           a[i][x-1]=a[i][y-1];
           a[i][y-1]=temp; }   }

       for(i=0;i<m;i++){
        for(j=0;j<m;j++)
        if(a[i][j]==10)
         a[i][j]=0;
        else if(a[i][j]==-1)
         a[i][j]=9; }

    }

    printf("Case #%d\n",l+1);

    for(i=0;i<m;i++){
     for(j=0;j<m;j++)
      printf("%d",a[i][j]);
      printf("\n"); }

     printf("\n");


    }



    return 0;
}


