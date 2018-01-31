#include "base_class.h"
#include "../thing_doer/i_thing_doer.h"

BaseClass::BaseClass(IThingDoer* thing_doer_ptr)
{
    thing_doer = thing_doer_ptr;
}

void BaseClass::do_the_thing()
{
    thing_doer->do_it();
}
