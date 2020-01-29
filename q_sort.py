def partition(arr, start, end):
    pivot = end
    pivot_element = arr[pivot]
    i = start
    j = end - 1
    while i < j:
        while arr[i] < pivot_element:
            i+=1
        while arr[j] > pivot_element:
            j-=1
        if i < j:
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
    temp = arr[i]
    arr[i] = arr[pivot]
    arr[pivot] = temp
    return i


def q_sort(arr, start, end):
    if not (start < end):
        return 
    partition_number = partition(arr, start, end)
    q_sort(arr, start, partition_number - 1)
    q_sort(arr, partition_number + 1, end)
           
           
#trying on an example
arr = [1, 2, 4, 3, 8, 5, 6, 7]
merge_sort(arr, 8)
for i in range(len(arr)):
    print(arr[i])
