// Quick sort

#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int si, int ei)
{
    int pivot = arr[si];
    int count = si;
    for (int i = si + 1; i <= ei; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    // Swapping the pivot element with element which is present at the correct position of pivot element.
    swap(arr[si], arr[count]);

    int i = si;
    int j = ei;
    while (i < count && j > count)
    {

        if (arr[i] < pivot)
        {
            i++;
        }
        else if (arr[j] >= pivot)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return count;
}

void quick_sort(int *arr, int si, int ei)
{
    // Base case
    if (si >= ei)
    {
        return;
    }
    int count = partition(arr, si, ei);

    quick_sort(arr, si, count - 1);
    quick_sort(arr, count + 1, ei);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array was : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quick_sort(arr, 0, n - 1);
    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}