#include "Appliances.h"
Appliances::Appliances(int weight) : _weight(weight)
{

}
void Appliances::ShowSpec()
{
	std::cout <<
		"Вес - " << _weight <<
	std::endl;
}