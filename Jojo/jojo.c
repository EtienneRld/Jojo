#include <stdio.h>
#include "maths.h"

int main()
{
	int arr[] = { -16514541, 654, 1, 4857, 42 };

	int size = sizeof(arr) / sizeof(arr[0]);
	
	sorted_ascending_array(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
