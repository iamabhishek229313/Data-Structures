#include <iostream>
using namespace std ;
int main ()
{
	// Program that will rotate given array having n elements by space  of d .
	int n ;
	int d ;
	cout<<"Number of elements in our array ?"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Spaces required"<<endl;
	cin>>d;
	cout<<"Write"<<n<<"elements of your array"<<endl;
	for(int i = 0 ; i < n ; i++)
	{
	     cin>>arr[i];
	}
	
	rotateArray(arr,n,d);
	
}

void rotateArray (int arr[],int n,int d)
{
	int temp[spaces];
	for(int i = 0 ; i < spaces ; i++)
	{
		temp[i] = arr[--n];
	}
	int leftArr[n-spaces] ;
	for(int i = 0 ; i < n-spaces ; i++)
	{
		leftArr[i] = arr[--(n-spaces)] ;
	}
	
	int finalarrr[n];
	for(int i = 0 ; i<n ;i++)
	{
		if(i < d)
		finalarr[i] = temp[i];
		else
		finalarr[i] = leftArr[i];
	}
	
	for(int i  = 0 ; i < n ; i++)
	{
		cout<<finalarr[i]<<endl;
	}
}


