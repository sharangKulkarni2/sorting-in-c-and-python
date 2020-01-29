# merge logic merges two sorted lists into a single list
def merge(left, left_size, right, right_size, arr, size):
    i = j = k = 0
    while i < left_size and j <right_size:
        if(left[i] < right[i]):
            arr[k] = left[i]
            i+=1
            k+=1
        else:
            arr[k] = right[j]
            j+=1
            k+=1
    while i < left_size:
        arr[k] = left[i]
        i+=1
        k+=1
    while j < right_size:
        arr[k] = right[j]
        k+=1
        j+=1


# recursive breaking list into 2 lists and sorting with merge
def merge_sort(arr, size):
    if size == 1:
        return
    mid = size / 2
    left = arr[0:int(mid)].copy()
    right = arr[int(mid):int(size)].copy()
    merge_sort(left, mid)
    merge_sort(right, size - mid)
    merge(left, mid, right, size - mid, arr, size)

#trying on an example
arr = [1, 2, 4, 3, 8, 5, 6, 7]
merge_sort(arr, 8)
for i in range(len(arr)):
    print(arr[i])


