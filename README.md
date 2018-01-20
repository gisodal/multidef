# Multidef

How to have multiple implementations of the same c++ class function using namespaces

In this repository there are are 3 different implementations of ```Add()``` that can be called.

```
    Foo foo;
    foo.Add();
    foo.Implementation1::Add();
    foo.Implementation2::Add();
```
