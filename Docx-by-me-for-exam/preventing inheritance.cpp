#include <iostream>
using namespace std;
class Cbase {
   friend class Cderived; //only friend class can inherit Cbase. as its c'tor is private..
   //friend class Chello;
private:
   Cbase () { //private constructor

   }
};
//Cbase become direct base of Cderived..
class Cderived : public virtual  Cbase{

public:
   Cderived () {

   }
};
class Chello : public Cbase { //prevents inheritance

public:
   Chello () { //it can not call Cbase's constructor..

   }
};
int main()
{
   Chello ch;
   Cderived cd;
   return 0;
}
