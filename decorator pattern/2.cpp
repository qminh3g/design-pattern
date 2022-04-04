#include "2.h"

int main(){

    IDumpling* white = new WhiteRiceDumpling;
        
    IDumpling* SaltedEggCheeseMeatWhiteDumpling = new SaltedEggDecorator(new CheeseDecorator(new MeatDecorator(white)));
    cout << SaltedEggCheeseMeatWhiteDumpling->doDumpling()<< endl;
    
    //Khong lam thay doi object white
    cout << white->doDumpling() << endl;

    IDumpling* CheeseBrownDumpling = new CheeseDecorator(new BrownRiceDumpling);

    cout << CheeseBrownDumpling->doDumpling() << endl;

    // delete tat ca cac con tro
    delete SaltedEggCheeseMeatWhiteDumpling;
    delete CheeseBrownDumpling;

    
    return 0;
}
