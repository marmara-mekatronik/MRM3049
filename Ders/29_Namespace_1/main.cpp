#include <iostream>

using namespace std;

namespace Angarali{
    void Ahmet(){
        cout<< "Ben Angaralı Ahmet" << endl;
    }
}

namespace Gayserili{
    void Ahmet(){
        cout<< "Ben Gayserili Ahmet" << endl;
    }
}

int main() {

    // Aşağıda Agarali Ahmet çağrılıyor
    Angarali::Ahmet();
    // Aşağıda Gayserili Ahmet çağrılıyor
    Gayserili::Ahmet();

    return 0;
}
