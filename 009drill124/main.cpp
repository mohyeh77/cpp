#include <iostream>
#include <string>


using namespace std;

int main(){
    double n1, n2;
    double smaller, larger;
    double differ=1.0/100;   
    string small ="The smallest number is: ";
    string large ="The largest number is: ";
    string equal ="\nBoth numbers are almost equal\n";

    while(cin>>n1>>n2){
        if (n1==n2){
            cout<<"Both number are abslute equal!!!";
            continue;
        }
        else if(n1>n2){
            cout<<small<<n2<<" ";smaller=n2;larger=n1;}                     
        else if (n1<n2) {
            cout<<large<<n2<<" ";larger=n2;smaller=n1;}                                                       
        
        if(larger-smaller<=differ)
            cout<<equal;        
        
    }
return 0;
}