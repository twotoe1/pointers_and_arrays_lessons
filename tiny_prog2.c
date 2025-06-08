#include<stdio.h>

/*
 *The program shows how an array of elements can be stored at an address at the same time showing individual addresses in the memo for each element.
 more scenarios will be drawn from the code showcasing the power of pointers.
 */

int main()
{
	int x[] = {2,3,4};
	int* ptr;
	
	ptr = x;

	printf("Array memo address: %d\n", ptr);/*
	The function printf(); shows the address at which pointer variable ptr points to*/
	int arr_size = sizeof(x)/sizeof(x[0]);
	/*
	The variable arr_size stores the computational division by dividing the array sizeof() elements by individual(no. of elements in the array)*/

	printf("%d\n", arr_size);

	/*NOTE: The arr_size prints the total number bytes stored in the array if the size is unknown */

	for(int i = 0; i < arr_size; i ++)
		{
			
			printf("Address of each element in memo: %d\n", (ptr + i));

		}
/*We need to understand the power of pointers as the lid to a simple and effecient code. The & sign shows the address at which the object has bewn assigned to
The astericks operator show the value in memo assigned to the object in rhe address memo*/


/*	printf("address of the first var in memo %d\n", p);

	printf("next address of the var in memo %d\n", (p + 1));

	printf("the value at p + 1: %d\n", (p + 1));
*/
}
