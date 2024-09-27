#include<stdio.h>
int main(){
	int min;
	int max;
	float average_marks;
	float a[9];
	float sum=0.0;
	for(int i=0;i<9;i++){
		scanf("%f",&a[i]);
		sum=sum+a[i];
		
	} 
	float avg_marks=sum/10;
	printf("average marks %0.2f",avg_marks);
	max=0;
	for(int i=1;i<9;i++){
		if(max<=a[i]){
			max=a[i];
			
		
	
	}
		min=a[0];
		for(int i=1;i<9;i++){
			if (min>=a[i]){
			min=a[i];
			}
		}
		
	}
		printf("\n maximum marks is %d",max);
		printf("\nminimum marks is %d",min);
}
