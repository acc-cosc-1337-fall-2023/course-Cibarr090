#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
     string lang = "C++";
     auto num = 5;
      //create strings
    string s0 = "C++";
    cout<<s0<<"\n";

    cout<<lang<<"\n";
    cout<<"Address of lang: "<<&lang<<"\n";
    cout<<"Address of num: "<<&num<<"\n\n";
    string s1 = "initial string";
    cout<<s1<<"\n";

    string s2(s1, 8, 3);
    cout<<s2<<"\n";

    string s3("another character sequence", 12);
    cout<<s3<<"\n";

    string s4(10, 'x');
    cout<<s4<<"\n";

    string s5(10, 42);//10 *
    cout<<s5<<"\n";

    string s7("123456abac**(**)");
    cout<<s7<<"\n";
    
    cout<<lang[0]<<"\n";
    cout<<"Address of character at 0 index C: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Address of character at 0 index +: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Address of character at 0 index +: "<<static_cast<void*>(&lang[2])<<"\n";
    
    
    return 0;
}