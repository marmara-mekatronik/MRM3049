#include <iostream>

using namespace std;

class Memeli {
private:
    string tur;
public:
    Memeli() : tur("Memeli") {}

  virtual string getTur() {
        return tur;
    }
};

class Kopek : public Memeli {
private:
    string tur;
public:
    Kopek() : tur("Kopek") {}

    string getTur() {
        return tur;
    }

};

class Kedi : public Memeli {
private:
    string tur;
public:
    Kedi() : tur("Kedi") {}

    string getTur() {
        return tur;
    }
};

void yaz(Memeli* memeli){
    cout << "Tur : " << memeli->getTur() << endl;
}

int main() {
    Memeli* memeli1 = new Memeli();
    yaz(memeli1);
    Memeli* kopek1 = new Kopek();
    yaz(kopek1);
    Memeli* kedi1 = new Kedi();
    yaz(kedi1);

    return 0;
}
