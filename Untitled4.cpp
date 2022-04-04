#include <stdio.h>
int main (){
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);
		if (a>b){
			if (a>c){
				printf ("a max");
			}else{
				printf("c max");
				
			}
			}else{
		if(b>c){
			printf("b max");
		}else{
			printf("c max");
		}
			}
}
