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
Student fun(){
    char name[100]="anisul islam";
    Student karim(25,7,4,name);
    return karim;
}
int main(){
    Student karim=fun();

    cout<<karim.roll;
    
    
    return 0;
}