# include <stdio.h>
int main(){
	int a;
	scanf ("%d",&a);
	int b;
	scanf("%d",&b);
	int c;
	scanf("%d",&c);
	int max;
	max=a;
	if(b>max){
		max=b;
	}
	if(c> max){
		max=c;
	}
	printf("so lon nhat:%d", max);
}
