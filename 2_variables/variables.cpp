#include <iostream>

int  main(void)
{
	float f=19.21; // 실수
	long int i=21; // this is int with more longer integers
	long double d=30;

	printf("<자료형의 크기 [bytes]>\n");
	printf(" char형 = %d\n", sizeof (char));
	printf(" short형 = %d\n", sizeof (short));
		
	printf(" This is float %f\n", f);
	printf(" This is long %d\n", i);
	printf(" This is double %f\n", d);
}

