#include <iostream>
using namespace std;
class Animal {
    public:
    virtual void sound() {
        cout << "Animal Sound: Generic Animal Sound" << endl;
    }
};
class Dog : public Animal {
    public:
    void sound() override {
        cout << "Dog Sound: Woof Woof" << endl;
    }
};
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy is playing!" << endl;
    }
};
int main() {
    Puppy puppy;
    puppy.sound();  
    puppy.play();  
    return 0;
}
