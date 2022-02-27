#include<iostream>
using namespace std;

class Class_1
{
    Class_1(int x){
    cout<<"Class 1"<<endl;
}
};


class Class_2: public Class_1
{
    Class_2(int x){
    cout<<"Class 2"<<endl;
}
};

class Class_3: public Class_2
{
    Class_3(int x){
    cout<<"Class 3"<<endl;
}
};

class Class_4: public Class_3
{
    Class_4(int x){
    cout<<"Class 4"<<endl;
}
};

int main(){
    Class_4 obj(69);
    
    
    return 0;
}