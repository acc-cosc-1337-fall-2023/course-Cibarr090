#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
     string lang = "C++";
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append(" is cool");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append("yeah");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append(" ");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n"; 

    cout<<lang[0]<<"\n";
    cout<<"Address of character at 0 index C: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Address of character at 0 index +: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Address of character at 0 index +: "<<static_cast<void*>(&lang[2])<<"\n";
    
    
    return 0;
}