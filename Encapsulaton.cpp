#include<iostream>
using namespace std;

// Encapsulation
class kale
{
    // Access specifier
    public:
    int No1, No2;   // Characteristics

    void Fun()      // Behaviour
    {
        cout<<"Inside Fun\n";
    }

    void Gun()      // Behaviour
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{
    // Object creation (Instance)
    kale kobj1;
    kale kobj2;
    
    cout<<sizeof(kobj1)<<"\n";  // 8

    cout<<kobj1.No1<<"\n";

    kobj1.Fun();
    kobj2.Fun();

    kobj1.Gun();

    return 0;
}
