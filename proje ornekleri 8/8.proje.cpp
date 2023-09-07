#include <iostream>
using namespace std;
class computer{
    public:
    string brand;
    string model;
    string processor_model;
    double processor_speed;
    int ram;
    int hdd;
    void get_information(){
        cout<<"brand:";
        cin>>brand;
        cout<<"model:";
        cin>>model;
        cout<<"processor model:";
        cin>>processor_model;
        cout<<"processor speed:";
        cin>>processor_speed;
        cout<<"ram capacity:";
        cin>>ram;
        cout<<"hdd capacity:";
        cin>>hdd;
    }
    void write_information(){
        cout<<"brand:"<<brand<<endl;
        cout<<"model:"<<model<<endl;
        cout<<"processor model:"<<processor_model<<endl;
        cout<<"processor speed:"<<processor_speed<<endl;
        cout<<"ram capacity:"<<ram<<endl;
        cout<<"hdd capacity:"<<hdd<<endl;
    }
}computers;
int main(){
    int number;
    cout<<"how many computers will you enter:";
    cin>>number;
    for(int i=0;i<number;i++){
       cout<<"Enter computer information:"<<endl;
       computers.get_information();
       computers.write_information();
       cout<<endl;
    }
    return 0;
}

