#include <iostream>
#include"Device.h"
#include"Player.h"
#include"Appliances.h"
int main()
{
    setlocale(LC_ALL, "");
    Appliances al(1);
    Player pl("SonyPlayer", 20, 20000);
    al.ShowSpec();
    pl.ShowSpec();
}