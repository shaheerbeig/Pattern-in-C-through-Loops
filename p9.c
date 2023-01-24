#include<stdio.h>
int main(){
	int i , j , k ;
	for(i=1;i<=5;i++){
		for(k=4;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}		
			printf("\n");
	}
	for(i=1;i<=5;i++){
		for(k=2;k<=i;k++){
			printf(" ");
		}
		for(j=10;j>2*i-1;j--){
			printf("*");
		}
		printf("\n");
	}
}