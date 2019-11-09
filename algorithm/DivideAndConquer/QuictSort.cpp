//
// Created by zhaowei on 2019-11-09.
//

#include "QuictSort.h"

int QuictSort::partition(std::vector<int>& arr, int l, int r)
{
    int pivot = arr[r]; // pivot
    int i = (l - 1); // Index of smaller element

    for (int j = l; j <= r - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[r]);
    return (i + 1);


}

void QuictSort::quickSort(std::vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int pos = partition(arr, left, right);
        quickSort(arr, left, pos - 1);
        quickSort(arr, pos+1, right);
    }

}