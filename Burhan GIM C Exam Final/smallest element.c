#include<stdio.h>

void main(){

int row;

printf("Enter the value of Rows :");
scanf("%d", &row);

////////////////////////////////////////
int array[row];

for(int i=0;i<row;i++){


        printf("array [%d] = ", i);
        scanf("%d", &array[i]);




}

int smallest = array[0];
for(int i=0;i<row;i++){


   if(array[i]<smallest){
    smallest=array[i];
   }



}
printf("The Smallest Number of the matrix is : %d", smallest);


}




