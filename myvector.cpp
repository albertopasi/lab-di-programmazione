#include "myvector.h"
#include <iostream>

myvector::myvector(int dim)
:   size {dim}
{   if(dim<=0){
        throw std::invalid_argument("Invalid vector size.");
    }
    elem = new double[dim];
}

int myvector::get_size() const{
    return size;
}

double& myvector::operator[](int index){
    if(index>=size || index<0){
        throw std::invalid_argument("Index out of bounds.");
    }
    return elem[index];
}

double myvector::operator[](int index) const{
    if(index>=size || index<0){
        throw std::invalid_argument("Index out of bounds.");
    }
    return elem[index];
}

double myvector::safe_get(int index) const{
    if(index>=size || index<0){
        throw std::invalid_argument("Index out of bounds.");
    }
    return elem[index];
}

void myvector::safe_set(int index, double value){
    if(index>=size || index<0){
        throw std::invalid_argument("Index out of bounds.");
    }
    elem[index]=value;
}

myvector::~myvector(){
    delete[] elem;
}

//***********************************************************************

myvector::myvector(const myvector& vec)         //costruttore di copia
    :size{vec.size}, elem{new double[vec.size]}
{        
    std::copy(vec.elem, vec.elem+size, elem);
}

myvector& myvector::operator=(const myvector& vec){     //assegnamento di copia
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


myvector::myvector(myvector&& vec)      //costruttore di spostamento
    :size{vec.size}, elem{vec.elem}
{      
    vec.elem = nullptr;
}

myvector& myvector::operator=(myvector&& vec){      //assegnamento di spostamento
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

myvector::myvector(std::initializer_list<double> lst)
    : size{lst.size()}, elem{new double[size]}
{
    std::copy(lst.begin(), lst.end(), elem);
}


std::ostream& operator<<(std::ostream& os, myvector& vec){
    os << "{ ";
    for(int i=0; i<vec.get_size(); i++){
        os << vec[i]<<" ";
    }
    os << "}";
    return os;
}