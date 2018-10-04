//#include "std_lib_facilities.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    string test;
    for(int i = 0; i
     < argc; i++){        
        cout<<"\n"<<argv[i]<<"-"<<argc<<endl;
        if((string)argv[i] == "-i"){
            test = argv[i+1];
            cout<<"test= "<<test<<endl;
            break;
        }
    }
    cout << test<<endl;
    system("pause");
    return 0;
}