cmake_minimum_required(VERSION 3.13)
project(AlgorithmPratice)

set(CMAKE_CXX_STANDARD 14)

add_executable(AlgorithmPratice main.cpp
                algorithm/DivideAndConquer/BinarySearch.cpp
                algorithm/DivideAndConquer/DivideAndConquer.cpp
                algorithm/DivideAndConquer/MergeSort.cpp
                algorithm/DivideAndConquer/QuictSort.cpp
                algorithm/Heap.cpp
                algorithm/Solution.cpp
                algorithm/Solution39.cpp
        DesignPatterns/StrategyPattern.cpp DesignPatterns/StrategyPattern.h DesignPatterns/FlyweightPattern.cpp DesignPatterns/FlyweightPattern.h)