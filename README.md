# Multidef

Method to have multiple implementations of the same c++ class function using namespaces.

In this repository there are 3 different implementations of ```Add()``` that can be called.

```
#include "foo.h"

int main(int argc, char **argv){
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
```

Output:

    value: 0
    value: 1
    value: 11
    value: 111

