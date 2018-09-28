//this wil be added to GITHUB after this modification, by mee!\\
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    // 5 7 3
   int n1, n2, n3;
   int f,m,l;
   cin>>n1>>n2>>n3;
   
   if(n2<=n3&&n2<=n1){
       if(n1<=n3){
           f=n2;m=n1;l=n3;
       }else{
	   f=n2;m=n3;l=n1;}
   }else{
        if(n2>=n3&&n2>=n1){
            if(n1>=n3)
                f=n3;m=n1;l=n2;
		}else{
                f=n3;m=n2;l=n1;            
		}
        }      
    }
	}
	

   cout<<"\n";    
   cout<<f<<m<<l;
    
    //This lines for every program.
    cout<<"\n Goodbye!!!\n";
    system("pause");
    return 0;

}