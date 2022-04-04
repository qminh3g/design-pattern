#include <iostream>
#include <string>
using namespace std;

class WhiteRiceDumpling{
    public:
        string doDumpling(){
            return "Day la banh bao gao trang";
        }
};

class BrownRiceDumpling{
    public:
        string doDumpling(){
            return "Day la banh bao gao lut";
        }
};

class MeatWhiteDumpling: public WhiteRiceDumpling{
    public:
        string doDumpling(){
            return WhiteRiceDumpling::doDumpling() + " + thit";
        }
};

class CheeseMeatWhiteDumpling: public MeatWhiteDumpling{
    public:
        string doDumpling(){
            return MeatWhiteDumpling::doDumpling() + " + pho mai";
        }
};

class SaltedEggCheeseMeatWhiteDumpling: public CheeseMeatWhiteDumpling{
    public:
        string doDumpling(){
            return CheeseMeatWhiteDumpling::doDumpling() + " + trung muoi";
        }
};

class CheeseBrownDumpling: public BrownRiceDumpling{
    public: 
        string doDumpling(){
            return BrownRiceDumpling::doDumpling() + " + pho mai";
        }
};
