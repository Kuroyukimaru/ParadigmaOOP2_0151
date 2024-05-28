#include <iostream>
using namespace std;

// class parent
// tambahkan final sesudah nama class
// untuk mencegah adanya overridig

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Hallo saya function dari base class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya function dari derived class";
    }
};


int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}