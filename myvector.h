#include <iostream>
class myvector {
    private:
        double* elem=nullptr;
        const int size;
    
    public:
        myvector(int dim);
        int get_size() const;
        double& operator[](int index);
        double operator[](int index) const;
        double safe_get(int index) const;
        void safe_set(int index, double value);
        ~myvector();

//********************************************************

        myvector(const myvector& vec); //costruttore di copia
        myvector(myvector&& vec); //costruttore di spostamento
        myvector& operator=(const myvector& vec);
        myvector& operator=(myvector&& vec);

        myvector(std::initializer_list<double> lst);


};
std::ostream& operator<<(std::ostream& os, myvector& vec);
