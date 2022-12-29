#include <iostream>
using namespace std;
    class rational{

        public:
            rational(){
                num=0;
                den=1;
            }
            rational(int n){
                num=n;
                den=1;
            }
            rational(int n, int d){
                num=n;
                den=d;
            }
 
            double to_double(rational o3){
                return o3.num/o3.den;
            }
            int get_num(){
                return num;
            }
            int get_den(){
                return den;
            }

            rational operator=(rational o2){
                num=o2.num;
                den=o2.den;
                return o2;
            }
            
            bool operator==(rational o2){
                if((num*o2.den)==(den*o2.num)) 
                    return true;
                return false;
            }
            bool operator<(rational o2){
                if((num*o2.den)<(den*o2.num)) 
                    return true;
                return false;
            }
            bool operator>(rational o2){
                if((num*o2.den)>(den*o2.num)) 
                    return true;
                return false;
            }
        
        private:
            int num,den;
        
    };
    
    rational operator+(rational o1, rational o2){
        int dres=o1.get_den()*o2.get_den();
        int nres=(o1.get_num()*o2.get_den())+(o2.get_num()*o1.get_den());
        rational result = rational(nres,dres);
        return result;
    }
    rational operator+(rational o1, int o2){
        int dres=o1.get_den();
        int nres=o1.get_num() + (o2*o1.get_den());
        rational result = rational(nres,dres);
        return result;
    }
    rational operator-(rational o1, rational o2){
        int dres=o1.get_den()*o2.get_den();
        int nres=(o1.get_num()*o2.get_den())-(o2.get_num()*o1.get_den());
        rational result = rational(nres,dres);
        return result;
    }
    rational operator*(rational o1, rational o2){
        int dres=o1.get_den()*o2.get_den();
        int nres=o1.get_num()*o2.get_num();
        rational result = rational(nres,dres);
        return result;
    }
    rational operator/(rational o1, rational o2){
        int dres=o1.get_den()*o2.get_num();
        int nres=o1.get_num()*o2.get_den();
        rational result = rational(nres,dres);
        return result;
    }
    ostream& operator<<(ostream& os, rational o3){
        os<<o3.get_num()<<"/"<<o3.get_den();
        return os;
    }

int main(){
    int num1,den1,num2,den2,n;
    cout<<"Inserire il numeratore del primo numero: ";
    cin>>num1;
    cout<<"\nInserire il denominatore del primo numero: ";
    cin>>den1;
    cout<<"\nInserire il numeratore del secondo numero: ";
    cin>>num2;
    cout<<"\nInserire il denominatore del secondo numero: ";
    cin>>den2;
    cout<<"\nInserire numero intero: ";
    cin>>n;

    rational rat1 = rational(num1, den1);
    rational rat2 = rational(num2, den2);
    cout<<"I tuoi numeri: "<<rat1<<" , "<<rat2<<endl;
    cout<<"Sono uguali: "<<(rat1==rat2)<<endl;
    cout<<rat1<<"<"<<rat2<<": "<<(rat1<rat2)<<endl;
    cout<<rat1<<">"<<rat2<<": "<<(rat1>rat2)<<endl;
    cout<<rat1<<" + "<<rat2<<" = "<<(rat1+rat2)<<endl;
    cout<<rat1<<" + "<<n<<" = "<<(rat1+n)<<endl;
    cout<<rat2<<" + "<<n<<" = "<<(rat2+n)<<endl;
    cout<<rat1<<" - "<<rat2<<" = "<<(rat1-rat2)<<endl;
    cout<<rat1<<" * "<<rat2<<" = "<<(rat1*rat2)<<endl;
    cout<<rat1<<" / "<<rat2<<" = "<<(rat1/rat2)<<endl;
    return 0;

}