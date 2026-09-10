#include<iostream>
using namespace std;

void display(int arr[], int n){
	for(int i = 0 ; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	cout << endl;
}

void combSort(int arr[], int n){
	float shrink =1.3;
	int j;
	int gap = n;
	bool sorted= false;
	int count =0;
	
	while(!sorted){
		gap= (int)gap/shrink;
		if(gap<1){
			gap=1;
		}
		
		sorted = true;
		
		for(int i=0; i<n-gap; i++){
			j = gap+i;
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				sorted=false;
			}
		}
		
		if(gap>1){
			sorted=false;
		}
		count++;
		
		cout << "Iteration " << count << ": GAP = " << gap << endl;
		display(arr,n);	
	}	
}

int main(){
	
	int arr[]={10, 20, 30, 40, 5, 50, 60, 70};
	int n = 8 ;
	
	cout << endl;
	cout << "Original Array" << endl;
	display(arr,n);
	cout << "----------------------------\n" << endl;

	//call comb sort
	combSort(arr,n);
	cout << "----------------------------" << endl;
	cout << "\nSorted Array: " << endl;
	display(arr, n);

}
