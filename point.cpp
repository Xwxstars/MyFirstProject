#include <iostream>
// #include <stdlib.h>
using  namespace std;

typedef void (*prt)(int *p);

void hit1(int *p)
{
    *p=*p-10;
}

void hit2(int *p){
    *p=*p+20;
}
int main()
{
    int ph=100;
    int *p1=nullptr;
    p1=&ph;
    void (*p2)(int *p)=hit1;
    p2(p1);
    cout<<ph<<endl;

    void (*p3)(int *p)=hit2;
    p3(p1);
    cout<<ph<<endl;

    prt p5;
    p5=hit2;
    p5(p1);
    cout<<ph<<endl;



    void (**p4)(int *p);
    p4=&p2;
    *p4=hit2;
    p2(p1);
    cout<<ph<<endl;
    getchar();
    return 0;
    
}