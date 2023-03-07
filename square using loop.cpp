/*

#include<stdio.h>
int square();
int main(){
	int i;
	for (i=1;i<=10;i++){
		printf("%d\n",square());}
		
	}
	int square(){
		int a;
		printf("enter a value: ");
		scanf("%d",&a);
		return a*a;
	}
	*/
	
//  write a user define function to chech wheather no. is pelendrom or not

#include<stdio.h>
int square();
int main(){
	printf("%d \n",square());}

int square(){
	int a=123,d,rev,t;
	t=a;
	while(a!=0){
		d=a%10;
		a=a/10;
		rev=rev*10+d;
		
	}
	if(rev==t)
	{printf("is palindrome");
	
	}
}
































	
	
	
	






	
