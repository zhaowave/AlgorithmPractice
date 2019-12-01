//
// Created by wei zhao on 2019-11-12.
//

#ifndef ALGORITHMPRATICE_LINKLIST_H
#define ALGORITHMPRATICE_LINKLIST_H

#include <iostream>

class LinkList {
public:
    static void reverseList();
public:
    LinkList(int d):data(d){};
    int data;
    LinkList *next;
};


#endif //ALGORITHMPRATICE_LINKLIST_H
