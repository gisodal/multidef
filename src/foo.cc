#include "foo.h"
#include <stdio.h>

Foo::Foo(){
    number = 0;
}

void Foo::Add(){
    number++;
}

void Foo::Print(){
    printf("value: %u\n", number);
}

