#include<stdio.h>
float pizza()
{
	float diameter,slice_area_size,radius,area,number_of_slice;
	diameter=10.2;
	slice_area_size=14.125;
	radius=diameter/2;
	area=(3.142)*(radius*radius);
	number_of_slice=area/slice_area_size;    
	return number_of_slice;
	
}	
	int main(){
	float slices = pizza();
	printf("Number of slice are %f",slices);
	return 0;
	}