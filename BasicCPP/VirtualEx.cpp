#include <iostream>
using namespace std;

class Base {
public:
   virtual void display() {
       cout << "Base::display \n";
   }

   void hello() {
       display();
   }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived::display \n";
    }
};

int main() {
    Derived d;
    // The below call to the method will be resolved at compile time
    // The display() called under hello will have reference to
    // Derived::display and not the Base::display
    // Hence, this will print Derived::display
    d.hello(); 

    // The below call to the method will be resolved at compile time
    // The display() called under hello will have reference to
    // Base::display
    // Hence, this will print Base::display
    Base b1;
    b1.hello();

    // The call will not be resolved at compile time.
    // The virtual method is hint to the compiler that this call
    // Should be resolved at run time.
    // Hence at run time, it will be established that Base *b
    // is point to Derived object. Hence b->hello
    // will be resolved to &Derived::display()
    // This will print Derived::display
    Base *b = new Derived;
    b->hello(); 
    return 0;
}
