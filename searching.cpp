// searching

#include<iostream>
#define N 10
using namespace std;

int linear_search(int *arr, int size, int key);
int b_search(int *arr, int start, int end, int key);
int b_search_iterative(int *arr, int start, int end, int key);

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




int main(){

int *arr = new int[N];
srand(1000);
for(int i=0; i<N; i++){
    arr[i] = rand() % 100;
}
arr[1] = 7;


cout<<linear_search(arr, N, 7)<<"\n";



insertion_sort1(arr, N);

for(int i=0;i<N;i++)
    cout<<"\n"<<arr[i];

cout<<"\n\n"<<b_search_iterative(arr, 0, N-1, 67) + 1;


}
int linear_search(int *arr, int size, int key){
if(size >= 1){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
 }
return -1;
}

int b_search(int *arr, int start, int end, int key){
if(start > end)
    return -1;
int mid = (start + end) / 2;
if(arr[mid] == key)
    return mid;
else if(arr[mid] < key)
    return b_search(arr, mid + 1, end, key);
else
    return b_search(arr, start, mid - 1, key);
}


int b_search_iterative(int *arr, int start, int end, int key){
    while(start <end){
        int mid = (start + end) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
}



