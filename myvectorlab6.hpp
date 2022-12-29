#ifndef myvectorlab6_hpp
#define myvectorlab6_hpp

#include "myvectorlab6.h"
#include <iostream>

//VARIABILI GLOBALI

    const int init_size = 10;

//COSTRUTTORI

    template <typename T>
    myvector<T>::myvector()
    :   size {0}, mem_all{init_size}, elem{new T[init_size]}
    {   
    }

    template <typename T>
    myvector<T>::myvector(long dim)
    :   size {dim}, mem_all{dim}
    {   if(dim<init_size){
            mem_all=init_size;
        }
        elem = new T[mem_all];
    }

    template <typename T>
    myvector<T>::myvector(const myvector<T>& vec)  //costruttore di copia
        :size{vec.size},mem_all{vec.mem_all}, elem{new T[vec.size]}
    {        
        std::copy(vec.elem, vec.elem+size, elem);
    }

    template <typename T>
    myvector<T>::myvector(myvector<T>&& vec)      //costruttore di spostamento
        :size{vec.size},mem_all{vec.mem_all}, elem{vec.elem}
    {      
        vec.elem = nullptr;
    }

    template <typename T>
    myvector<T>::myvector(std::initializer_list<T> lst)
        : size{lst.size()}, mem_all{lst.size()}
    {
        if(lst.size()<init_size){
            mem_all=init_size;
        }
        elem = new T[mem_all];
        std::copy(lst.begin(), lst.end(), elem);

    }

//MEMBER FUNCTIONS


    template <typename T>
    long myvector<T>::get_size() const{
        return size;
    }

    template <typename T>
    long myvector<T>::capacity() const{
        return mem_all;
    }

    template <typename T>
    const T myvector<T>::at(long index) const{
        if(index<0 or index>=size) throw std::invalid_argument("Index out of bounds.");
        return elem[index];
    }

    template <typename T>
    T& myvector<T>::at(long index){
        if(index<0 or index>=size) throw std::invalid_argument("Index out of bounds.");
        return elem[index];
    }


    template <typename T>
    T myvector<T>::safe_get(long index) const{
        if(index>=size or index<0){
            throw std::invalid_argument("Index out of bounds.");
        }
        return elem[index];
    }

    template <typename T>
    void myvector<T>::safe_set(long index, T obj){
        if(index>=size or index<0){
            throw std::invalid_argument("Index out of bounds.");
        }
        elem[index]=obj;
    }

    template <typename T>
    void myvector<T>::reserve(long dim){
        if(dim<=size) return;
        T* vec2 = new T[dim];
        std::copy(elem, elem+size, vec2);
        delete[] elem;
        elem=vec2;
        mem_all=dim;
    }

    template <typename T>
    T& myvector<T>::push_back(T obj){
        if(size==mem_all) {
            reserve(mem_all*2);
        }
        size++;
        elem[size-1]=obj;
        return elem[size-1];
    }

    template <typename T>
    T& myvector<T>::push_front(T obj){
        if(size==mem_all) {
            reserve(mem_all*2);
        }
        size++;
        for(int i=size-1; i>0; i--){
            elem[i]=elem[i-1];
        }
        elem[0]=obj;
        return elem[0];
    }

    template <typename T>
    T& myvector<T>::pop_back(){
        if(size==0) throw ("Vector already empty");
        size--;
        return elem[size];
    }

//OPERATORI

    template <typename T>
    T& myvector<T>::operator[](long index){
        return elem[index];
    }

    template <typename T>
    T myvector<T>::operator[](long index) const{
        return elem[index];
    }

    template <typename T>
    myvector<T>& myvector<T>::operator=(const myvector<T>& vec){     //assegnamento di copia
        if(size<vec.size){
            throw std::invalid_argument("Vector is too small");     //variabile size è costante, non posso cambiare la dimensione al vettore
        }
        std::copy(vec.elem, vec.elem+vec.size, elem);
        if(vec.size<size){
            for(int i=vec.size; i<size; i++){
                elem[i] = 0.0;
            }
        }
        return *this;
    }

    template <typename T>
    myvector<T>& myvector<T>::operator=(myvector<T>&& vec){      //assegnamento di spostamento
        if(size < vec.size){                     //variabile size è costante, non posso cambiare la dimensione al vettore
            throw std::invalid_argument("Vector is too small");
        }
        std::copy(vec.elem, vec.elem+vec.size, elem);
        if(vec.size<size){
            for(int i=vec.size; i<size; i++){
                elem[i] = 0.0;
            }
        }
        delete[] elem;
        vec.elem = nullptr;
        return *this;
    }

//DISTRUTTORE

    template <typename T>
    myvector<T>::~myvector(){
        delete[] elem;
    }

//HELPER FUNCTIONS

    template <typename T>
    std::ostream& operator<<(std::ostream& os, myvector<T>& vec){
        os << "{ ";
        for(int i=0; i<vec.get_size(); i++){
            os << vec[i]<<" ";
        }
        os << "}";
        return os;
    }

#endif