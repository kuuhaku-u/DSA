def sort(arr):
    l = len(arr)
    for i in range(l - 1):
        min_idx = i
        for j in range(i + 1, l):
            if arr[min_idx] > arr[j]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    print(arr)


if __name__ == "__main__":
    arr = [12, 2, 4, 5, 1, 5, 45]
    sort(arr)
