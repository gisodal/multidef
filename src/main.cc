#include <stdio.h>
#include "foo.h"

int main(int argc, char **argv){
    Foo foo;
    printf("value: %u\n", foo.Value());

    foo.Add();
    printf("value: %u\n", foo.Value());

    foo.Implementation1::Add();
    printf("value: %u\n", foo.Value());

    foo.Implementation2::Add();
    printf("value: %u\n", foo.Value());

    return 0;
}

