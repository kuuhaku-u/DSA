

def sort(arr):
    n = len(arr)
    
    for i in range(n):
        swapped = False
        
        for j in range (0,n-i-1):
            
            if arr[j] > arr[j+1]:
                
                arr[j],arr[j+1] = arr[j+1], arr[j]
                swapped = True
                
        if swapped == False:
            break
        
    print(arr)

arr = [12,0x3,1990,28,0x4,2008]

sort(arr)

