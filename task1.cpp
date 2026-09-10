#include<iostream>
using namespace std;
int totalpasses=0;
int totalswap=0;
int totalcomp=0;
void display(int arr[], int n){
	for(int i = 0 ; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	cout << endl;
}
void bubbleSort(int arr[], int n){
	for(int i = 0 ; i < n-1; i++){
		totalpasses++;
		for(int j = 0 ; j<n-1-i ; j++){
			totalcomp++;
			if(arr[j] > arr[j+1] ){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;
				totalswap++;
			}
		}
		cout << "Array after pass " << totalpasses << ": " ;
		display(arr, n);
	}
}

int main(){
	int arr[] = {45, 12, 78, 34, 23, 90};
	int n = 6 ;
	cout << "Orignal Prices Array " << endl;
	display(arr, n);
	//call bubble sort
	bubbleSort(arr,n);
	cout << "Sorted Prices Array" << endl;
	display(arr, n);
	
	cout << "Passes need to sort the array completely: " << totalpasses << endl;
	cout << "Total Comparisons: " << totalcomp << endl;
	cout << "Total Swaps: " << totalswap << endl;
}
