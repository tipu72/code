#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key) {
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[], int n, int key){
	int start = 0;
	int end = n;
	while(start<=end){
		int mid = (start+end)/2;
		if (arr[mid]==key)
		{
			return mid;
		}
		else if (arr[mid]>key)
		{
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}


int main(int argc, char const *argv[])
{

 	int n;
 	cin>>n;
 	int arr[n];
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}

 	int key;
 	cin>>key;

 	cout << linearSearch(arr, n, key) << "\n";
 	//cout << binarySearch(arr, n, key) << "\n";
 	
	return 0;
}