#include <iostream>

using namespace std;

int main()
{
    int denominator=1,maxDenominator;
    double sum=0.0;
    cout << "enter max denominator!\n";
    cin >> maxDenominator;
    while(denominator<=maxDenominator){
        sum+=(double)1/denominator;
        denominator++;
    }
             cout << "the harmonic sum is "<<sum<<endl;
    return 0;
}
