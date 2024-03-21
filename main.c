#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n, key, ans;
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d", &key);
    ans= binary_search(arr, 0, n-1, key);
    if (ans==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("%d", ans);
    }
}
