#include <stdio.h>
#include <string.h>
int check(int a[]){
	int stringlength;
    int length=stringlength(a);
    if(length==8){
    return length;}
    else 
    return 1;
}


int specialchar(char a[]){
    int count=0;
    int length=stringlength(a);
    
    for(int i=0;i<length;i++){
 if(a[i]=='%' || a[i]=='!'|| a[i]=='^' || a[i]=='&' || a[i] =='*')
        count=1;
    }
    
    if(count==1)
    return count;
    else 
    return 0;
}

int secret(char a[],char b[]){
    int count=0;
    for(int i=0;i<8;i++){
        if(a[i]==b[i])
        count=count+1;
    }
    if(count==8)
    return count;
    else 
    return 0;
}

int main() {
    char password[100];
    char password_1[100];
    char name[50];
    int length= stringlength(name);
    int length_1= strlen(password);
    int checking,special;
     printf("Enter the name\n");
    scanf("%s",name);
    do{
    printf("Enter the password\n");
    scanf("%s",password);
     checking= check(password);
    
    special=specialchar(password);
   
      if(checking==1 || special==0)
    printf("Enter valid password again\n");
    }while(checking==1 || special==0);
     
printf("Enter the password to  display a secret msg\n");
scanf("%s",password_1);

int result=secret(password,password_1);

if(result==8)
printf("\n\n__You know what? You can be a great programmer. Keep Coding!\n\n");

else 
   printf("Password was not match soory!!");

    return 0;
}
