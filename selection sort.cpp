#include <iostream>
#include <time.h>

using namespace std;

void selection_sort(int num, int arr[])
{
    int pos, small;
    int i, j;
    for(i = 0; i < num-2; i++)
    {
        pos = i;
        small = arr[i];
        for(j = i+1; j < num-1; j++)
        {
            if (arr[j] < small)
            {
                small = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    cout <<  "Sorted array is : ";
    for(i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[10], n;
    clock_t first, last;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    first = clock();
    selection_sort(n, arr);
    last = clock();
    cout << "Processor time required is: " << double(first - last) / CLOCKS_PER_SEC << "s";
    return 0;
}
