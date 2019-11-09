//
// Created by zhaowei on 2019-10-26.
//

#include "Heap.h"
#include <iostream>
void Heap::buildHeap(std::vector<int> &src,HeapType type){
    data = src;
    heapType = type;
    len = static_cast<int>(data.size());

    for(int i = len/2 - 1; i >= 0; --i){
        siftDown(i);
    }
    show(data);
}


void Heap::siftDown(int i){
    while(i*2 + 1 < len){
        int t = i;
        //left
        if(data[i] < data[2*i + 1]){
            t = 2*i+1;
        }
        //right
        if(2*i+2 < len){
            if(data[t] < data[2*i+2]){
                t = 2*i+2;
            }
        }
        if(t != i){
            std::swap(data[t],data[i]);
            i = t;
        } else {
            break;
        }
    }
}


void Heap::heapSort() {
    for(int i = 0; i < data.size(); i++){
        std::swap(data[0],data[len - 1]);
        len = len - 1;
        siftDown(0);
    }
    show(data);
}



void Heap::show(std::vector<int> vec) {
    for(auto &x : vec){
        std::cout<<x<<"-";
    }
    std::cout<<"\n";
}