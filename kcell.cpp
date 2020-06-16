#include<iostream>
#include<cmath>
using namespace std;
long double K(long double k){
    long double micro = 0.000000001 , K = 0 , t =0 ;
    
    for (;t<1;t = t + micro){
        K = K + (1 / sqrt((1 - (t*t))*(1 - (k*k)*(t*t))))*micro;
        //K = K + (t*t*t*t*t)*micro ;
        
    }
    
        return K;

   
    
}
int main()
{
    cin.tie(0);
    long double W ,S ,L ,N,k ;
    S = 0.0001 ;
    W = 0.0003 ;
    N = 8 ;
    L = 0.009 ;
    k = cos((M_PI/2)*(W/(S+W)));
    long double K1 ,K2 ,Kcell ;
    K1 = K(k);
    K2 = K(sqrt(1-k*k));
    Kcell = 2 / ((N-1)*L) * K1 / K2 ;
    cout <<"K1\tK2\tKcell\n"<<K1<<"\t"<<K2<<"\t"<< Kcell<<endl ;
} 
