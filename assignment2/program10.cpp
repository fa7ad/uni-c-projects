#include<stdio.h>
#include<math.h>
float x,y,z,sp,p,a;
char k;
void calculateAP(float q, float w, float e);
int main(){
printf("Enter three sides of the triangle\n");
while(scanf("%f%f%f",&x,&y,&z)){
calculateAP(x,y,z);
printf("Enter \"a\" to calculate its area,\n\"p\" to calculate its perimeter,\n\"o\" to calculate both\n");
scanf(" %c",&k);
if(k=='a')printf("Area = %1.2f\n",a);
else if(k=='p')printf("Perimeter = %1.2f\n",p);
else if(k=='o')printf("Area = %1.2f\nPerimeter = %1.2f\n",a,p);
else printf("Invalid character\n");
printf("\n\nEnter three sides of the triangle\n");
}
}
void calculateAP(float q, float w, float e){
p=(x+y+z);
sp=p/2;
a=sqrt((sp-x)*(sp-y)*(sp-z));
}
