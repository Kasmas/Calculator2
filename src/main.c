#include "function.h"
#include <stdio.h>
#include <math.h>

 int main() 
{
	int a, b, c, d = 0;
	char key;
	do {

	printf("%d\n", d);

		printf("Select operation\n");
		printf("1. slozhenye\n");
		printf("2. vichitanye\n");
		printf("3. umnozhenye\n");
		printf("4. delenye\n");
		printf("ESC. Exit\n");
		scanf("%d", &a);
	    key = a;
	    
	switch (key)
	{
		case 1:
			printf ("Enter first value:");
			scanf ("%d", &b);
			printf ("Enter second value:");
			scanf ("%d", &c);
			d = slozhenye(b, c);
			printf ("%d\n", d);
			break;
		case 2:
			printf ("Enter first value:");
			scanf ("%d", &b);
			printf ("Enter second value:");
			scanf ("%d", &c);
			d = vichitanye(b, c);
			printf ("%d\n", d);
			break;
		case 3:
			printf ("Enter first value:");
			scanf ("%d", &b);
			printf ("Enter second value:");
			scanf ("%d", &c);
			d = umnozhenye(b, c);
		    printf ("%d\n", d);
			break;
		case 4:
			printf ("Enter first value:");
			scanf ("%d", &b);
			printf ("Enter second value:");
			scanf ("%d", &c);
			d = delenye(b, c);
			printf ("%d\n", d);
			break;
	}
	}
    while (key != 27);
	return 0;
}
