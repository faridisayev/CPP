// Bubble sort integers

#include <iostream>

void sort(int array[], int size);

int main()
{
    int array[] = {123, 23, 2, 9929, 5, 2, 76, 84, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    
    std::cout << '\n';
    for (int element: array)
    {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];

                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}