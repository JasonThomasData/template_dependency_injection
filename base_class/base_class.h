#ifndef BaseClass_h
#define BaseClass_h

#include "../thing_doer/i_thing_doer.h"

class BaseClass
{
    private:
        IThingDoer* thing_doer;
    public:
        BaseClass(IThingDoer* thing_doer);
        void do_the_thing();
};

#endif
