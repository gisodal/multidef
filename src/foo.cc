#include "foo.h"

Foo::Foo(){
    number = 0;
}

void Foo::Add(){
    number++;
}

unsigned int Foo::Value(){
    return number;
}

