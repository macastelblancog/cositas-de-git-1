#include <iostream>
using namespace std;
int factorial(int n){
    long double f = 1;
    
    for(int i = 1; i <=n; ++i)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int n;

    cout << "Ingresar número: \n "<< endl;
   
    cin >> n;

    cout << "El factorial es " << factorial(n)  <<endl;    

}