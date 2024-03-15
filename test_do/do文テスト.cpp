#include<stdio.h>
int main(void){
	int a,b,c,rst;
	do{
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
		printf("c=");
		scanf("%d",&c);

		if(a<=0){
			printf("Error\n");
		}
		else if(b<=0){
			printf("Error\n");
		}
		else if(c<=0){
			printf("Error\n");
		}
		puts("1‚ÅƒŠƒZƒbƒg");
		scanf("%d",&rst);
	}	while(rst==1);
		
		return(0);
}
	
		