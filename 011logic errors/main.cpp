//#include "std_lib_facilities.h"
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

    vector<double>temps;
    double temp=0;
    double sum=0;
    double high_temp=0;
    double low_temp=0;
    
    while (cin>>temp)
    {
        temps.push_back(temp);
    }
    
    for (int i=0; i<temps.size();++i){
        if (temps[i]>high_temp) high_temp=temps[i];
        if (temps[i]<low_temp) low_temp=temps[i];
        sum+=temps[i];
    }

    cout<< "High temperature: "<< high_temp<<endl;
    cout<<"Low temperatrue: "<< low_temp<<endl;
    cout<<"Average temperature: "<< sum/temps.size()<<endl;

    // for pause and terminate the program
    cout<<"Goodbye!!!!";
    system("pause");
    return 0;
}