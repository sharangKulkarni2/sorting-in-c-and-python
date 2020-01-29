def selction_sort(arr, size):
    for i in range(n-1):
        smallest = arr[i]
        for j in range(i+1, n):
            if smallest > arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
                smallest = arr[i]

                
#trying on an example
arr = [1, 2, 4, 3, 8, 5, 6, 7]
merge_sort(arr, 8)
for i in range(len(arr)):
    print(arr[i])
