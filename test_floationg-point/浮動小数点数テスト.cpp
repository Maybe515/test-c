#include<stdio.h>
int main(void){
	double a,b,c;
	do{
		char rst;
		printf("a=");
		scanf("%lf",&a);
		printf("b=");
		scanf("%lf",&b);
		
		if(a>b){
		c=a/b;
		}
		else{
		c=b/a;
		}
		printf("a=%.1lf,b=%.1lf,c=%.1lf\n",a,b,c);
		
		puts("Continute to input '1'");
		scanf("%c",&rst);
		printf("\n");
	}	while(getchar()=='1');
	return(0);
}
		