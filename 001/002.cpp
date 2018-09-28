#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    /* try to print age in monthes 
    double age;
    string name;
    cout<<"hello there, please type your name and age?\n";
    cout<<"Name: ";
    cin >> name;
    cout<<"Age: ";
    cin>> age;
    cout<<"Hello "<<name<<" Your age in monthes are: "<< age*12<<endl;*/

    /*// operator examples
    cout<<"please enter a floating-point value: ";
    int n;
    cin>>n;
    cout    <<"n=="<<n
            <<"\nn+1=="<<n+1
            <<"\nthree times n== "<<3*n
            <<"\ntwice n== "<<n+n
            <<"\nn squared == "<<n*n
            <<"\nhalf of n == "<<n/2
            <<"\nsquare root of n == " <<sqrt((double)n) //here i'm casting double to avoid sqrt() functino error
            <<endl;*/

    /*//string concatenation
    cout<<"Please enter your first and second name\n";
    string first;
    string second;
    cin>>first>>second;
    string name = first+' '+second;
    cout<<"Hello, "<<name<<"\n";*/

    /*//string with == and < and > with if statements
    cout<<"Please enter two names\n";
    string first;string second;
    cin>>first>>second;
    if(first==second) cout<<" That's the same name twice\n";
    if(first<second)
        cout<<first<<" is alphabetically before "<<second<<"\n";
    if(first>second)
      cout<<first<<" is alphabetically after "<<second<<"\n";*/

    /*// repeated words and counter
    int number_of_word=0;
    int catchs == 0;
    string previous = " ";
    string current;
    while(cin>>current){
        ++number_of_word;
        if (previous == current){
            ++catchs;
            cout<<"repeated word: "<<current<<"\n"
            <<"Number "<<number_of_word<<" Catches "<<catchs<<" times";
        }            
        previous=current;
    }*/

    double d=0;
    while (cin>>d){
        int i=d;
        char c=i;
        int i2=c;
        cout    <<" d== "<<d
                <<" i== "<<i
                << " i2== "<<i2
                <<" char("<<c<<")\n";
    }

    system("pause");
    return 0;
}