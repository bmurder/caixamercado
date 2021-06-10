#ifdef _WIN32 
#include <Windows.h>
#else
#include <unistd.h> 
#endif
#include <iostream> 
#include <cstdlib> 
using namespace std;

int main()
{
    double Money1;
    double  dinheiro2;
    double troco;
 
    cout << "[] valor 1: R$";
    cin >> Money1;
    cout << "[] valor 2: R$";
    cin >> dinheiro2;
    
    cout << "total: R$";
    int soma = Money1 + dinheiro2;
    cout << soma << endl;
    
    cout << "[] pagamento: R$";
    cin >> troco;
    
    cout << "troco: R$";
    int sub = troco - soma;
    cout << sub;
 
    return 0;
}
