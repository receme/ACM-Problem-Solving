#include<stdio.h>
#include<string.h>

struct data{
       char a[20],ch;
};
struct data s[100];
int i,j,k,m,n,cas,l,flag,p;
char b[10000],c[10000][20];

int main(){
    
    strcpy(s[0].a,".-"); s[0].ch='A';
    strcpy(s[1].a,"-..."); s[1].ch='B';
    strcpy(s[2].a,"-.-."); s[2].ch='C';
    strcpy(s[3].a,"-.."); s[3].ch='D';
    strcpy(s[4].a,"."); s[4].ch='E';
    strcpy(s[5].a,"..-."); s[5].ch='F';
    strcpy(s[6].a,"--."); s[6].ch='G';
    strcpy(s[7].a,"...."); s[7].ch='H';
    strcpy(s[8].a,".."); s[8].ch='I';
    strcpy(s[9].a,".---"); s[9].ch='J';
    strcpy(s[10].a,"-.-"); s[10].ch='K';
    strcpy(s[11].a,".-.."); s[11].ch='L';
    strcpy(s[12].a,"--"); s[12].ch='M';
    strcpy(s[13].a,"-."); s[13].ch='N';
    strcpy(s[14].a,"---"); s[14].ch=79;
    strcpy(s[15].a,".--."); s[15].ch='P';
    strcpy(s[16].a,"--.-"); s[16].ch='Q';
    strcpy(s[17].a,".-."); s[17].ch='R';
    strcpy(s[18].a,"..."); s[18].ch='S';
    strcpy(s[19].a,"-"); s[19].ch='T';
    strcpy(s[20].a,"..-"); s[20].ch='U';
    strcpy(s[21].a,"...-"); s[21].ch='V';
    strcpy(s[22].a,".--"); s[22].ch='W';
    strcpy(s[23].a,"-..-"); s[23].ch='X';
    strcpy(s[24].a,"-.--"); s[24].ch='Y';
    strcpy(s[25].a,"--.."); s[25].ch='Z';
    strcpy(s[26].a,"-----"); s[26].ch='0';
    strcpy(s[27].a,".----"); s[27].ch='1';
    strcpy(s[28].a,"..---"); s[28].ch='2';
    strcpy(s[29].a,"...--"); s[29].ch='3';
    strcpy(s[30].a,"....-"); s[30].ch='4';
    strcpy(s[31].a,"....."); s[31].ch='5';
    strcpy(s[32].a,"-...."); s[32].ch='6';
    strcpy(s[33].a,"--..."); s[33].ch='7';
    strcpy(s[34].a,"---.."); s[34].ch='8';
    strcpy(s[35].a,"----."); s[35].ch='9';
    strcpy(s[36].a,".-.-.-"); s[36].ch='.';
    strcpy(s[37].a,"--..--"); s[37].ch=',';
    strcpy(s[38].a,"..--.."); s[38].ch='?';
    strcpy(s[39].a,".----."); s[39].ch=39;
    strcpy(s[40].a,"-.-.--"); s[40].ch='!';
    strcpy(s[41].a,"-..-."); s[41].ch='/';
    strcpy(s[42].a,"-.--."); s[42].ch='(';
    strcpy(s[43].a,"-.--.-"); s[43].ch=')';
    strcpy(s[44].a,".-..."); s[44].ch='&';
    strcpy(s[45].a,"---..."); s[45].ch=':';
    strcpy(s[46].a,"-.-.-."); s[46].ch=';';
    strcpy(s[47].a,"-...-"); s[47].ch='=';
    strcpy(s[48].a,".-.-."); s[48].ch='+';
    strcpy(s[49].a,"-....-"); s[49].ch='-';
    strcpy(s[50].a,"..--.-"); s[50].ch='_';
    strcpy(s[51].a,".-..-."); s[51].ch='"';
    strcpy(s[52].a,".--.-."); s[52].ch='@';
    
   scanf("%d",&cas);
   getchar();
   p=0;
   for(l=0;l<cas;l++){
     
     gets(b);
     
     n=strlen(b);
     printf("Message #%d\n",l+1);
     for(i=0;i<n;i++){
       
       
       k=0;
       while(b[i]!=' '){
        c[p][k]=b[i];
        k++;
        i++;
        if(i==n)break; }
      
           
        flag=0;
    for(j=0;j<53;j++)
     if(strcmp(c[p],s[j].a)==0){
      printf("%c",s[j].ch);
      flag=1;
       }
     if(flag==0)
      printf(" "); 
    p++;
    }
    
    printf("\n");
    
   if(l!=cas-1)
    printf("\n");
   
}

return 0;
}
  
