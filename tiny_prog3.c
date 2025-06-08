#include<stdio.h>
/*
 *The program shows the power of indirection or dereferencing with a pointer variable passed as an arguement to the caller function. The function shows an array being passed on as an arguement to the calling function.

 * */
int ptr_addresses(int* ptr, int arr_size)
{
	for(int i = 0; i < arr_size; i++)
	{
		printf("address of element %d\n, value at the address: %d\n", ptr + i, *(ptr + i));	
	}
}

int main()
{
	int a[] = {5,8,3}; /*Elements in the array, thats determines its size*/
	int* hp; //declarer pointer variable

	hp = a;/*hp points to a, thats the address in memo of varible a is stored at hp variable*/
	int arr_size = sizeof(a)/sizeof(a[0]); /*arr_size holds the value of the  expression that computes the length of an array.
	The value is shown by dividing the length of an array by a single element or item*/
	
	ptr_addresses(hp, arr_size); /*The pointer and array size are passed as parameter to the called function*/

}
