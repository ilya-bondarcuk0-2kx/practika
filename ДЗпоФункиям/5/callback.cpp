#include"callback.h"
int callback_index(int index) {
	return index;
}
int callback_mod(int value_mod) {
	if(value_mod < 0)
		return value_mod * -1;
	return value_mod;
}