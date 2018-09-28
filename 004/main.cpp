#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    
    double val1; double val2;
    cout<<"Enter first number ";cin>>val1;
    cout<<"Enter second number "; cin>>val2;
    string result;
    double difference;
    double sum;
    double product;
    double ratio;

    if(val1>val2){
        result="First Number is Greater Than second one.";
        difference=val1-val2;        
    }
    else{
        result="Second number is greater than first one.";
        difference=val2-val1;
    }
    
    sum=val1+val2;
    product=val1*val2;
    ratio=sum/2;

    
      
    //prdouble out
    cout<<result;
    cout<<"\n\tsumation=\t";    cout<<sum;
    cout<<"\n\tProduction=\t";  cout<<product;
    cout<<"\n\tRatio=\t\t";     cout<<ratio;
      
    
    
    //This lines for every program.
    cout<<"\n Goodbye!!!\n";
    system("pause");
    return 1977;
}