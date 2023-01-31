#include <iostream>
#include <memory>
#include <list>
#include "algorithm/Solution39.h"
#include "algorithm/Heap.h"
#include "algorithm/DivideAndConquer/BinarySearch.h"
#include "algorithm/DivideAndConquer/DivideAndConquer.h"
#include "algorithm/DivideAndConquer/MergeSort.h"
#include "algorithm/DivideAndConquer/QuictSort.h"

#include "DesignPatterns/StrategyPattern.h"
#include "DesignPatterns/FlyweightPattern.h"
#include "DesignPatterns/SimpleFactoryPattern.h"
#include "DesignPatterns/ProxyPattern.h"
#include "DesignPatterns/BuilderPattern.h"

#include "algorithm/LinkList/LinkList.h"

#include "algorithm/Strings/ReverseString.h"

#include "algorithm/Sort/InsertionSort.h"
#include "algorithm/Sort/BubbleSort.h"
#include "algorithm/Sort/SelectionSort.h"
#include "algorithm/Sort/QuickSort.h"
#include "Cpp/CppClass.h"
#include "Cpp/VirtualDestructor.h"

#include "Cpp/TemplateTest.h"
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <tuple>

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

    QuickSort::runTestCase();

//    A *a = new A("A");
//    A *b = new B("B");
//    A *c = new C("C");
    std::shared_ptr<A> a(new A("A"));
    std::shared_ptr<A> b(new B("B"));
    std::shared_ptr<A> c(new C("C"));
    
    std::cout<<"==== a ref count :"<<a.use_count()<<std::endl;
    std::vector<std::shared_ptr<A>> v = {a,b,c};
//使用 const 引用能减少对智能指针的一次引用
    for (const auto& p : v) {
        std::cout<<"==="<<p.use_count()<<"===\n";
    }
    std::cout<<"==== a ref count :"<<a.use_count()<<std::endl;


    std::vector<int> recurNums = {1,2,3,4};

    /**
     * 1 2 3 4   12 13 14 23 24 34 123 124 123 1234
     * */
//    for(int i = 0; i < recurNums.size(); ++i){
//
//    }


//    const int vSize = 100000;
//    std::vector<int> initv(vSize,1);
//    int ret = 0;
//    std::vector<std::vector<int>> vt(vSize,initv);
//    for(int i = 0; i < vt.size(); ++i){
//        for(int j = 0;j < initv.size(); ++j) {
//            ret += vt[j][i];
//        }
//    }
//    struct rusage usage;
//    int retusage = getrusage(RUSAGE_SELF,&usage);
//
//    std::cout<<"page defaule:"<<usage.ru_majflt<<" ret:"<<ret<<std::endl;
//    std::cout<<"page reclame:"<<usage.ru_minflt<<std::endl;

    class LRUCache {
        class Node {
        public:
            int k;
            int v;
            struct Node* p = nullptr;
            struct Node* n = nullptr;
            Node(int key, int val):k(key),v(val){}

        };
    public:
        int cap;
        int length = 0;
        map<int ,Node*> m;
        Node* h;//head
        Node* t;//tail
        LRUCache(int capacity) {
            cap = capacity;
            h = nullptr;
            t = nullptr;
        }

        int get(int key) {
            auto i = m.find(key);
            if(i != m.end()){
                updateNode(m[key],key,m[key]->v);
                return m[key]->v;
            }
            return -1;
        }

        void put(int key, int value) {
            auto i = m.find(key);
            if(i != m.end()){
                updateNode(m[key],key,value);
            } else {
                length++;
                if(length > cap){
                    auto it = m.find(t->k);
                    if(it != m.end()){
                        m.erase(it);
                    }
                    updateNode(t,key,value);
                } else {
                    updateNode(nullptr,key,value);
                }
                m[key] = h;
            }
        }

        void insertHead(int k, int v)
        {
            Node* node = new Node(k,v);
            if(!h){
                h = node;
                t = h;
                h->p = h;
                h->n = h;
            } else {
                node->n = h;
                h->p = node;
                h = node;
            }
        }
        void move2Head(Node* node)
        {
            if(node->k != h->k){

                if(node == t){
                    t = node->p;
                }

                node->p->n = node->n;
                if(node->n){
                    node->n->p = node->p;
                }
                node->p = nullptr;
                node->n = h;
                h->p = node;
                h = node;
            }
        }

        void updateNode(Node* node,int k, int v)
        {
            if(node){
                node->k = k;
                node->v = v;
                move2Head(node);
            } else {
                insertHead(k,v);
            }

        }

    };
