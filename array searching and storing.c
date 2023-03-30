
//Unsorted array

#include<stdio.h>
void main(){
int a[10]={2,6,4,8,10,12,89,68,45,37};
int i ,loc = -1,key;
printf("Enter integer value to search in array ");
scanf("%d",&key);
for(i=0;i<10;i++){
	if (a[i]==key){
		loc=i+1;
		break;
		
	}
}
if (loc!=-1){
	printf("Element found at %d",loc);
}	
else{
	printf("Elemnt not found");
	}
}
*/

//Sorted array in ascending order

#include<stdio.h>
int main(){
	int loc=-1,key,beg=0,last=9,mid;
	int a[10]={2,4,6,8,10,12,37,45,69,89};
	printf("Enter integer value to be search in array: ");
	scanf("%d",&key);
	while (beg<=last){
		mid=(beg+last)/2;
		if(a[mid]==key){
			loc=mid;
			break;}
			else if(a[mid]>key){
				last=mid-1;}
			else if(a[mid]<key){
				beg=mid+1;
			}
			}
			if(loc!=-1){
				printf("elements found at %d",loc+1);
			}
			else{
				printf("elemnt not found");
			}
			getch();
		}
		
		
*/
	

//Bubble sort
#include<stdio.h>
int main(){
	int a[10]={2,6,4,8,10,12,89,68,45,37};
	int pass,hold,i;
	printf("Data items in original order");
	for (i=0;i<10;i++){
		printf("%4d",a[i]);
	}
	for(pass=1;pass<10;++pass){
		for(i=0;i<10-1;i++){
			if(a[i]>a[i+1]){
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	printf("\nData items in ascending order");
	for(i=0;i<10;++i){
		printf("%4d",a[i]);
	}
}




































