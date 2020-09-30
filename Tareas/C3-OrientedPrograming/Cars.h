#include<string>
#include<iostream>
class Car{
    private:
        std::string motor;
        std::string fuel;
        std::string color;
        int year{0};
        int capacity{0};
    
    public:
        Car(std::string motorType,std::string fuelType,std::string colorType){
            this->motor=motorType;
            this->fuel=fuelType;
            this->color=colorType;
        }
        void getInts(int yeaR, int caP){
            this->year=yeaR;
            this->capacity=caP;
        }
        void shown(){
            std::string GetStrings();{
                std::cout<<"\ntype of motor:"<<motor;
                std::cout<<"\nfuel is :"<<fuel;
                std::cout<<"\ncolor is :"<<color;
            }
        }
        void showInts(){
            std::cout<<"year: "<<year<<std::endl;
            std::cout<<"motor capacity: "<<capacity<<std::endl;
        }        
};