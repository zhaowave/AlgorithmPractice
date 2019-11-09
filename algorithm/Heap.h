//
// Created by zhaowei on 2019-10-26.
//

#ifndef LEET_HEAP_H
#define LEET_HEAP_H

#include <vector>

enum HeapType{
    HeapType_Default = 0,
    HeapType_BIG,
    HaepType_Little
};
class Heap {

public:
    void buildHeap(std::vector<int> &src,HeapType type);
    void heapSort();
    static void show(std::vector<int> vec);
    Heap() = default;
    ~Heap(){};
private:

    int len;
    HeapType heapType;
    std::vector<int> data;
private:
    void siftDown(int idx);
};


#endif //LEET_HEAP_H
