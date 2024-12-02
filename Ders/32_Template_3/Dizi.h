//
// Created by hyuce on 14.01.2021.
//

#ifndef INC_32_TEMPLATE_3_DIZI_H
#define INC_32_TEMPLATE_3_DIZI_H

#include <assert.h>

template<class T>
class Dizi
{
private:
    int m_uzunluk;
    T* m_veri;
public:
    Dizi(){
        m_uzunluk=0;
        m_veri= nullptr;
    }
    Dizi(int uzunluk){
        assert(uzunluk>0);
        m_veri = new T[uzunluk];
        m_uzunluk=uzunluk;
    }
    ~Dizi(){
        delete[] m_veri;
    }
    void Sil(){
        delete[] m_veri;
        m_veri= nullptr;
        m_uzunluk = 0;
    }
   T& operator[](int index){
       assert(index >=0 && index < m_uzunluk);
       return m_veri[index];
    }

    int getUzunluk();
};

template<typename T>
int Dizi<T>::getUzunluk() {
return m_uzunluk;
}

#endif //INC_32_TEMPLATE_3_DIZI_H
