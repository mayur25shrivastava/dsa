using namespace std;
#include <iostream>

int main(){ 

    int i;

    int n;
    cout<<"enter"<<endl;
    cin>>n;

    int j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    
    

}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;

//     for(int i = 1; i <= rows; ++i)
//     {
//         for(int j = 1; j <= i; ++j)
//         {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
