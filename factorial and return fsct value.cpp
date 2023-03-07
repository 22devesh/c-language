//write a user defined function to find factorial of a input and return the factorial value.


#include<stdio.h>
int factor();

int main(){
	printf("factor =%d",factor());

}
int factor(){
	int a1,i,m=1;
	printf("enter a number: ");
	scanf("%d",&a1);
	for (i=1;i<=a1;i++){
		m=m*i;
		
	}
	return m;
}

