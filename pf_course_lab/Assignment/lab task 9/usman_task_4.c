#include<stdio.h>
void attendance(int classesAttended,int classesTotal,int x);
int main(){
	int classesAttended,classesTotal;
	
	printf("Enter total classes scheduled:");
	scanf("%d",&classesTotal);
	printf("\nEnter total classes attended:");
	scanf("%d",&classesAttended);
	int x=(classesAttended*100)/classesTotal;
	printf("\nyour attendance is %d",x);
	attendance(classesAttended,classesTotal,x);
	
}
void attendance(int classesAttended,int classesTotal,int x){
	if(x>=80){
		printf("\nYou are allowed to sit in the exam");
	}
	else{
		printf("\nYou are not allowed to sit in the exam");
	}


}