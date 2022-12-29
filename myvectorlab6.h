#ifndef myvectorlab6_h
#define myvectorlab6_h

#include <iostream>

template<typename T>

class myvector {

        T* elem=nullptr;
        long unsigned size;
        long unsigned mem_all;

    public:
    //COSTRUTTORI
        myvector();
        myvector(long dim);
        myvector(const myvector& vec); //costruttore di copia
        myvector(myvector&& vec); //costruttore di spostamento
        myvector(std::initializer_list<T> lst);

    //MEMBER FUNCTIONS
        long get_size() const;
        long capacity() const;
        const T at(long index) const;
        T& at(long index);
        T safe_get(long index) const;
        void safe_set(long index, T obj);
        void reserve(long dim);
        T& push_back(T obj);
        T& push_front(T obj);
        T& pop_back();

        
    //OPERATORI
        T& operator[](long index);
        T operator[](long index) const;
        myvector& operator=(const myvector& vec);
        myvector& operator=(myvector&& vec);

        
    //DISTRUTTORE
        ~myvector();
};

//HELPER FUNCTIONS
    template<typename T>
    std::ostream& operator<<(std::ostream& os, myvector<T>& vec);


#include "myvectorlab6.hpp"
#endif