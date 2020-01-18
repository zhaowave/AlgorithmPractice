#include <iostream>
#include "algorithm/Solution39.h"
#include "algorithm/Heap.h"
#include "algorithm/DivideAndConquer/BinarySearch.h"
#include "algorithm/DivideAndConquer/DivideAndConquer.h"
#include "algorithm/DivideAndConquer/MergeSort.h"
#include "algorithm/DivideAndConquer/QuictSort.h"

#include "DesignPatterns/StrategyPattern.h"
#include "DesignPatterns/FlyweightPattern.h"
#include "DesignPatterns/SimpleFactoryPattern.h"

#include "algorithm/LinkList/LinkList.h"

#include "algorithm/Strings/ReverseString.h"

#include "algorithm/Sort/InsertionSort.h"
#include "algorithm/Sort/BubbleSort.h"
#include "algorithm/Sort/SelectionSort.h"


using namespace std;
void RecPermute(string soFar, string rest)
{
    if (rest.empty()) {
        cout << soFar << endl;
    } else {
        for (int i = 0; i < rest.length(); i++) {
            string remaining = rest.substr(0, i) + rest.substr(i+1);
            RecPermute(soFar + rest[i], remaining);
        }
    }
}

void showVector(std::vector<int>& arr)
{
    auto iter = arr.begin();
    while(iter != arr.end()){
        std::cout<<*iter<<",";
        iter++;
    }
    cout<<"\n";
}

int main() {
//    std::vector<int> unsort = {8,4,9,2,5,7,0,1,10,11};
//    Heap *heap = new Heap();
//    heap->buildHeap(unsort,HeapType_Default);
//    Heap::show(unsort);
//    heap->heapSort();
//    delete heap;
//
//    string s = "ab";
//    RecPermute("",s);
//
//
//    int idx = 13;
//    float sum = 0;
//    int k = 1;
//    float per = 25;
//    for(idx ;idx >0;idx--){
//        sum = sum + idx * per;
//        k++;
//    }
//    cout<<"sum:"<<sum<<endl;

    std::vector<int> arr = { 2, 3, 40, 10, 5 };
    showVector(arr);
//    DivideAndConquer *dcms = new MergeSort();
//    dcms->mergeSort(arr,0,arr.size() - 1);
//    showVector(arr);

    DivideAndConquer *dcqs = new QuictSort();
    dcqs->quickSort(arr,0,arr.size() - 1);
    showVector(arr);
//    int x = 10;
//    DivideAndConquer *dcbs = new BinarySearch();
//    int result = dc->binarySearch(arr, 0, arr.size() - 1, x);
//    (result == -1) ? cout << "Element is not present in array"
//                   : cout << "Element is present at index " << result;
    StrategyContex::stratetyTest();
    FlyweightFactory::FlyweightTest();

    SimpleFactory::simpleFactoryTest();

    LinkList::reverseList();

    std::string s = "I love   china!";
    cout<<"after reverse:"<<ReverseString::reverseString(s)<<endl;

    cout<<"local reverse:"<<ReverseString::reverseLocal(s)<<endl;

    InsertionSort::runTestCase();

    BubbleSort::runTestCase();

    SelectionSort::runTestCase();

    return 0;
}