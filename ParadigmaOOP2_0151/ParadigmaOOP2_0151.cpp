#include <iostream>
using namespace std;

class seseorang {
public:
    // pure virtual function
    virtual void pesan() = 0;

    //Virtual function biasa
    //virtual void pesan() {
    //  cout << "Pesan dari seseorang" << endl;
    //}
};