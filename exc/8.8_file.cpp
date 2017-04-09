#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    ofstream fout;
    const char *filename="8.8_file_text.txt";
    fout.open(filename);
    if(!fout.is_open()){
        cout<<filename<<"is not open";
        exit(EXIT_FAILURE);
    }
    fout<<"first line\n";
    return 0;
}