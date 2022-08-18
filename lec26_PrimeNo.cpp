using namespace std;
#include <iostream>

bool isPrime(int num){

    if(num<=1){
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            return false;
        }
    }
  
    return true;
    
    
}

int main(){

    int na;
    cout<<"enter number:"<<endl;
    cin>>na;

    cout<<"no is prime or not"<<endl;


    if(isPrime(na)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;

    }


    return 0;
}


// leetcode count prime no. -------->Time Limit Exceede 

/*class Solution {
private:
    bool chkPrime(int num){
        if(num<=1){
            return false;
        }
        for(int i=2; i<num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

public:
    int countPrimes(int n) {
        int count=0;
        
        for(int i=2;i<n;i++){
             if(chkPrime(i))
                count++;
        }
        
       
        
        return count;
    }
};*/

