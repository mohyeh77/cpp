    //this wil be added to GITHUB after this modification, by me!
    // this is an improved version:
    //convert from Yen, Euro, Pound to dollar
    // a suffix 'y' or 'e' or 'p' indicates the unit of the input currancy and 'd' to convert all c
    // any other suffix is an error

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
    
int main(){

    int x=0;
  try {
      while(cin>>x)
        cerr<<"x= "<<x;
  }
  catch(exception& e){
      cerr<<e.what()<<endl;      
  }
  catch(...){
      cerr<<"unknowing error";
  }
    
    //This lines for every program.
    // cout<<"\n Goodbye!!!\n";
    // system("pause");
    return 0;

}