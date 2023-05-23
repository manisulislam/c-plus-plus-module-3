#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        
};
int main(){
    Student s;
    s.cls=9;
    s.roll=01;
    s.section='a';
    char nm[100]="anis";
    strcpy(s.name, nm);

    Student karim;
    karim.cls=8;
    karim.roll=25;
    karim.section='j';
    char an[100]="karim";
    strcpy(karim.name, an);

    cout<<karim.name<<endl;
    cout<<karim.roll;
    return 0;
}