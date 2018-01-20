#ifndef IMP2_H
#define IMP2_H

class Foo;

class Implementation2 {
    friend class Foo;
    public:
        Implementation2();
        void Add();
    private:
        unsigned int &number;
};


#endif
