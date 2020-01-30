def linear_search(arr, size, key):
    for index, item in list(zip(arr, range(len(arr)))):
        if(item == key):
            return index
    return -1

print(linear_search([x for x in range(100)], 100, 7))
