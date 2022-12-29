#include <iostream>
using std::string;

class Link {
    private:
        Link* prev;
        Link* succ;
    public:
        std::string value;
        explicit Link(const string& v, Link* p = nullptr, Link* s = nullptr)
            : value{v}, prev{p}, succ{s} {}
        Link* insert(Link* p, Link* n);
        Link* add(Link* p, Link* n); // inserimento dopo questo
        Link* erase(Link* p); // rimuove questo
        Link* find(Link* p, const string& s);
        Link* advance(Link* p, int n) const;
        Link* next() const;
        Link* previous() const;
        void print_all();
        Link* push_back(Link* n);
        Link* push_front(Link* n);
        Link* pop_front();
        Link* pop_back();

};