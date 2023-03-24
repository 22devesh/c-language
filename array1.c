//write a c program to take input from user using scanf and print the value in array 


#include<stdio.h>
int main(){
	int a[5];
	int i;
	printf("enter the array values\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}


//write a program to find the total sum of array


#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int i, sum=0;
printf("enter the array values\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\n ",arr[i]);
		sum+=arr[i];
	}

	printf("Sum of all elements of an array: %d",sum);
	return 0;	
}




//consider a array a1 which consists of 5 elements scan the value for arrayn  and write  
//a modify function to modify a value


#include<stdio.h>
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	modify(a);
}
void modify(int b[]){
	int i;
	for(i=0;i<5;i++){
		b[i]=b[i]*2;
		
	}
	for(i=0;i<5;i++){
		printf("%d ",b[i]);
	}
}


//consider an array with no of elements as 8 get the input from user for array.
//Define a function which display only the even indec value.


#include<stdio.h>
int main(){
	int a[8],j;
	printf("Enter the value for the array: ");
	for(j=0;j<5;j++){
		if(j=0;j<5;j++)
		scanf("%d",&A[i]);
	}
	for(i=0;i<5;i++){
	}
}


#include<stdio.h>
int main(){
	int s;
	printf("Enter the size of the array ");
	scanf("%d",&s);
	int a[s],i;
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++){
		printf("%d",&a[i]);
	}
}


































