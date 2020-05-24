#include <stdio.h>

int main(){
	int a, b;
	int cal;
	scanf("%d",&a);
	scanf("%c",&cal);
	scanf("%d",&b);
	if(cal == '+'){
		printf("%d + %d = %d",a,b,a+b);
	}
}