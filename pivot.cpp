#include <iostream>

using namespace std;

int binarySearch(int arr[], int l,int h, int k)
{
  if (h < l)
    return -1;

  int mid = (l + h)/2;
  if (k == arr[mid])
    return mid;

  if (k > arr[mid])
    return binarySearch(arr, (mid + 1), h, k);

  return binarySearch(arr, l, (mid -1), k);
}


int findPivot(int arr[], int low, int high)
{

  if (high < low) return -1;
  if (high == low) return low;

   int mid = (low + high)/2;
   if (mid < high && arr[mid] > arr[mid + 1])
    return mid;

   if (mid > low && arr[mid] < arr[mid - 1])
    return (mid-1);

   if (arr[low] >= arr[mid])
    return findPivot(arr, low, mid-1);

   return findPivot(arr, mid + 1, high);
}


int pivotedBinarySearch(int arr[], int n, int key)
{
  int pivot = findPivot(arr, 0, n-1);

  if (pivot == -1)
    return binarySearch(arr, 0, n-1, key);


  if (arr[pivot] == key)
    return pivot;

  if (arr[0] <= key)
    return binarySearch(arr, 0, pivot-1, key);
  return binarySearch(arr, pivot+1, n-1, key);
}


int main()
{
   int arr1[100],n,key;
   double x;
   cout << "Enter the number of elements in array: ";
   cin >> n;
   cout << "Enter all " << n <<" elements of array: ";
   for(int i=0;i<n;i++)
     cin >> arr1[i];
   cout << "Enter the key element: ";
   cin >> key;
   cout << "Index of the element is : " << pivotedBinarySearch(arr1, n, key)+1 << endl;
   return 0;
}
