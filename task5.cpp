#include<iostream>
using namespace std;

int totalshifts=0;
int totalcomp=0;
int sum=0;
double avg=0;
int highest, lowest;
bool highAchievers=false;
int highStudent=0, lowStudent=0;

void displayError(){
	cout << "Error! Value Out of Range!" << endl;
	cout << "Enter Input Again: " ;
}

void display(int arr[], int n){
	for(int i = 0 ; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	cout << endl;
}

void insertionSort(int arr[], int n){
	for(int i = 1 ; i < n; i++){
				int temp = arr[i];
				int j = i-1;
				while(j>=0){
					totalcomp++;
					if (arr[j]<temp){
						arr[j+1] = arr[j];
						totalshifts++;
						j--;
					}else{
						break;
					}
				}
				arr[j+1] = temp;
	}
}

void mathStuff(int arr[], int n){
	highest = arr[0];
	lowest = arr[0];
	for(int i=0; i<n; i++){
		if (arr[i]>highest){
			highest = arr[i];
			highStudent = i;			
		}
		if (arr[i]<lowest){
			lowest = arr[i];
			lowStudent = i;			
		}
		if (arr[i]>=90){
			highAchievers=true;			
		}
		sum = sum+arr[i];
	}
	avg = (double) sum/n;
	
}

int main(){
	
	int n = 0;
	cout << "Enter number of students (5-15 ONLY): " ;
	cin >> n;
	
	while(n<5 || n>15){
		displayError();
		cin>> n;
	}
	
	int arr[n];
	
	cout << "Enter Marks of Students (0-100 ONLY):  " << endl;
	for(int i = 0; i<n ; i++){
		cout << "Student " << i+1 << ": ";
		cin >> arr[i];
		while(arr[i]<0 || arr[i]>100){
			displayError();
			cin >> arr[i];
		}
	}
	
	cout << endl;
	cout << "Original Students Marks Array" << endl;
	display(arr,n);

	//perform operations earlier to confirm logic
	mathStuff(arr,n);
	//call insertion sort later
	insertionSort(arr,n);
	
	
	cout << "\nSorted Marks (DESC Order): " << endl;
	display(arr, n);
	
	if(highAchievers==true){
		cout << "!!High Achievers Present!!" << endl;
	}else{
		cout << "!!No High Achiever!!\n" << endl;
	}
	
	cout << "--------------------------" << endl;
	
	cout << "Total Comparisons: " << totalcomp << endl;
	cout << "Total Shifts: " << totalshifts << endl;
	cout << "Highest Marks: " << highest << " (Student " << highStudent+1 << ")" << endl;
	cout << "Lowest Marks: " << lowest << " (Student " << lowStudent+1 << ")" << endl;
	cout << "Average Marks: " << avg << endl;

}
