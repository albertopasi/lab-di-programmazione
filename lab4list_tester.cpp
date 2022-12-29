#include <iostream>
#include "lab4list.h"

int main(){
    Link* ls = new Link("a");
    ls->push_back(new Link("b"));
    ls->push_back(new Link("c"));
    ls->push_back(new Link("d"));
    ls->push_back(new Link("e"));
    ls->push_back(new Link("f"));
    std::cout<<"Stampa push back: ";
    ls->print_all();

    ls = ls->push_front(new Link("z"));
    ls = ls->push_front(new Link("y"));
    std::cout<<"\nStampa push front: ";
    ls->print_all();

    ls->insert(ls->advance(ls,4) , new Link("g"));
    std::cout<<"\nStampa insert g dopo advance di 4: ";
    ls->print_all();

    ls->add(ls->advance(ls,2) , new Link("h"));
    std::cout<<"\nStampa add h dopo advance di 2: ";
    ls->print_all();

    ls->insert(ls->advance(ls,5) , new Link("g1"));
    ls->add(ls->advance(ls,5) , new Link("h1"));
    std::cout<<"\nStampa insert add dopo advance 5: ";
    ls->print_all();

    ls->erase(ls->advance(ls, 2));
    std::cout<<"\nStampa erase dopo advance 2: ";
    ls->print_all();

    ls->insert(ls, new Link("aaa"));
    std::cout<<"\nStampa insert primo aaa: ";
    ls->print_all();

    ls->pop_front();
    ls->pop_back();
    std::cout<<"\nStampa pop front pop back: ";
    ls->print_all();

    ls->erase(ls->find(ls, "g1"));
    std::cout<<"\nStampa dopo aver trovato ed eliminato g1: ";
    ls->print_all();
    

}