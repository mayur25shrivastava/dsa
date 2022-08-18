using namespace std;
#include <iostream>


int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s1;
        cin>>s1;

        string s2 = " ";

        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i]=='A'){
                s2.push_back('T');
            }
            if(s1[i]=='T'){
                s2.push_back('A');
            }
            if(s1[i]=='G'){
                s2.push_back('C');
            }
            if(s1[i]=='C'){
                s2.push_back('G');
            }



        }
        cout<<s2<<endl;
        


    }


    return 0;
}