//
// Created by zhaowei on 2019-11-09.
//

#include "MergeSort.h"

void MergeSort::merge(std::vector<int>& arr, int l, int m, int r)
{

    auto it = arr.begin();
    int k = 0;
    int i = 0;
    int j = 0;
    int n1 = m - l + 1;
    int n2 = r - m;
    std::vector<int> L;
    L.resize(n1);
    std::vector<int> R;
    R.resize(n2);
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        k++;i++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        k++;j++;
    }
}

void MergeSort::mergeSort(std::vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}