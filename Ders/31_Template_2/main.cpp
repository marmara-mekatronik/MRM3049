#include <iostream>

using namespace std;
class Para{
        int m_para;
public:
    Para(int para):m_para(para){}
    int getPara(){return m_para;}
    bool operator>(const Para& p2){
        return (this->m_para>p2.m_para);
    }
};
template<typename T>
const T& maksimum(const T& x, const T& y){
    return (x > y) ? x : y;
}

int main() {
Para para1(5);
Para para2(10);
Para buyuk= maksimum(para1.getPara(),para2.getPara());
cout << "Buyuk Para :" << buyuk.getPara()<<endl;
    if (para1>para2){
        cout << "Buyuk Para: " << para1.getPara()<<endl;
    } else{
        cout << "Buyuk Para: " << para2.getPara()<<endl;
    }
        
    return 0;
}
