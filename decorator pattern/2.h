#include <iostream>
#include <string>
using namespace std;

class IDumpling{
    public:
        virtual string doDumpling(){}
        virtual ~IDumpling(){}
};

class WhiteRiceDumpling: public IDumpling{
    public:
        string doDumpling(){
            return "Day la banh bao gao trang";
        }
        ~WhiteRiceDumpling(){}
};

class BrownRiceDumpling: public IDumpling{
    public:
        string doDumpling(){
            return "Day la banh bao gao lut";
        };
        ~BrownRiceDumpling(){}
};

class DumplingDecorator: public IDumpling{
    protected:
        IDumpling* mDumpling;
        ~DumplingDecorator(){
            delete mDumpling;
        };
};

class MeatDecorator: public DumplingDecorator{
    private:
        string addMeat(){
            return " + thit";
        }
    public:
        MeatDecorator(IDumpling *dumpling){
            mDumpling = dumpling;
        }

        string doDumpling(){
            string type = mDumpling->doDumpling();
            return type + addMeat();
        }
        ~MeatDecorator(){}

};

class ChickenDecorator: public DumplingDecorator{
    private:
        string addChicken(){
            return " + ga";
        }
    public:
        ChickenDecorator(IDumpling *dumpling){
            mDumpling = dumpling;
        }
        string doDumpling(){
            string type = mDumpling->doDumpling();
            return type + addChicken();
        }
        ~ChickenDecorator(){}
};

class SaltedEggDecorator: public DumplingDecorator{
    private:
        string addSaltedEgg(){
            return " + trung muoi";
        }
    public:
        SaltedEggDecorator(IDumpling* dumpling){
            mDumpling = dumpling;
        }
        string doDumpling(){
            string type = mDumpling->doDumpling();
            return type + addSaltedEgg();
        }
        ~SaltedEggDecorator(){}
};

class CheeseDecorator: public DumplingDecorator{
    private:
        string addCheese(){
            return " + pho mai";
        }
    public:
        CheeseDecorator(IDumpling *dumpling){
            mDumpling = dumpling;
        }
        string doDumpling(){
            string type = mDumpling->doDumpling();
            return type + addCheese();
        }
        ~CheeseDecorator(){ 
        }
};

