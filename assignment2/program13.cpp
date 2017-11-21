#include<stdio.h>

int x[100][100],m,n,columnavg[100],rowavg[100];

void dcolumnavg(int y[][100], int m, int n){
printf("Column Averages:\n");
for(int i=0; i<m; i++){
    int sum=0;
    for(int j=0; j<n; j++){
        sum+=y[j][i];
    }
    printf("%1.1f\t",(float)sum/(float)n);
}
printf("\n\n");
}

float drowavg(int y[][100], int m, int n){
    int sum=0;
    printf("Row average: ");
for(int i=0; i<n; i++){
        sum+=y[m][i];
}
return (float)sum/(float)n;
}

void display(int y[][100], int m, int n){
for(int i=0; i<m; i++){
    if(i==0)dcolumnavg(y,n,m);
    for(int j=0; j<n; j++){
        printf("%d\t",y[i][j]);
    }
    printf("  %1.1f", drowavg(y,i,n));
    printf("\n");
  }
}

int main(){

printf("Enter the dimensions of the m by n matrix:\n");
while(scanf("%d%d",&m,&n)==2){
printf("Enter the elements of the matrix:\n");
for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)scanf("%d",&x[i][j]);
    printf("\n\n");
    display(x,m,n);
    printf("\n\n");
printf("(Enter Q to quit)\nEnter the dimensions of the m by n matrix:\n");
}
return 0;
}
