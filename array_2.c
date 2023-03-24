//write a c program to perform addition of 2 (1-D) array and store the added value in new array.

#include<stdio.h>
int main(){
	int size;
	printf("enter the size of array\n");
	scanf("%d",&size);
	int a[size],b[size],c[size],i;
	printf("enter the elements for array A\n");
	for (i=0;i<size;i++){
		scanf("%d",&a[i]);
		
	}
	printf("\n");
	printf("enter the elements for array B\n");
	for(i=0;i<size;i++){
		scanf("%d",&b[i]);
	}
	for (i=0;i<size;i++){
		c[i]=a[i]+b[i];
		printf("Sum is %d\n ",c[i]);
	}
	
}




//write a c program to perform insertion in a 1-D array





//write a c program to perform deletion in a 1-D array


#include<stdio.h>
int main(){
    int  a[100],position,i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        printf("Enter the position to be deleted");
        scanf("%d",&position);
    
    for(i=position-1;i<n;i++){
        a[i] = a[i+1];
    }

    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    
}




//make matrix using array


#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]--",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}






//perform addition of two 2-D matrix and store the answer in new matrix

#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j,c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]--",i,j);
			scanf("%d",&a[i][j]);}}
	printf("enter the elements for 2D array B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("b[%d][%d]--",i,j);
			scanf("%d",&b[i][j]);}}
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				c[i][j]=a[i][j]+b[i][j];}}
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%d ",c[i][j]);}
						printf("\n");}
	}






































