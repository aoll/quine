#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int ac, char **av){
int x=5;
 char s[10];(void)ac;int i=0;if(strlen(av[0])>8){i=1;}if (x){s[0]='S';s[1]='u';s[2]='l';s[3]='l';s[4]='y';s[5]='_';s[6]=x-i+'0';s[7]='.';s[8]='c';s[9]=0;char s2[10];strcpy(s2,s);s2[7]=0;char s3[50];strcpy(s3,"clang ");strcat(s3,s);strcat(s3," -o ");strcat(s3,s2);strcat(s3,"; ./");strcat(s3,s2);FILE *f=fopen(s, "w");char *a="#include <stdlib.h>%c#include <stdio.h>%c#include <string.h>%cint main(int ac, char **av){%cint x=%d;%cchar s[10];(void)ac;int i=0;if(strlen(av[0])>8){i=1;}if (x){s[0]='S';s[1]='u';s[2]='l';s[3]='l';s[4]='y';s[5]='_';s[6]=x-i+'0';s[7]='.';s[8]='c';s[9]=%c;char s2[10];strcpy(s2,s);s2[7]=%c;char s3[50];strcpy(s3,%cclang %c);strcat(s3,s);strcat(s3,%c -o %c);strcat(s3,s2);strcat(s3,%c; ./%c);strcat(s3,s2);FILE *f=fopen(s, %cw%c);char *a=%c%s%c;fflush(f);fprintf(f,a,10,10,10,10,x-1,10,'0','0',34,34,34,34,34,34,34,34,34,a,34,34,34);fflush(stdout);fclose(f);system(s3);}return(0);}";fflush(f);fprintf(f,a,10,10,10,10,x-i,10,'0','0',34,34,34,34,34,34,34,34,34,a,34,34,34);fflush(stdout);fclose(f);system(s3);}return(0);}
