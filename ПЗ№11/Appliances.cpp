#include "Appliances.h"
Appliances::Appliances(int weight) : _weight(weight)
{

}
void Appliances::ShowSpec()
{
	std::cout <<
		"��� - " << _weight <<
	std::endl;
}