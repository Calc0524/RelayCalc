#include <stdio.h>

int main(){
	int a, b;
	int cal;
	
	printf("계산할 수식을 입력해주세요 (ex. 1+2)\n");
	scanf("%d%c%d",&a, &cal, &b);
	if(cal == '+'){
		printf("%d + %d = %d",a,b,a+b);
	}
	else if(cal == '-'){
		printf("%d - %d = %d",a,b,a-b);
	}
	else if (cal == '*') {
		printf("%d * %d = %d", a, b, a * b);
	}
	else if (cal == '/') {
		printf("%d / %d = %d", a, b, a / b);
	}
	//:carrot:
}
