    //this wil be added to GITHUB after this modification, by mee!

    // this is an improved version:
    //convert from inches to centimeters or centimeters to inches 
    // a suffix 'i' or 'c' indicates the unit of the input
    // any other suffix is an error

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
    
int main(){
    const double cm_per_inch=2.54;
    int length = 1;
    char unit = 'a';
    cout<<"Please enter a length followed by a unit (c or i):\n";
    cin>>length>>unit;
    //conditions using if statements
    if(unit=='i')
        cout<<length<<"in=="<<cm_per_inch*length<<"cm\n";
    else if (unit=='c')
        cout<<length<<"cm=="<<length/cm_per_inch<<"in\n";
    else
        cout<<"Sorry, I don't know a unit called'"<<unit<<"'\n";


    //This lines for every program.
    cout<<"\n Goodbye!!!\n";
    system("pause");
    return 0;

}