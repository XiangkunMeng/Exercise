#include<iostream>
struct box 
{ 
      char maker[40]; 
      float height; 
      float width;
      float length;
      float volume;
}; 
void show(box);
void change(box*);
double count(int,int,int);
int main(){
    using namespace std;
    box a={"abc",1.0,2.0,3.0};
    show(a);
    change(&a);
    show(a);
    cout<<endl;
    cout<<count(2,4,1)<<endl;
    cin.get();
    return 0;
}
void show(box a){
    std::cout<<a.maker<<a.height<<a.width<<a.length<<a.volume<<std::endl;
}
void change(box* a){
    a->volume=a->height*a->width*a->length;
    std::cout<<"box has changed\n";
}
double count(int choos,int a,int b){
    double result=1;
    for(int i=0;i<choos;i++){
        result*=1.0/(a-i);
    }
    result=result*(1.0/b);
    return result;
}