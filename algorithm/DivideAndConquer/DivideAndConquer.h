//
// Created by zhaowei on 2019-11-09.
//

#ifndef LEET_DIVIDEANDCONQUER_H
#define LEET_DIVIDEANDCONQUER_H

#include <vector>

class DivideAndConquer {
public:
    DivideAndConquer() = default;
    ~DivideAndConquer();
//    二分查找
    virtual int binarySearch(std::vector<int>& arr, int left,int right, int target){return -1;}
//    归并排序
    virtual void mergeSort(std::vector<int>& arr, int left, int right){}
//    快排
    virtual void quickSort(std::vector<int>& arr, int left, int right){}
};


#endif //LEET_DIVIDEANDCONQUER_H
