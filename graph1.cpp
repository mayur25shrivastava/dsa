using namespace std;
#include <iostream>
#include <unordered_map>
#include <list>

class graph1{

public:

    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);

        if(direction==0){
        adj[v].push_back(u);

        }
    }

    void print_Adjlist(){
        for(auto i:adj){
            cout<<i.first<<"-->";
            for(auto j: i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){

  int n;
  cout<<"Enter no of nodes:"<<endl;
  cin>>n;

    int m;
    cout<<"enter no of edges:"<<endl;
    cin>>m;

    graph1 g;

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;

        //created an undirrected graph

        g.addEdge(u,v,0);
    }
    

    //printing graph

    g.print_Adjlist();

   

    return 0;
}