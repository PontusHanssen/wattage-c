#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	FILE *fp;
	if((fp = fopen("/sys/class/power_supply/BAT0/power_now", "r")) == NULL) {
		return 0;
	}
	else { 
		float mW;
		fscanf(fp, "%f", &mW);
		fclose(fp);
		printf("%.2fW | ", mW/1000000);
		return 0;
	}
}
