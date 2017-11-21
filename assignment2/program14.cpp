#include<stdio.h>
#include<stdlib.h>
int x1=(int)calloc(100, sizeof(int));
int y1=(int)calloc(100, sizeof(int));
int n1,n2,tmp;

int ascending(int x1[], int n1, int y1[], int n2){
for(int i=0; i<n1; i++){
    for(int j=i+1; j<n1; j++){
    if(x1[i]>x1[j]){
         tmp=x1[i];
        x1[i]=x1[j];
        x1[j]=tmp;
    }
    }
}
for(int i=0; i<n2; i++){
    for(int j=i+1; j<n2; j++){
    if(y1[i]>y1[j]){
         tmp=y1[i];
        y1[i]=y1[j];
        y1[j]=tmp;
    }
    }
}
//merge1(x1,y1);
}
int readarray(){
//int x1[n1],y1[n2];
for(int i=0; i<n1; i++){
    scanf("%d",&x1[i]);
}
printf("Enter the elements of the second array:\n");
for(int i=0; i<n2; i++){
    scanf("%d",&y1[i]);
}
//ascending(x1,n1,y1,n2);
}

int main(){
printf("Enter the sizes of the arrays:\n");
scanf("%d%d",&n1,&n2);
printf("Enter the elements of the first array:\n");
readarray();
ascending(x1,n1,y1,n2);

}
