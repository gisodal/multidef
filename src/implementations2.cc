#include "implementation2.h"
#include "foo.h"

Implementation2::Implementation2() : number(static_cast<Foo*>(this)->number){}

void Implementation2::Add(){
    number += 100;
}

