#include <iostream>
using namespace std;

void display(int a[], int size)
{
    for (int i = 0; i <=size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int temp;
    int j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void Quicksort(int a[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        Quicksort(a, low, partitionIndex - 1);
        Quicksort(a, partitionIndex + 1, high);
    }
}

int main()
{
    int a[] = {3, 5,2,13,12,3,2,13,45};
    display(a, 8);
    Quicksort(a, 0, 8);
    display(a, 8);
    return 0;
}