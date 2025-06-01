#include <iostream>
using namespace std;

 class Base{
    private:
        int age = 13;

    public:
        void display()
        {
            cout << "Hello I am fro base";
        }
        
    friend class B;
 };

class Derived:public Base{
public:
    void show(){
        cout << "Hello I am fro base";
    }
};

class B{
    public:
    void show(Base obj){
        cout << "age" << " " << obj.age;
    }
};

int main()
{
    Derived obj;
    obj.display(); // Inherited from Base
    obj.show();    // Own function
    B sin;
    Base cos;
    sin.show(cos);
}
