#include<iostream>
using namespace std;
struct sysop{
    char name[26];
    char quote[64];
    int used;
};
const sysop & use(sysop & sysopref);
int main(){
    sysop looper={
        "first",
        "uuuup",
        0
    };
    sysop copy=use(looper);
    use(looper);
    use(copy);
    cin.get();
    return 0;
}
const sysop & use(sysop & sysopref){
    cout<<"name: "<<sysopref.name<<endl;
    cout<<"quote: "<<sysopref.quote<<endl;
    cout<<"before used:"<<sysopref.used<<endl;
    sysopref.used++;
    cout<<"after used:"<<sysopref.used<<endl;
    cout<<"---------------------"<<endl;
    return sysopref;
}