

def find(nums, target):
    for i in nums:
        if i == target:
            return True

    return False

def find2(nums, target):
    pass

def get_index_val(nums, index):
    val = nums[index]
    return

nums = [1,2,3,2,4,6,2,7]
print(find(nums, 3))
print(find(nums, 8))
print(find(nums, 1))

    
