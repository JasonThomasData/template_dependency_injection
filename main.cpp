#include "base_class/base_class.h"
#include "thing_doer/thing_doer.h"

int main(int argc, char* argv[])
{
    ThingDoer* thing_doer = new ThingDoer();
    BaseClass base_class(thing_doer);

    base_class.do_the_thing();

    return 0;
}