//    LRUCache *lru = new LRUCache(2);
//
//    lru->put(1,1);
//    lru->put(2,2);
//    std::cout<<"key 1:"<<lru->get(1)<<std::endl;
//    lru->put(3,3);
//    std::cout<<"key 1:"<<lru->get(2)<<std::endl;
//    std::cout<<"key 1:"<<lru->get(3)<<std::endl;
//    std::reverse();

    class A {
    public:
        A(){std::cout<<"A()"<<std::endl;}
        A(const A& a){std::cout<<"A(A& a)"<<std::endl; *this = a;}
//        A(const A&& a){std::cout<<"A(A&& a)"<<std::endl; *this = std::move(a);}
        ~A(){std::cout<<"~A()"<<std::endl;}
    };

    std::shared_ptr<A> aaa = std::shared_ptr<A>(new A());
    std::shared_ptr<A> bbb = std::shared_ptr<A>(new A());
    std::shared_ptr<A> ccc = std::shared_ptr<A>(new A());

    std::cout<<"---------- end 1-----------"<<std::endl;
    std::vector<std::shared_ptr<A>> vct;

    typedef std::shared_ptr<std::array<A, 10>>  dataType;
    std::tuple<A, int> tInstance;
    std::vector<dataType> vctObj;
    vctObj.resize(20);
    std::cout<<"---------- endbbbb-----------"<<vctObj[0]<<std::endl;
    std::cout<<"---------- endaaa-----------"<<&std::get<0>(tInstance)<<std::endl;
    vct.push_back(aaa);
    vct.push_back(bbb);
    vct.push_back(ccc);
    std::cout<<"---------- end-----------"<<aaa.use_count()<<std::endl;
    std::vector<std::shared_ptr<A>> vct1 = vct;
//    std::cout<<"-----"<<vct.capacity()<<std::endl;
//    vct.emplace_back(aaa);
//    std::cout<<"-----"<<vct.capacity()<<vct.data()<<std::endl;
//    vct.emplace_back(bbb);
//    std::cout<<"-----"<<vct.capacity()<<vct.data()<<std::endl;
//    vct.emplace_back(ccc);
//    std::cout<<"============"<<vct.capacity()<<vct.data()<<std::endl;
//    vct.erase(vct.begin() + 1);
//    std::cout<<vct.size();
//    vct.erase(vct.begin());

    std::cout<<"---------- end-----------"<<std::endl;

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

//    using namespace std;
//    vector<int> va(10,2);
//    cout<<"va[0] "<<va[0]<<endl;
//    va.resize(20);
//    cout<<"va[0] "<<va[0]<<endl;
//
//    list<int> ll(10,3);
//    cout<<"ll[0] "<<*ll.begin()<<endl;
//    ll.resize(20);
//    cout<<"ll[0] "<<*ll.begin()<<endl;

ProxyPattern::ProxyTest();


ABase *aBase = new ADerived();
delete aBase;

cout<<"-----------I'm slash------------"<<endl;


vector<int> vAMove = {1,2,3,4,5};
vector<int> vBMove ;
    cout<<vAMove.data()<<"----"<<vBMove.data()<<endl;
vBMove = std::move(vAMove);
cout<<vAMove.data()<<"----"<<vBMove.data()<<endl;


A *aVal = new A();
A *bVal = new A();

shared_ptr<A> sA = make_shared<A>();
shared_ptr<A> sB = make_shared<A>();

    cout<<sA.get()<<"---"<<sB.get()<<endl;
    sB = std::move(sA);
    cout<<sA.get()<<"---"<<sB.get()<<endl;

//cout<<aVal<<"---"<<bVal<<endl;
//*bVal = std::move(*aVal);
//cout<<aVal<<"---"<<bVal<<endl;



    shared_ptr<BBase> bBase = make_shared<BBase>();
    bBase->desc();

//    CarDirector *director = new CarDirector();
//    const shared_ptr<CarBuilder> builder = shared_ptr<AUDICarBuilder>(new AUDICarBuilder());
//    director->setBuilder(builder);
//    director->buildCar();
//    auto&& car = director->getCar();
//
//    const shared_ptr<CarBuilder> builder1 = shared_ptr<BENZCarBuilder>(new BENZCarBuilder());
//    director->setBuilder(builder1);
//    director->buildCar();
//    auto&& car1 = director->getCar();


    shared_ptr<A> tA = make_shared<A>();
    shared_ptr<A>& tB = tA;
    cout<<"address:"<<tA.get()<<"---"<<tB.get()<<endl;
    tA.reset(new A());
    cout<<"address:"<<tA.get()<<"---"<<tB.get()<<endl;


    class DelTest
    {
    private:
        int num = 2;
    public:
        DelTest(int a):num(a){}
        void test(){cout<<"DelTest:"<<num<<endl;}
    };

//    DelTest *dt = new DelTest(5);
//    int dts = sizeof(*dt);
////    cout<<"dt addr:"<<&(dt->test())<<endl;
//    delete dt;
//    memset(dt,0,dts);
////    dt = nullptr;
//    dt->test();
//    DelTest::test();
//shared_ptr<DelTest> dttest = shared_ptr<DelTest>(new DelTest(9));
//dttest.reset();
//dttest->test();



    TempTest<int>* tempTest = new TempTest<int>(4);
    vector<float> pas;
    string spa = "da";
    tempTest->print(spa,pas);
    return 0;

}