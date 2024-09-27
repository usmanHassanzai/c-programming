#include<stdio.h>
void eldest(int,int,int);
int main(){
	int amir,ali,haider;
	printf("Enter age of amir");
	scanf(" %d",&amir);
	printf("\nEnter age of ali");
	scanf(" %d",&ali);
	printf("\nEnter age of haider");
	scanf(" %d",&haider);
	eldest(amir,ali,haider);
}
void eldest(int amir,int ali,int haider){
	if(amir>ali && amir>haider){
		printf("amir is elder");
	}
	else if(ali>haider && ali>amir){
			printf("ali is elder");
	}
	else
	{
		printf("haider is elder");
	}
	}