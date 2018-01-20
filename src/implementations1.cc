#include "implementation1.h"
#include "foo.h"

Implementation1::Implementation1() : number(static_cast<Foo*>(this)->number){}

void Implementation1::Add(){
    number += 10;
}

