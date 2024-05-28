#include <iostream>
using namespace std;

class seseorang {
public:
    // pure virtual function
    // virtual void pesan() = 0;

    //Virtual function biasa

    virtual void pesan() {
      cout << "Pesan dari seseorang" << endl;
    }
};

class Joko : public seseorang {
public:
    //Deklarasi
    void pesan() {
        //implementasi
        cout << "Pesan dari Joko" << endl;
    }
};

class Lia : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Lia" << endl;
    }
};

int main() {
    seseorang* obyek;
    Joko a;
    Lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    // Akses method pesan() dari class seseorang
     a.seseorang::pesan();
}