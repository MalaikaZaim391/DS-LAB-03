#include<iostream>
using namespace std;

int totalpasses=0;
int totalswap=0;
int totalcomp=0;

//count variables for standard bubble sort:
int stotalpasses=0;
int stotalswap=0;
int stotalcomp=0;

void display(int arr[], int n){
	for(int i = 0 ; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	cout << endl;
}

void modBubbleSort(int arr[], int n){

	for(int i = 0 ; i < n-1; i++){
			bool flag = false;
			totalpasses++;
		for(int j = 0 ; j<n-1-i ; j++){
			totalcomp++;
			if(arr[j] > arr[j+1] ){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;
				flag = true;
				totalswap++;
			}
		}
		if(flag==false){
			break;
		}
			
	}
}

void bubbleSort(int arr[], int n){
	for(int i = 0 ; i < n-1; i++){
		stotalpasses++;
		for(int j = 0 ; j<n-1-i ; j++){
			stotalcomp++;
			if(arr[j] > arr[j+1] ){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;
				stotalswap++;
			}
		}
	}
}


int main(){
	int arr[] = {55, 61, 67, 72, 78, 81, 80, 85};
	int n = 8 ;
	cout << "Orignal Attendance Array " << endl;
	display(arr, n);
	//call modified bubble sort
	modBubbleSort(arr,n);
	cout << "Sorted Attendance Array (by Mod Bubble Sort)" << endl;
	display(arr,n);
	
	//call standard bubble sort to count comparisons/passes/swaps
	int arr2[] = {55, 61, 67, 72, 78, 81, 80, 85}; //same as first array
	bubbleSort(arr2, n);
	
	cout << "(Mod Bubble Sort) After which pass does the array become sorted: " << totalpasses << endl;
	cout << "(Mod Bubble Sort) How many comparisons are performed before the algorithm terminates: "<< totalcomp << endl;
	cout << "(Mod Bubble Sort) How many swaps are performed: " << totalswap << endl;
	cout << "--------------------------------------" <<endl;
	cout << "(Standard Bubble Sort) How many passes would standard Bubble Sort perform on the same array: " << stotalpasses << endl;
	cout << "(Standard Bubble Sort) How many comparisons would standard Bubble Sort perform: " << stotalcomp << endl;
	cout << "(Standard Bubble Sort) How many swaps are performed: " << stotalswap << endl;

}
