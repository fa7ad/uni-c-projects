#include<stdio.h>

int x[100][100],m,n,max1;
void findmax(int y[][100], int o, int p);
int main(){
printf("Enter the dimensions of the 2D matrix:\n");
scanf("%d%d",&m,&n);
printf("\nEnter the elements of the matrix:\n");
for(int i=0; i<m; i++){
 for(int j=0; j<n; j++){
  scanf("%d",&x[i][j]);
  }
 }
max1=x[0][0];
findmax(x,n,n);
return 0;
}
void findmax(int y[][100], int o, int p){
for(int i=0; i<m;i++){
    for(int j=0; j<n; j++)if(y[i][j]>max1)max1=y[i][j];
}
printf("Largest element = %d", max1);
}


