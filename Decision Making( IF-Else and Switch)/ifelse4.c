#include <stdio.h>
void main(){
	int a,b;
	printf("Enter 1st value: ");
	scanf("%d", &a) ;
	printf("Enter 2nd value: ");
	scanf("%d", &b) ;
	if(a>b){    //20>30
		printf("%d > %d", a, b);
	}else if(b>a){
		printf("%d > %d", b, a);
	}else{
		printf("%d = %d", b, a);
	}	
	printf("\nProgram Last Line") ;	
}
