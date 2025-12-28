def linear_search(arr, key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i      # element found
    return -1              # element not found


size = int(input())
arr = list(map(int, input().split()))
key = int(input())

result = linear_search(arr, key)

if result != -1:
    print(result)
else:
    print(-1)
