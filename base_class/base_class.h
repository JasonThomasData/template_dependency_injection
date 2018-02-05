#ifndef BaseClass_h
#define BaseClass_h

#include "../thing_doer/i_thing_doer.h"

template<class T>
class BaseClass
{
    private:
        T thing_doer;
    public:
        BaseClass<T>();
        void do_the_thing();
};

#endif
