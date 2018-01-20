#include "foo.h"

int main(){
    Foo foo;
    foo.Print();

    foo.Add();
    foo.Print();

    foo.Implementation1::Add();
    foo.Print();

    foo.Implementation2::Add();
    foo.Print();

    return 0;
}

