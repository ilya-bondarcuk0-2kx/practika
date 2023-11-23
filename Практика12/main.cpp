#include <iostream>
#include "Household.h"
#include"Portative.h"
#include"GameElectronic.h"
#include"Storage.h"


int main()
{
    setlocale(LC_ALL, "");

    Storage storage;
    
    Household *vacuumCleaner = new Household("Bosh","Bosh22", 5, 10000, 2, 20);
    Portative* laptop = new Portative("Lenovo", "Lenovo IDEA-pad", 10, 80000, 2, 5000);
    GameElectronic* gamingLaptop = new GameElectronic("MSI", "Catana", 15, 120000, 2, 8000, 220, 400, "IPS");
    Household* fridge = new Household("Frid", "Frig1", 5, 20, 20, 100);


    storage.setProduct(vacuumCleaner);
    storage.setProduct(laptop);
    storage.setProduct(gamingLaptop);


    storage.getProductInfo(vacuumCleaner);
    storage.getProductInfo(laptop);
    storage.getProductInfo(gamingLaptop);
    storage.getProductInfo(fridge);
   

    delete vacuumCleaner;
    delete laptop;
    delete gamingLaptop;
    delete fridge;
    return 0; 
}


