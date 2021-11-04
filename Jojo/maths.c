int min_array_value(int* arr, int size)
{
	int min = (-2'147'483'647 - 1);

	for (int i = 0; i < size; i++)
	{
		(arr[i] < min) && (min = arr[i]);
	}

	return min;
}

int max_array_value(int* arr, int size)
{
    int max = 2'147'483'647;

    for (int i = 0; i < size; i++)
    {
        (arr[i] < max) && (max = arr[i]);
    }

    return max;
}

int* sorted_descending_array(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int nbMin = i;

        for (int j = nbMin; j < size; j++)
        {
            if (arr[j] > arr[nbMin])
            {
                nbMin = j;
            }
        }

        if (i != nbMin)
        {
            int temp = arr[i];
            arr[i] = arr[nbMin];
            arr[nbMin] = temp;
        }
    }

    return arr;
}

int* sorted_ascending_array(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int nbMin = i;

        for (int j = nbMin; j < size; j++)
        {
            if (arr[j] < arr[nbMin])
            {
                nbMin = j;
            }
        }

        if (i != nbMin)
        {
            int temp = arr[i];
            arr[i] = arr[nbMin];
            arr[nbMin] = temp;
        }
    }

    return arr;
}
