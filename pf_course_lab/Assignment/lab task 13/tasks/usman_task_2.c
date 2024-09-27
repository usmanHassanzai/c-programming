#include<stdio.h>
int main(){
	int a[10];
	int count_even=0;
	int count_odd=0;
		printf("enter a number");
	for(int i=0;i<10;i++){
	
		scanf("\n %d",&a[i]);
	}for(int i=0;i<10;i++){
	
		if(a[i]%2==0){
			printf("\n even : %d",a[i]);
			count_even++;
			
		}
		else{
			printf("\n odd : %d",a[i]);
			count_odd++;
			
		}
		
	}
	printf("\ntotal even %d",count_even);
	printf("\ntotal odd %d",count_odd);
}

