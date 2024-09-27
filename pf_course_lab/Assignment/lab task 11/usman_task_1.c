#include <stdio.h>
char check;
 int num;
 char a='y',b='Y';
 char c='n',d='N';
 
void table(int n) {
    do {
         printf("Enter a no:\n");
         scanf("%d",&num);
    for(int i=1;i<=10;i++){
         printf("%d X %d = %d\n",num,i,num*i);}
         
          printf("Do you want to print another table?\n Y/N");
          scanf("%s",&check);
     if (check==c || check==d)
          printf("thank you for using our program\n");
     else if ( (check!=c && check!=d ) && (check!=a && check!= b )) {
           printf("invalid input\n"); }
}
	 while(check==a || check== b);
}

	int main() {
	table(num);
	return 0;
}