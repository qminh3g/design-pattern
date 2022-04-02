#include <iostream> 

using namespace std;

class vehicle{
    public:
        void performGo();
};

class car: public vehicle{
    public:   
        void performGo(){
            cout << "Ride" << endl;
        }
};

class bike: public vehicle{
    public:   
        void performGo(){
            cout << "Ride" << endl;
        }
};

class plane: public vehicle{
    public: 
        void performGo(){
            cout << "Fly" << endl;
        }
};

class helicopter: public vehicle{
    public: 
        void performGo(){
            cout << "Fly" << endl;
        }
};

class boat: public vehicle{
    public: 
        void performGo(){
            cout << "Row" << endl;
        }
};

class sup: public vehicle{
    public: 
        void performGo(){
            cout << "Row" << endl;
        }
};