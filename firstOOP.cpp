#include <iostream>
using namespace std;
class Student {
    public:
    int id;
    float gpa;
    char fullName[30];
};
int main(){
   
    Student Alim;
    Alim.id = 101;
    Alim.gpa = 3.5;
    cout  << Alim.gpa << endl;

    return 0;
}