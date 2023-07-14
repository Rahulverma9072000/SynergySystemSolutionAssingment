// Write a program to sort the items of an array.
#include <iostream>
using namespace std;
// Merge Function using in Merge Sort
void merge(int *arr, int s, int m, int e)
{
    // So i am assuning first array from s to m
    // second arrau from m+1 to e
    // Taking 2 pointer i and j
    int i = s;
    int j = m + 1;
    // taking 3rd pointer for the new storage
    int k = 0;
    int *data = new int[e - s + 1];
    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            data[k++] = arr[i++];
        }
        else
        {
            data[k++] = arr[j++];
        }
    }
    // Now if second array is finished and first array is left
    while (i <= m)
    {
        data[k++] = arr[i++];
    }
    // Now if first array is finished and seond array is left
    while (j <= e)
    {
        data[k++] = arr[j++];
    }
    // Copying back to the array
    // with proper index
    for (int i = 0; i < k; i++)
    {
        arr[i + s] = data[i];
    }
}
// Merge Sort
void mergeSort(int *arr, int s, int e)
{
    if (s < e)
        {
            int m = (s + e) / 2;
            mergeSort(arr, s, m);
            mergeSort(arr, m + 1, e);
            merge(arr, s, m, e);
        }
}
int main()
{
    int n;
    cout << "Enter number of Elements in an Array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the Elements of an Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Calling Merge Sort
    mergeSort(arr, 0, n - 1);
    // Printing Sorted Array
    cout << "Sorted Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}