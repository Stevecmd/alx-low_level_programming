def findNum(listNums, target):
    # iterate aand find target
    for num in listNums:
        if num == target:
            return True
    # Target not found
    return False

nums = [1,2,3,4,5,6,7,8,9]
target = 1
foundNum = findNum(nums, target)
print(foundNum)

# n = 10 which is the size of the list
print("Best case is O(1), (Constant time) searching for an element at the beginning")
print("Average case is O(n), (linear time increase) searching for an element in the middle of the list")
print("Worst case is O(n), (linear time increase) searching for an element not present")
print(" ")
print("O(1): Constant time. The running time of the algorithm does not change as the size of the input increases.")
print("O(log n): Logarithmic time. The running time of the algorithm increases slowly as the size of the input increases.")
print("O(n): Linear time. The runnig time of the algorithm increases at the same rate as the size of the input.")
print("O(n log n): Linearithmic time. The running time of the algorithm increases at a rate betweenlinear and logarithmic time as the size of the input increases.")
print("On^2: Quadratic time. The running time of the algorithm increases at a rate proportional to the square of the size of the input.")
