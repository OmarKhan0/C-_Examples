#include <iostream>

using namespace std;

class __attribute__((packed)) laraib {
public:
    char name;
    int age;
    laraib (char name, int age);
    ~laraib (void); 
};

laraib::~laraib() 
{
        
        cout<<"Destructor called "<<endl;
}
 
laraib::laraib(char name, int age) 
{
        this->name = name;
        this->age = age;
        
        printf("this ptr 0x%lx\n",this);
        
        cout<<"Constructor called "<<endl;
}   

int main()
{
    laraib lala('t',25);
    printf("lala address 0x%lx\n",&lala); // this ptr = &lala
    
    cout<< "main ends\n ";
    
    return 0;
}
