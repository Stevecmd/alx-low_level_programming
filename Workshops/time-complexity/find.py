

def find(nums, target):
    for i in nums:
        if i == target:
            return True

    return False

def find2(nums, target):
    pass

nums = [1,2,3,2,4,6,7]
print(find(nums, 3))
print(find(nums, 8))
print(find(nums, 1))

    
