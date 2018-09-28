#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    double miles;
    cout<<"Enter your dectance in miles to convert: "; cin>>miles;
    double result;
    result=miles*1.609;
    cout<<"\nthere are ";cout<<result;cout<<" Km in ";cout<<miles;cout<<" Miles";
    cout<<"\n Goodbye!!!\n";
    system("pause");
    return 1977;
}