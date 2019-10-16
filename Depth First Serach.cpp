#include <bits/stdc++.h>
using namespace std ;

void dfs(vector<int>arr[] , int vertices , int key){
    bool visited[vertices] ;
    for (int i = 0 ;i < vertices ; i++) visited[i] = false ;
    stack<int> s ;
    visited[key] = true ;
    cout << key << " " ;
    s.push(key);
    while(!s.empty()){
        key = s.top();
        int c = 0 ;
        for (auto x : arr[key]){
            if(!visited[x]){
                cout << x << " " ;
                s.push(x);
                visited[x] = true ;
            }else{
                c++ ;
            }
            if(c == arr[key].size()){
                s.pop();
            }
        }
    }
}


int main (void){
    int vertices ;
    cin >> vertices ;
    vector<int> arr[vertices] ;
    int edges ;
    cin >> edges ;
    int a  , b ; 
    for(int i = 0 ; i < edges ; i++){
        cin >> a >> b ;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    // cout << arr[0].size() ;

    dfs(arr,vertices,0);
    return 0 ;
}