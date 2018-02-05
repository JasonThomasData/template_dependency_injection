#include "base_class.h"
#include "../thing_doer/i_thing_doer.h"

BaseClass<T>::BaseClass(){}

void BaseClass::do_the_thing()
{
    thing_doer.do_it();
}
