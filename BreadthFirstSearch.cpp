// Using Adjacency list .
// Breadth First Search .

#include <bits/stdc++.h>
using namespace std ;

void bfs(vector<int> arr[],int vertices,int key){
	bool visited [vertices] ;
	for (int i = 0 ; i < vertices ; ++i) visited[i] = false ;
	queue<int>q ;
	q.push(key) ; 
	visited[key] = true ;
	while(!q.empty()){
		key = q.front() ;
		cout << key << " " ;
		q.pop();
		for(auto x : arr[key]){
			if(!visited[x]){
				visited[x] = true ;
				q.push(x) ;
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
	int a , b ;
	for ( int i = 0 ; i < edges ; i++){
		cin >> a >> b ;
        // --a , --b ;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	bfs(arr,vertices,2);
	return 0 ;
}