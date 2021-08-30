#include<bits/stdc++.h>
using namespace std;
class User {
    public:
    string user_name;
    string password;

    void print(){
        cout<<user_name<<" "<<password<<"\n";
    }
};

class Person: public User {
    public:
    string name;
    void print(){
        cout<<"User Name"<<name;
        
    }
};

int main(){
    Person *p1=new Person();
    p1->name="sunil";
    p1->user_name="sdsa";
    p1->password="12345";

    p1->print();
    return 0;
}