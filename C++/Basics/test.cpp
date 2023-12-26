#include <iostream>
using namespace std;

int* shift_zeroes(int *array, int size)
{
    int count = size - 1;

    // Move non-zero elements towards the right in the array
    for (int i = size - 1; i >= 0; i--)
    {
        if (array[i] != 0)
        {
            swap(array[count--], array[i]);
        }
    }

    return array;
}

int main()
{
    int len = 5;
    int arr[5] = {1, 0, 3, 0, 5};
    int* a = shift_zeroes(arr, len);

    // Shifted array
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
