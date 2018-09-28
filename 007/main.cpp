    //this wil be added to GITHUB after this modification, by me!
    // this is an improved version:
    //convert from Yen, Euro, Pound to dollar
    // a suffix 'y' or 'e' or 'p' indicates the unit of the input currancy and 'd' to convert all c
    // any other suffix is an error

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
    
int main(){


    const double yen_to_dollar = 0.0088;
    const double euro_to_dollar = 1.16;
    const double pound_to_dollar=1.31;

    double amount;
    char currancy='c';



    cout<<"Please enter your amount followed by currancy ('y' for Yen, 'e' for Euro, 'p' for Pound and \n'd' to convert dollar amount to all currancy:\n" ;
    cin>>amount>>currancy;
    
    if(currancy=='y') //Yen to dollar    
        cout<<amount<<"in Yen=="<<amount/yen_to_dollar<<"$\n";
    if (currancy=='e') //euro to dollar
        cout<<amount<<"in E=="<<amount/euro_to_dollar<<"$\n";
    if (currancy=='p') //Pound to dollar
        cout<<amount<<"in P=="<<amount/pound_to_dollar<<"$\n";
    if (currancy=='d') {
    //Dollar to all currancy!!
        cout<<amount<<"in $=="<<amount*yen_to_dollar<<"Y\n";
        cout<<amount<<"in $=="<<amount*euro_to_dollar<<"E\n";
        cout<<amount<<"in $=="<<amount*pound_to_dollar<<"P\n";}
    else
        cout<<"Sorry!!! I don't know a currancy called '"<<currancy<<"'\n";
    

    //This lines for every program.
    cout<<"\n Goodbye!!!\n";
    system("pause");
    return 0;

}