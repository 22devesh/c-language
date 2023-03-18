/*

#include<stdio.h>
int sum(int *a,int *b);
int main(){
	int a1,b1;
	scanf("%d %d",&a1,&b1);
	printf("%d",sum(&a1,&b1));
	
}
int sum(int*a,int *b){
	return*a+*b;
}
*/

//write a user define function to swap two numbers using call by refrence

/*
#include<stdio.h>
int sum(int *a,int *b);
int main(){
	int a1,b1;
	scanf("%d %d",&a1,&b1);
	printf("%d",sum(&a1,&b1));
	}
	
int sum(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d",*a,*b);
} 
*/

//write a user define to find the factorial of number by using call by reference
#include<stdio.h>
int main(){
	int a1;
	scanf("%d",&a1);
	printf("%d",sum(&a1));
}
int sum(int *a){
	int temp=1,i;
	for(i=1;i<=*a;i++){
		temp=temp*i;
		
	}
	return temp;
}
























































