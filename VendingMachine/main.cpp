#include <string>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
#include"User.h"
int main()
{
    setlocale(LC_ALL, "");
    Snack *snickers = new Snack("Snickers", 150, 400);
    Snack *twix = new Snack("Twix", 1000, 550);
    SnackSlot *slot1 = new SnackSlot(2);
    SnackSlot *slot2 = new SnackSlot(1);
    User *user = new User;

    slot1->addSnack(snickers);
    slot1->addSnack(twix);

    slot2->addSnack(snickers);
    slot2->addSnack(twix); /*Здесь можно увидеть защиту, от переполнения массива со снеками :)*/
   

    VendingMachine* machine = new VendingMachine(2);

    machine->addSlot(slot1);
    machine->addSlot(slot2);
    machine->addSlot(slot1); /* А здесь можно увидеть защиту, от переполнения массива слотов, которые помещаются в автомат :)*/

    std::cout << "Количество пустых слотов в автомате: " << machine->getEmptySlots() << std::endl; /*Вывод до покупки*/

    machine->buySnack("Twix", user); /*Покупка снека*/
    machine->buySnack("Snickers", user);

    std::cout << "Количество пустых слотов в автомате: " << machine->getEmptySlots() << std::endl; /*Вывод после покупки*/
    std::cout << "Баланс автомата : " << machine->getAmount() << std::endl;
    std::cout << "Баланс пользователя : " << user->GetUserAmount() << std::endl;

    delete snickers;
    delete twix;
    delete machine;
    delete user; /*Здесь нет удаления SnackSlot так как они удаляются в деструкторе VendingMachine*/
}

