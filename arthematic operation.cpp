//perform all the arthematic opereation using 

#include<stdio.h>
int main(){
	int a,b;
	char op;
	printf("Enter two numbers: ");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%c",&op);
	switch (op){
		case '+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d",a,b,a*b);
			break;
		case '/':
			printf("%d/%d=%d",a,b,a/b);
			break;
			default:
				printf("Invalid Numbers");	
	}
	return 0;
}
