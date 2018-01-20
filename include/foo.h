#ifndef FOO_H
#define FOO_H

#include "implementation1.h"
#include "implementation2.h"

class Foo :
    public Implementation1,
    public Implementation2
{
    friend class Implementation1;
    friend class Implementation2;
    public:
        Foo();
        void Add();
        void Print();
    private:
        unsigned int number;
};

#endif
