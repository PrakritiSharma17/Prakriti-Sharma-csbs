#include<iostream>
using namespace std;
class Student{
    public:
    void reg(){
        cout<<"Hi This is Prakriti";
    }
};
class Scholar : public Student{

};
int main()
{
    Student s1;
    s1.reg();
}