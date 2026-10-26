#include<stdio.h>
int main()
{
int rowCount,ColumnCount,i,j;
int firstmatrix[10][10],secondmatrix[10][10],resultmatrix[10][10];
printf("Number of rows of matrices to be added:");
scanf("%d",&rowCount);
printf("Number of column matrices to be added:");
scanf("%d",&ColumnCount);
printf("Element of first matrix:\n");
for(i=0;i<rowCount;i++)
for(i=0;j<ColumnCount;j++)
scanf("%d",&firstmatrix[i][j]);
printf("Elements of second matrix:\n");
for(i=0;i<rowCount;i++)
for(j=0;j<ColumnCount;j++)
scanf("%d",&secondmatrix[i][j]);
printf("Sum of entered matrix:\n");
for(i=0;i<rowCount;i++)
{
for(j=0;j<ColumnCount;j++)
{
resultmatrix[i][j]=firstmatrix[i][j]+secondmatrix[i][j];
printf("%d\t",resultmatrix[i][j]);
 }
printf("\n");
}
return 0;
 }
