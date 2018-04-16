#include <stdio.h>

int main() {
	int i;
	FILE *fp;
	fp = fopen("for.txt", "w");
	for (i = 0; i < 100; i++) {
		fprintf(fp, "%d\n", i);
}
	fclose(fp);
		return 0;
}
