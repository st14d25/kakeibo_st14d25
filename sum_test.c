#include <stdio.h>

/* 合計値を求める関数 */
int sum(int payments[]);
int sum(int payments[]) {

	int i;
	int sum = 0;
	int payments_size = sizeof(payments) / sizeof(int);
	
	printf("payments_size = %d\n",payments_size);
	
	for (i = 0; i <= payments_size; i++) {
		printf("payments_size[%d] = %d\n", i, payments[i]);
		sum = sum + payments[i];
	}
	return sum;
}

int main(void) {
	int payments[12] = {10,200,10,400,200,100,500,60,20,60,20,6020};
	int i;
	/*for(i = 0;i <= sizeof(payments)/sizeof(int) - 1; i++) {
		printf("payment[%d] = %d\n",i , payments[i]);
	}
	*/
	printf("sum = %d\n",sum(payments));	

	return 0;
}
