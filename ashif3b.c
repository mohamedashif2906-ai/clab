#include<stdio.h>
int main()
{
int rowCount,columnCount,i,j;
int firstmatrix[10][10],secondtmatrix[10][10],resultmatrix[10][10];
printf("Number of rows of matrix to be subtracted:");
scanf("%d",&rowCount);
printf("Number of column matrix to be subtracted :");
scanf("%d",&columnCount);
printf("Element of first matrix :\n");
for(i=0;i<rowCount;i++)
for(j=0;j<columnCount;j++)
scanf("%d",&firstmatrix[i][j]);
printf("Element of second matrix:\n");
for(i=0;i<rowCount;i++)
for(j=0;j<columnCount;j++)
scanf("%d",&secondtmatrix[i][j]);
printf("Defference of entered matrices:\n");
for(i=0;i<rowCount;i++)
{
for(j=0;j<columnCount;j++)
 {
resultmatrix[i][j]=firstmatrix[i][j]-secondtmatrix[i][j];
printf("%d\t",resultmatrix[i][j]);
 }
printf("\n");
 }
}