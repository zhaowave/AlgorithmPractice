//
// Created by wei zhao on 2019-11-12.
//

#include "LinkList.h"


void LinkList::reverseList(){
    LinkList *head = new LinkList(-1);
    LinkList *p1 = new LinkList(1);
    LinkList *p2 = new LinkList(2);
    LinkList *p3 = new LinkList(3);
    LinkList *p4 = new LinkList(4);
    LinkList *p5 = new LinkList(5);
    head->next = p1;p1->next = p2;p2->next = p3;p3->next = p4;p4->next = p5;p5->next = nullptr;

    LinkList *n1 = head->next;
    if(n1 == nullptr){
        return;
    }
    LinkList *n2 = n1->next;
    while(n2){
        n1->next = n2->next;
        n2->next = head->next;
        head->next = n2;
        n2 = n1->next;
    }
    while(head){
        std::cout<<head->data<<",";
        head = head->next;
    }
    std::cout<<std::endl;
}