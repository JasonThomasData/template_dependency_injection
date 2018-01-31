#ifndef ThingDoer_h
#define ThingDoer_h

#include "i_thing_doer.h"

class ThingDoer : IThingDoer
{
    public:
        ThingDoer();
        void do_it() override;
};

# endif
