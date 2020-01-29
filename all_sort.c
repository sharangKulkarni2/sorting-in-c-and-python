#include<iostream>
using namespace std;

void bubble_sort(int *arr, int n);
void selection_sort(int *arr, int n);
void insertion_sort(int *arr, int n);
void insertion_sort1(int *arr, int n); // used while loop in this
void merge_sort(int *arr, int size);
void merge(int *left, int left_size,int *right, int right_size, int *arr, int size);
void swap(int *a, int *b);
int partition(int *arr, int start, int end);
void q_sort(int *arr, int start, int end);

int main(){
        int *arr;
		int n;
		int i;
		cout<<"enter n";
		cin>>n;
		arr = new int[n];
	    i = n;
	    while(i >= 1){
	    	arr[(n-i)] = i;
	    	i--;
	    }
        cout<<"before sorting\n";
	    for(int i=0;i<n;i++)
	    	cout<<arr[i]<<" ";

        q_sort(arr, 0, 9);

        cout<<"after sorting\n";
	    for(int i=0;i<n;i++)
	    	cout<<arr[i]<<" ";
        return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubble_sort(int *arr, int n){

    for(int i = 0; i < n-1; i++){     // n-1 passes
        for(int j = 0; j < (n-i-1); j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

void selection_sort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
            int smallest = arr[i];
        for(int j = i+1; j < n; j++){
            if(smallest > arr[j]){
                    swap(&arr[i], &arr[j]);
                    smallest = arr[i];
                }
        }
    }
}


void insertion_sort(int *arr, int n){
    int i, hole;
    for(hole = 1; hole < n ; hole++){
        int value = arr[hole];
        for( i = (hole-1); i>=0; i--){
            if(arr[i] > value)
                arr[i+1] = arr[i];
            else
                break;
        }
        arr[i + 1] = value;
    }
}

void insertion_sort1(int *arr, int n){

int i, hole;
for(hole = 1; hole < n; hole++){
    int value = arr[hole];
    i = hole - 1;
    while(i >= 0){
        if(arr[i] > value)
            arr[i+1] = arr[i];
        else
            break;
        i--;
       }
       arr[i+1] = value;
    }
}

void merge(int *left, int left_size,int *right, int right_size, int *arr, int size){

    int i, j, k ;
    i = j = k = 0;
    while(i < left_size && j < right_size){
        // compare and fill
        if(left[i] < right[i]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while(i < left_size){
        arr[k] = left[i];
        i++;
        k++;
    }
      while(j < right_size){
        arr[k] = right[j];
        j++;
        k++;
    }

}


void merge_sort(int *arr, int size){
    if(size == 1)
        return;
    int mid = size / 2;
    int *left = new int[mid];
    int *right = new int[size-mid];
    for(int i = 0; i < mid; i++){
        left[i] = arr[i];
    }
    for(int j = mid; j < size; j++ ){
        right[j - mid] = arr[j];
    }
    merge_sort(left, mid);
    merge_sort(right, (size-mid));
    merge(left,mid,right,size-mid,arr,size);
}


void q_sort(int *arr, int start, int end){
if(!(start < end))
    return;
int partition_number = partition(arr, start, end);
q_sort(arr, start, partition_number - 1);
q_sort(arr, partition_number + 1, end);

}

int partition(int *arr, int start, int end){

int pivot = end;
int pivot_element = arr[pivot];
int i = start;
int j = end - 1;
while(i < j){
    while(arr[i] < pivot_element)
        i++;
    while(arr[j] > pivot_element)
        j--;
    if(i < j)
        swap(&arr[i], &arr[j]);
}
swap(&arr[i], &arr[pivot]);
return i;
}





