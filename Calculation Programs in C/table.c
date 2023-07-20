#include <stdio.h>
void main(){
	int t, s, e;
	printf("Enter the number for Table you want: ");
	scanf("%d", &t);
	printf("Enter the Starting point: ");
	scanf("%d", &s);
	printf("Enter the End Point: ");
	scanf("%d", &e);
	for( ; s<=e; s++){
	    printf("%d x %d = %d\n", t, s, t*s) ; 
	}
}
