#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string my_name;
    string first_name;
    string friend_name;
    char gender;
    string gender_sentence;
    int age;
    string three_sentences;
    
    cout<<"Your Name please! ";             cin>>my_name;
    cout<<"\nYour First Name: ";            cin>>first_name;
    cout<<"\nYur Friend Name: ";            cin>>friend_name;
    cout<<"\nYour Freind Gender (M/F): ";   cin>>gender;
    cout<<"\nYour Friend age: ";            cin>>age;
    cout<<"\n";
    if(gender=='m')
        gender_sentence="him";
    else
        gender_sentence="her";
    
    if(age<12)
        three_sentences="next year you wil be "+to_string(age+1);
    if(age==17)
        three_sentences="next year you will be able to vote.";
    if(age>=70)
        three_sentences="I hope you are enjoying retirement";

    string letter="hello,"+my_name+" ,\nnow we are going to print out your letter with some formatting.\n\tDear "
    +first_name+", \nHow are you? I am fine. I miss you so much,\n I think you deserve the world, yet somehow I dont think you always see that.\nBut I want you to know, I often find my own self wondering what I did to deserve you.\nYou taught me what a soulmate really is, and I wouldnt be able to survive without having you in my life.\nYou come in to peoples lives with a purpose and you change them.\nYou make every single person around you better, without even realizing it.\nby the way, Have you seen "
    +friend_name+" lately? if you see "
    +friend_name+" please ask "
    +gender_sentence+" to call me as soon as possible.\nlastly,\n I hear you just had a birthday and you are ("+to_string(age)+") years old, and "
    +three_sentences+" Hope you fine.\n\t\tyours sincerely,\n\t\tMohamed Yehia.\n";
    
    cout<<letter;
    system("pause");
    return 0;
}