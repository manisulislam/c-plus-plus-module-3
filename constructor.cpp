#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student (int r, int c, int s, char* a){
        roll=r;
        cls=c;
        section=s;
        strcpy(name, a);


    }
};
int main(){
    
    Student an(23,7,'A',"anis");
    cout<<an.roll<<endl;
    cout<<an.name<<endl;
    cout<<an.cls<<endl;
    cout<<an.section<<endl;
    Student karim(32, 7,'s',"karim ullah");
    cout<<karim.roll<<endl;
    cout<<karim.name<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;
    return 0;
}