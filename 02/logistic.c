#include <stdio.h>
int main() {
	FILE*fp;
	fp = fopen("logistic.txt", "a");
	int t;
	double x,r,k;
	x = 10.0; r =2.4; k =100.0;
	fprintf(fp, "%d %f\n", 0, x);
	for (t = 0; t < 300; t++) {
		x = x + r*(1 - x / k)*x;
		fprintf(fp, "%d %f\n",t ,x );
	}
	fclose(fp);
	return 0;
}
