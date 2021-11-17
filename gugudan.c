/**
#include <stdio.h>

void main() {
	int i = 0, j = 0;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}

#include <stdio.h>

void main() {
	int i = 0, j = 0;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %2d ", j, i, i * j);
		}
		printf("\n");
	}
}


#include <stdio.h>

void main() {
	int i = 0, j = 0;

		for (i = 1; i <= 9; i++) {
			for (j = 1; j <= 9; j++) {
				if (j % 3 == 0) {
					printf("\n");
				}
			}
			printf("%d x %d = %2d ", j, i, i * j);
		}
}
**/

#include <stdio.h>

void main() {
	int i = 0, j = 0;

	i = 1;
	while (i <= 9) {
		j = 1;
		while (j <= 9) {
			printf("%d x %d = %d\n ", i, j, i * j);
			j++;
		}
		i++;
		printf("\n");
	}
}