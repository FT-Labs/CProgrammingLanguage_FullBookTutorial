#include <stdio.h>

char x1() { return 'a'; } // Function returning a char
char x2() { return 'b'; } // Function returning a char
char x3() { return 'c'; } // Function returning a char
char (*xF[])() = {&x1, &x2, &x3}; // Array of pointers to functions returning char
char (*(*x())[])() { return &(xF); } // Function returning a pointer to the above

int main()
{
    char (*x4)() = *(*x())[1]; // Pointer to a function returning char
	printf("%p\n", *xF);
	//(*xF)++;
	//(*xF) = &x3;
    printf("This is the value: %c\n", x4());
    printf("This is the value: %c\n", (*xF)());

	int _x, _x1, _x2;
	int* daytab[3] = {&_x, &_x1, &_x2};
	int tmp[3];
	//int (*daytab1)[3] = &(daytab1[0]);
	int _arr[] = {1,2,3};
	int (*daytab1)[3] = {&_arr};

	printf("%p\n", daytab1);
//	printf("%d\n", (*(*daytab1)+1));



	return 0;
}

