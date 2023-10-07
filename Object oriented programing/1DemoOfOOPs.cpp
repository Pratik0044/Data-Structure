#include<iostream>
using namespace std;

class Product{
    int id;
public:
    int mrp;
    int selling_price;
    string name;
};

int main(){

    Product car;
    
    car.mrp=100000;
    car.name="Supra";
    car.selling_price=99999;
    cout<<"Size of an Object: " <<sizeof(car)<<endl;
    cout<<"MRP: "<<car.mrp<<endl;
    cout<<"Name of the Object: "<<car.name<<endl;
}