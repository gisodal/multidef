# Multidef

Method to have multiple implementations of the same c++ class function using namespaces.

In this repository there are 3 different implementations of ```Add()``` that can be called.

```
#include "foo.h"

int main(){
    Foo foo;
    foo.Print();

    foo.Add();                   // adds 1
    foo.Print();

    foo.Implementation1::Add();  // adds 10
    foo.Print();

    foo.Implementation2::Add();  // adds 100
    foo.Print();

    return 0;
}
```

Output:

    value: 0
    value: 1
    value: 11
    value: 111

