#include <iostream>
#include "lab4list.h"

Link* Link::insert(Link* p, Link* n){
    if(!p) return p;
    if(!n) return n;
    n->succ=p;
    if(p->prev) p->prev->succ=n;
    n->prev=p->prev;
    p->prev=n;
    return n;
}

Link* Link::add(Link* p, Link* n){
    if(!p) return p;
    if(!n) return n;
    if(p->succ){
        n->succ=p->succ;
        p->succ->prev=n;
    }
    n->prev=p;
    p->succ=n;
    return n;
}

Link* Link::erase(Link* p){ // rimuove questo
    if(!p) return nullptr;
    if(p->prev){
        p->prev->succ=p->succ;
    }
    if(p->succ){
        p->succ->prev=p->prev;
    }
    p->succ=nullptr;
    p->prev=nullptr;
    return p;    
}

Link* Link::find(Link* p,const string& s){
    Link* temp = p->prev;
    while(p){
        if(p->value==s) return p;
        p=p->succ;
    }
    while(temp){
        if(temp->value==s) return temp;
        temp = temp->prev;
    }
    return nullptr;
}

Link* Link::advance(Link* p, int n) const{
    if(!p) return nullptr;
    if(n>0){
        while(n!=0){
            if(!p->succ) return nullptr;
            p=p->succ;
            n--;
        }
    }else if(n<0){
        while(n!=0){
            if(!p->prev) return nullptr;
            p=p->prev;
            n++;
        }
    }
    return p;
}

Link* Link::next() const {
    return succ; 
}

Link* Link::previous() const {
    return prev; 
}

void Link::print_all(){
    Link* temp=this;
    while(temp->prev){
        temp=temp->prev;
    }
    std::cout<<"{ ";
    while(temp){
        std::cout<<temp->value;
        if(temp->succ){
            std::cout<<" , ";
            temp=temp->succ;
        }else{break;}
    }        
    std::cout<<" }";

}

Link* Link::push_back(Link* n){
    Link* temp = this;
    while(temp->succ){
        temp=temp->succ;
    }
    return add(temp, n);
}

Link* Link::push_front(Link* n){
    Link* temp = this;
    while(temp->prev){
        temp=temp->prev;
    }
    return insert(temp, n);
}

Link* Link::pop_front(){
    Link* temp = this;
    while(temp->prev){
        temp=temp->prev;
    }
    return erase(temp);
}

Link* Link::pop_back(){
    Link* temp = this;
    while(temp->succ){
        temp=temp->succ;
    }
    return erase(temp);
}

















