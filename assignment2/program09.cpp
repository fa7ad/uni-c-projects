#include<stdio.h>
char x[100];
bool undefined=false;
float calc(float a, char o, float b);
int main(){
float x,y,result;
char c;
while(1){
printf("Enter two numbers and their operator(eg; a+b): ");
scanf("%f%c%f", &x, &c, &y);
result=calc(x,c,y);
if(undefined==false)printf("\n %1.2f %c %1.2f = %1.2f\n",x,c,y,result);
else{
        printf("%1.2f / %1.2f = Undefined\n",x,y);
        undefined=false;
}
}
}
float calc(float a, char o, float b){
if(o=='+')
return (a+b);
else if(o=='-')
return (a-b);
else if(o=='/'){
 if(b==0 && a>0){
undefined=true;
}
else return (a/b);
}
else if(o=='x')
return (a*b);
else if(o=='X')
return (a*b);
else if(o=='*')
return (a*b);
else{
printf("Invalid Characters");
scanf("%[^\n]", &x);
}
}
