#include<iostream>
using namespace std;

int totalshifts=0;
int totalcomp=0;
int gap_count=0;

void display(int arr[], int n){
	for(int i = 0 ; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	cout << endl;
}

void shellSort(int arr[], int n){
	for(int gap=n/2; gap>0; gap/=2){
		int gapComp = 0;
        int gapShifts = 0;
		for(int i=gap ; i < n; i++){
			int temp = arr[i];
			int j=i;
			
			while(j>=gap){
				gapComp++;
				totalcomp++;
				
				if(arr[j-gap]>temp){
					arr[j]=arr[j-gap];
					gapShifts++;
					totalshifts++;
					j-=gap;
				}else {
					break;
				}
			}
			if(j!=i){
				arr[j] = temp;
			}
		}
		gap_count++;
		cout << "Array after Gap Iteration " << gap_count << " [GAP = " << gap << "]: " <<endl;
		display(arr, n);
		cout << "Gap Comparisons: " << gapComp << endl;
        cout << "Gap Shifts: " << gapShifts << endl << endl;
		cout << "--------------------------------------" << endl;

	}
}

int main(){
	
	int arr[]={90, 20, 80, 30, 70, 40, 60, 50, 10};
	int n = 9 ;
	
	cout << endl;
	cout << "Original Array" << endl;
	display(arr,n);
	cout << "--------------------------------------" << endl;


	//call shell sort
	shellSort(arr,n);
	
	cout << "--------------------------------------" << endl;
	cout << "Total Comparisons: " << totalcomp << endl;
	cout << "Total Shifts: " << totalshifts << endl;
	cout << "\nSorted Array: " << endl;
	display(arr, n);

}
