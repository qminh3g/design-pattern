#include <iostream> 

using namespace std;

class GoBehavior{
    public:
        virtual void go(){}
};

class fly: public GoBehavior{
    public: 
        void go(){
            cout << "Fly" << endl;
        }
};

class ride: public GoBehavior{
    public: 
        void go(){
            cout << "Ride" << endl;
        }
};

class row: public GoBehavior{
    public: 
        void go(){
            cout << "Row" << endl;
        }
};


class vehicle{
    protected: 
        GoBehavior* goBehavior;
    public: 
        void performGo(){
            goBehavior->go();
        };
        void set(){
            cout << "1: is ride, 2 is fly, 3 is row: ";
            int n;
            cin >> n;
            if(n == 1)
                goBehavior = new ride;
            else if (n==2){
                goBehavior = new fly;
            }
            else if (n==3){
                goBehavior = new row;
            }
            
        }
        ~vehicle(){
            delete goBehavior;
        };
};

class car: public vehicle{
    public:   
        car(){
            goBehavior = new ride;
        }
};

class bike: public vehicle{
    public:   
        bike(){
            goBehavior = new ride;
        }
};

class plane: public vehicle{
    public: 
        plane(){
            goBehavior = new fly;
        }
};

class helicopter: public vehicle{
    public: 
        helicopter(){
            goBehavior = new fly;
        }
};

class boat: public vehicle{
    public: 
        boat(){
            goBehavior = new row;
        }
};

class sup: public vehicle{
    public: 
        sup(){
            goBehavior = new row;
        }
};