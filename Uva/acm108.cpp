#include<stdio.h>
main(){
int Table[110][110];
int N,i,j,t,k,MAX=0;;

while(scanf("%d",&N)==1){

for(i = 0; i<=N; i++)
for(j = 0; j<=N; j++)
Table[i][j]=0;


for(i = 1; i<=N; i++)
for(j = 0; j<N; j++){
scanf("%d",&Table[i][j]);
}



for(i = 1; i<=N; i++){
for(j = 0; j<N; j++)
Table[i][j] = Table[i][j]+Table[i-1][j];
}

MAX = Table[1][0];
for(k = 1; k<=N; k++) {
for(i = 0; i<=N-k; i++){
for(t = 0, j = 0; j<N; j++) {
if(t>=0) t+= (Table[i+k][j] - Table[i][j]);
else t = (Table[i+k][j] - Table[i][j]);
if(t>MAX) MAX = t;
}
}
}

printf("%d\n",MAX);
}
} 
