// heap sort using max-heap
#include <bits/stdc++.h>
using namespace std;

int *heap_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
        int parentIndex = (childIndex - 1) / 2;
        while (arr[parentIndex] < arr[childIndex])
        {
            if (parentIndex >= 0)
            {
                swap(arr[parentIndex], arr[childIndex]);
                childIndex = parentIndex;
                parentIndex = (childIndex - 1) / 2;
            }
        }
    }
    return arr;
}

// function which will delete the element from max-heap and printing one by one deleted value
void deletion(int *arr, int n)
{
    int lastIndex = n - 1;
    for (int i = 0; i < n; i++)
    {
        swap(arr[0], arr[lastIndex]);
        int ans = arr[lastIndex];
        lastIndex--;
        cout << ans << " ";
        int parentIndex = 0;

        int leftchildIndex = (2 * parentIndex) + 1;
        int rightchildIndex = (2 * parentIndex) + 2;

        while (leftchildIndex <= lastIndex)
        {
            int maxIndex = parentIndex;

            if (arr[leftchildIndex] > arr[maxIndex])
            {
                maxIndex = leftchildIndex;
            }

            if (rightchildIndex <= lastIndex && arr[rightchildIndex] > arr[maxIndex])
            {
                maxIndex = rightchildIndex;
            }

            if (maxIndex == parentIndex)
            {
                break;
            }

            swap(arr[parentIndex], arr[maxIndex]);
            parentIndex = maxIndex;
            leftchildIndex = 2 * parentIndex + 1;
            rightchildIndex = 2 * parentIndex + 2;
        }
    }
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
    int *ans = heap_sort(arr, n);
    deletion(ans, n);

    return 0;
}