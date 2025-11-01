#include<bits/stdc++.h>


using namespace std;



void printArr(vector<int> arr){
	for(int i =0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
}


void bubbleSort(vector<int> &A){
	int size = A.size();

	for(int i = 0; i < size-1; i++){
		for(int j = 0; j <size-i-1; j++){
			if(A[j+1]<A[j]){
				swap(A[j+1],A[j]);
			}
		}
	}
}


void selectionSort(vector<int> &A){
	int size = A.size();

	for(int i = 0; i<size-1; i++){
		int minidx = i;
		for(int j = i+1; j<size;j++){
			if(A[j]<A[minidx]){
				minidx = j;
			}
		}
		swap(A[minidx],A[i]);
	}
}

void insertionSort(vector<int> &A){
	int size = A.size();


	for(int i = 1; i<size; i++){
		int key = A[i];
		int j = i-1;
		while(j>=0 && A[j]>key){
			A[j+1] = A[j];
			j--;
		}

		A[j+1]=key;

	}
}

void countingSort(vector<int> &a){
	// largest element;

	int size = a.size();
	int max = a[0];
	for(int i =1; i<size;i++){
		if(a[i]>max){
			max = a[i];
		}
	}

	vector<int> arr(max+1,0);

	// for(int i = 0;i<max;i++){
	// 	arr.push_back(0);
	// }
	for(int i = 0; i<size; i++){
		arr[a[i]]++;
	}

	for(int i = 1; i<=max;i++){
		arr[i] +=arr[i-1];
	}

	vector<int>ans(size);

	for(int i = size-1; i >=0; i--){
		ans[--arr[a[i]]]=a[i];
	}

	// printArr(ans);
	for(int i = 0; i<size;i++){
		a[i]=ans[i];
	}
}


int Max(vector<int> A){
	int max = A[0];

	for(int i =1; i<A.size();i++){
		if(max<A[i]){
			max = A[i];
		}
	}
	return max;
}


void count(vector<int> &arr, int exp){
	int size = arr.size();

	vector<int> out(size);
	vector<int> count(10,0);

	for(int i = 0; i<size;i++){
		count[(arr[i]/exp)%10]++;
	}

	for(int i= 1;i<10;i++){
		count[i]+=count[i-1];
	}

	for(int i = size-1;i>=0;i--){
		out[count[(arr[i]/exp)%10]-1] = arr[i];
		count[(arr[i]/exp)%10]--;
	}

	for(int i = 0; i<size;i++){
		arr[i]=out[i];
	}
}

void radix(vector<int>&A){
	int max = Max(A);

	for(int exp =1; max/exp>0;exp*=10){
		count(A,exp);
	}
}

void merge(vector<int>&vec, int left, int mid, int right){
	int i,j,k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	vector<int> leftVec(n1), rightVec(n2);

	for( i = 0; i<n1;i++){
		leftVec[i]=vec[left+i];
	}

	for(j = 0; j<n2;j++){
		rightVec[j]=vec[mid+1+j];
	}
	i = 0;
	j = 0;
	k = left;

	while(i < n1 && j < n2){
		if(leftVec[i] <= rightVec[j]){
			vec[k] = leftVec[i];
			i++;
		}else{
			vec[k] = rightVec[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		vec[k]=leftVec[i];
		i++;
		k++;
	}

	while(j<n2){
		vec[k]=rightVec[j];
		j++;
		k++;
	}
}

void mergeSort(vector<int>&A, int left, int right){
	if(left<right){
		int mid = left+(right-left)/2;

		mergeSort(A,left,mid);
		mergeSort(A,mid+1,right);

		merge(A,left,mid,right);
	}
}

int partition(vector<int> &vec, int low, int high) {

    // Selecting last element as the pivot
    int pivot = vec[high];

    // Index of elemment just before the last element
    // It is used for swapping
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        // If current element is smaller than or
        // equal to pivot
        if (vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }

    // Put pivot to its position
    swap(vec[i + 1], vec[high]);

    // Return the point of partition
    return (i + 1);
}

void quickSort(vector<int> &vec, int low, int high) {

    // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {

        // pi is Partitioning Index, arr[p] is now at
        // right place
        int pi = partition(vec, low, high);

        // Separately sort elements before and after the
        // Partition Index pi
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}




int main(){

	vector <int> arr = {55,66,77,22,4,11,534,33,66,1,28};

	printArr(arr);
	cout <<endl;
	int n = arr.size();
	// bubbleSort(arr);
	// selectionSort(arr);
	// insertionSort(arr);

	// countingSort(arr);

	// radix(arr);

	// mergeSort(arr,0,n-1);
	quickSOrt(arr,0,n-1);

	printArr(arr);




	return 0;
}