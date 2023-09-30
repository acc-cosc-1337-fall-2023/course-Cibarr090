#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{7, 4, 20};

    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    vector<int> nums1;
    vector<int> nums2(5, 10);

    for(auto i=0; i < nums.size(); i++)
    for(auto num2: nums2)
    {
        cout<<nums[i]<<"\n";
        cout<<num2<<"\n";
    }
    cout<<"\n";
    nums.push_back(3);
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";
    vector<int> nums3 = nums;

    for(auto num: nums)
    for(auto num3: nums3)
    {
        cout<<num<<"\n";
        cout<<num3<<"\n";
    }
    cout<<"\n";
    nums.push_back(15);
    nums.push_back(25);

    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    nums.push_back(0);

    vector<double> doubles {5.5, 3.9, 8.99};
    cout<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";
    for(auto dub: doubles)
    {
        cout<<dub<<"\n";
    }
    
    return 0;
}