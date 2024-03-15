#include<stdio.h>
#include<string.h>
int main(void){
	char a[5],*y[]={"Yes"},*n[]={"No"};
	
	printf("ÔjŠ„‡‚ğZo‚µ‚Ü‚·‚©HyYes/Noz\n");
	scanf("%s",a);
	if(strcmp(a,"Yes")==0){
		printf("1\n");
	}
	else if(strcmp(a,"No")==0){
		printf("0\n");
	}
	return(0);
}