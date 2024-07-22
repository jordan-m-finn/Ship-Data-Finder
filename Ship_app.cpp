#include <iostream>
#include <string>
#include "Jordan_Finn_Ship.h"
#include "Jordan_Finn_CruiseShip.h"
#include "Jordan_Finn_CargoShip.h"
using namespace std;

int main()
{
    // Create an array of Ship pointers, initialized with
    // the addresses of 3 dynamically allocated objects.
    Ship *ships[3] = { new Ship("Second", "1339"),
                       new CruiseShip("To last", "2018", 2100),
                       new CargoShip("Screenshot", "30", 5000)
                     };

    // Call each object's print function using polymorphism.
    for (int index=0; index < 3; index++)
    {
        ships[index]->print();
        cout << "----------------------------\n";
        
        delete ships[index];     //release memory (avoid memory leak)
        ships[index] = nullptr;   //avoid dangling pointer
    }
    
           
    system("PAUSE");
    return 0;
}
