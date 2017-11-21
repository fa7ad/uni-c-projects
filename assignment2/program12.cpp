#include<stdio.h>

int x[100][100],y[100][100],r[100][100],m,n;

int product(int a[][100],int b[][100], int c, int d);

int main(){
printf("This program will find the product of two matrices m by n and n by m.\nEnter the values of m and n:\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the %d by %d matrix:\n",m,n);
for(int i=0; i<m; i++){;
    for(int j=0; j<n; j++){
        scanf("%d",&x[i][j]);
    }
}
printf("Enter the elements of the %d by %d matrix:\n",n,m);
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        scanf("%d",&y[i][j]);
    }
}

product(x,y,m,n);

printf("\nProduct:\n");
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("%d ",r[i][j]);
    }
    printf("\n");

}
}

int product(int a[][100],int b[][100], int c, int d){
for(int i=0; i<c; i++){
    for(int j=0; j<d; j++){
     int sum=0;
     for(int k=0; k<c; k++){
       sum+=a[i][k]*b[k][j];
     }
     r[i][j] = sum;
    }
  }
}
