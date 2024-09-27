#include <stdio.h>

int main() {
	
	float a=5000/3600;
	float b=(5000 % 3600)/60;
	float c=(5000 % 3600) % 60;
 
  printf("%.0fhour, %.0fminute and %.0fsecond",a,b,c); 
  
    return 0;
}