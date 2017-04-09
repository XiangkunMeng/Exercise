#include<iostream>
//#include<typeinfo>    //试试获得类型名；
using namespace std;
const int SIZE=20;
struct human{
    int height;
    int weight;
    char name[SIZE];
    bool sex;
};
template <class T>
void Swap(T &a,T &b);
template <> void Swap(human &,human &);
void show(const human &);
int main(){
    int a=1,b=2;
    cout<<a<<b<<endl;
    Swap(a,b);
    cout<<a<<b<<endl;
    human mxk={179,99,"Xkenmon",1};
    human ld={162,98,"Ludan",0};
    show(mxk);
    show(ld);
    Swap(mxk,ld);
    show(mxk);
    show(ld);
    cin.get();
    return 0;
}
template <class T>
void Swap(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swap successful!\n\n";
}
template <> void Swap(human & a,human & b){
    human temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swap(human) successful!\n\n";
}
void show(const human & m){
    //cout<<typeid(m).name()<<"  :\n";    //试试获得类型名；
    cout<<"height: "<<m.height<<endl;
    cout<<"weight: "<<m.weight<<endl;
    cout<<"name: "<<m.name<<endl;
    cout<<"sex: "<<m.sex<<endl;
    cout<<endl;
}
