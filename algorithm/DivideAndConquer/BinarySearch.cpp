//
// Created by zhaowei on 2019-11-09.
//

#include "BinarySearch.h"

/**
 *  @param   arr 整型数组 vector
 *           left 搜索的开始位置
 *           right 搜索的结束位置
 *           target 搜索key
 *
 *
 * */

int BinarySearch::binarySearch(std::vector<int>& arr, int left,int right, int target)
{
    if(left < right)
    {
        int mid = left + (right - left)/2;
        if(arr.at(mid) == target)
        {
            return mid;
        }
        if(arr.at(mid) < target)
        {
            return binarySearch(arr, mid+1, right, target);
        }
        return binarySearch(arr, left, mid -1 ,target);
    }
    return -1;
}