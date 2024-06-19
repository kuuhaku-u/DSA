def search(arr, t):
    for i in range(0, len(arr)):
        if arr[i] == t:
            print("FOUND")
            return
    print("NOT FOUND")
    return


if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    search(arr, 4)
