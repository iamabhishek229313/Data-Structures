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
	
	rotateArray(arr[n],n,d);
	
}

void rotateArray (int arr[],int n,int spaces)
{
	int temp[spaces];
	for(int i = 0 ; i < spaces ; i++)
	{
		temp[i] = arr[--n];
	}
	int leftArr[n-spaces] ;
	int x = n-spaces ;
	for(int i = 0 ; i < n-spaces ; i++)
	{
		leftArr[i] = arr[--x] ;
	}
	
	int finalarrr[n];
	for(int i = 0 ; i<n ;i++)
	{
		if(i < d)
		finalarrr[i] = temp[i];
		else
		finalarrr[i] = leftArr[i];
	}
	
	for(int i  = 0 ; i < n ; i++)
	{
		cout<<finalarrr[i]<<endl;
	}
}


