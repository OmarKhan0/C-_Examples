#include <iostream>

using namespace std;

class __attribute__((packed)) laraib {
public:
    char name;
    int age;
    laraib (char , int); 
};

laraib::laraib(char name1, int age1) {
        
        name = name1;
        age = age1;
        
        cout<<"class laraib created "<<age1<<endl;
    }
    

int main()
{
    laraib lala('l',5);
    cout << lala.name<<endl;
    cout<< lala.age << endl;
    return 0;
}
