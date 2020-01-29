def insertion_sort(arr, size):
    for hole in range(1, n):
        value = arr[hole]
        i = hole - 1
        while i >= 0:
            if arr[i] > value:
                arr[i+1] = arr[i]
            else:
                break
        arr[i+1] = value
        
#trying on an example
arr = [1, 2, 4, 3, 8, 5, 6, 7]
merge_sort(arr, 8)
for i in range(len(arr)):
    print(arr[i])
