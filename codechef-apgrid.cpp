#include <iostream>
using namespace std ;
#include <bits/stdc++.h>

void fun1 ( int n , int m )
{
    for ( int i = 0 ; i < m ; i ++ )
    {
        cout << i + 1 << " " ;
        cout << "\n" ;
    }
    int fcd =  n + 2 ;

    for ( int i = 1 ; i < n ; i ++ )
    {
        
        int xy = fcd ;
        cout << xy << " " ;
        
        for ( int j = 1 ; j < m ; j ++ ){
            cout << xy + i + 1 << " " ;
             xy+= i + 1 ;
        }
        fcd+= n + 1 ;
        cout << endl ;
    }
}

void fun2 ( int n , int m )
{
    int yz ;
    for ( int i = 0 , a = m + 1 ; i < n ; i ++ , a ++ )
    {
         yz = i + 1 ;
        cout << yz << " " ;
        for ( int j = 1 ; j < n ; j ++ )
        {
            
            cout << yz + a << " " ;
            yz+= a ;
        }
        
        cout << "\n" ;
        
    }
}
int main ( ){
    int test ;
    cin >> test ;
    while(test--){
    
        int p , q ;
        cin >> p >> q ;
        if ( p < q )
        {
            fun1 ( p , q ) ;
        }
        else
        {
            fun2 ( p , q ) ;
        }
    }
return 0 ;
    

}
