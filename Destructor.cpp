#include <iostream>

using namespace std;

class __attribute__((packed)) laraib {
public:
    char name;
    int age;
    laraib (int a);
    ~laraib (void); 
};

laraib::~laraib() 
{
        
        cout<<"Destructor called "<<endl;
}
 
laraib::laraib(int a = 1) 
{
        
        cout<<"Constructor called "<<endl;
}   

int main()
{
    laraib lala;
    
    cout<< "main ends\n ";
    
    return 0;
}
