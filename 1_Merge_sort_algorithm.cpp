#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int si, int ei)
{
    int mid = (si + ei) / 2;
    int i = si;
    int j = mid + 1;
    int *newarray = new int[ei - si + 1];

    int k = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            newarray[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            newarray[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        newarray[k] = arr[i];
        i++;
        k++;
    }

    while (j <= ei)
    {
        newarray[k] = arr[j];
        j++;
        k++;
    }

    int y = si;
    int z = 0;
    while (y <= ei)
    {
        arr[y]=newarray[z];
        y++;
        z++;
    }

    delete[] newarray;
}
void mergesort(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);
    merge(arr, si, ei);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]; // 6 34 32 12 4 6 43
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Initial array was : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int si = 0;
    int ei = n - 1;
    mergesort(arr, si, ei);
    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}