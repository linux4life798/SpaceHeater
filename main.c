#include <stdio.h>
#include <stdlib.h>

void dosomething(float *x, int num, int num2){
	x[num%10] += x[9-(num2%10)];
}

int main(){
	int num = 0, num2 = 0;
	float x[10];

	x[0] = 24.812105;
	x[1] = 54.1153;
	x[2] = 14.155;
	x[3] = 27.195305;
	x[4] = 94.876305;
	x[5] = 74.8155;
	x[6] = 68.815305;
	x[7] = 255.15785;
	x[8] = 2432.5305;
	x[9] = 2.05;

	// while 1!
	while(1){
		num += 1;
		for(num2 = 0; num2 < num; num++){
			dosomething(x, num, num2);
		}
	}
	return 0;
}
