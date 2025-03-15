#include<iostream>
using namespace std;
class Student{
    public:
    void reg(){
        cout<<"Hi This is Prakriti"<<endl;
    }
};
class Scholar : public Student{
     public:
     void reg2(){
        cout<<"3rd yr csbs";
     }
};
class Dace : public Scholar{

};
int main()
{
    Student s1;
    Scholar s2;
    s1.reg();
    s2.reg2();
}