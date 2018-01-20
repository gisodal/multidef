#ifndef IMP1_H
#define IMP1_H

class Foo;

class Implementation1 {
    friend class Foo;
    public:
        Implementation1();
        void Add();
    private:
        unsigned int &number;
};


#endif
