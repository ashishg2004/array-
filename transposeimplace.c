#include<stdio.h>
int main()
{
    printf("enter no. of rows and columns ");
    int row,col;
    scanf( "%d %d", &row,&col);
int temp=0;
int arr[row][col]; 
printf( "Enter the elements of %d X %d array:\n",row,col);
//INPUTING ELEMENTS IN AN ARRAY
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");

for(int i=0;i<row;i++)
{
    for(int j=0;j<i;j++)
    {
        
    temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp; //transposing matrix by swapping elements
      
    }
    printf("\n");

} 
for(int i=0;i<col;i++)
{
    for(int j=0;j<row;j++)
    {
        printf("%d ",arr[j][i]);
    }
printf("\n");
}
return 0;
} 