#include<stdio.h>

int main()
{ 
	/*
	 * understanding pointer and arrays in c. proper foundation for memory managment manipulation.
	short notes taken on the shorthand notations
	*p same as *(p + i);
	p same as &a;

	 */
	
	int a; 
	int* p;

	p = &a;

	printf("address in memo at a %d\n", p);

	a = 67;

	printf("value in memo address stored in a variable a %d\n", *p);


	printf("size of the bytes in memo stored at variable a %d bytes", sizeof(*p));
	/*
	 * But now we want to delve more deeper on thi topic and there we want to leverage the power of pointers and arrays.
	 * The outputs of printf function thats prints two similar addresses in memory storing diffirent interger variables */

	int b = 21;
	p = &b;

	printf("the address of b variable in memo %d\n", p);

	/*
	 *The fourth print statement shows how to print the values stored in the b variable, in this case p as a pointer variable.*/

	printf("value stored in b variable and a pointer variable p %d\n", *p);

	printf("size of the bytes in memo stored at b variable b %d bytes", sizeof(*p));

	/*
	 * The above snippets of code shows a pointer variable p storing two diff interger varibles storing diff integer values and the sizeof() function shows bytes stored in interger variable.
	 * The next step will explore more on pointer arithmetic..*/
} 
