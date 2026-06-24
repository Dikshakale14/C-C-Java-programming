#include<iostream>
using namespace std;

// Encapsulation
class kale
{
    // Access specifier (By default private)

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

    cout<<kobj2obj1.No1<<"\n";  // Error

    kobj1.Fun();            // Error
    kobj2.Fun();            // Error

    kobj1.Gun();            // Error

    return 0;
}
