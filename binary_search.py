def binary_search(arr, start, end, key):
    if(start > end):
        return -1
    mid = (start + end) / 2
    mid = int(mid)
    if arr[mid] == key:
        return mid
    elif arr[mid] < key:
        return binary_search(arr, mid + 1, end, key)
    else:
        return binary_search(arr, start, mid - 1, key)
    
def binary_search_iterative(arr, start, end, key):
    while(start <= end):
        mid = (start + end) / 2
        mid = int(mid)
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            start = mid + 1
        else:
            end = mid - 1
            
            
print(binary_search([x for x in range(100)], 0, 99, 7))
    
       

