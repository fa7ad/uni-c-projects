#include<stdio.h>
#include<string.h>
char str[1000];
int len;
int main(){
printf("Enter lowercase letters:\n");
scanf("%[^\n]",&str);
len=strlen(str);
for(int i=0; i<len; i++){
    if(str[i]>=97 && str[i]<=122)str[i]=str[i]-32;
}
printf("\n%s",str);
}
