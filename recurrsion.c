
/*
#include<stdio.h>
int fact(int n);
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",fact(a));}
int fact(int n){
	if (n==1){
		return 1;
		
	}
	else{
		return n*fact(n-1);
}
	}
*/

//write a recurrsion function to print the sum of n natural numbers

/*
#include<stdio.h>
int sum(int n);
int main(){
	int a;
	scanf("%d",&a);o
	printf("%d",sum(a));}

int sum(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+sum(n-1);
	}
}
*/


//write a user define function to return reccursion to reverse a number;
/*
#include<stdio.h>
int rev(int n);
int r=0;
int main(){
	int a=123;
	printf("%d",rev(a));
}
int rev(int n){
	int d;
	if(n==0){
	return 0;}
	else{
		d=n%10;
		r=r*10+d;
		return rev(n/10);
	}
}
*/

#include<stdio.h>
int main(){
	int a=1,b=1,d=1;
	printf("%d ,%d , %d", ++a + ++a + a++,a++ + ++b,++d + d++ +a++);
}


















































