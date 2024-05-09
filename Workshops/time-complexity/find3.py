

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

def get_letters():
    letters = "abc"
    return letters

def print_name(name):
    to_print = f"{name}" # O(n)
    print(name) # O(n)

# what is the type of name?
# name is a string
# what is the maximum length of the string or name?
# assuming len(name) = n and 1 <= n < 10 ** 7

nums = [1,2,3,2,4,6,2,7]
print(find(nums, 3))
print(find(nums, 8))
print(find(nums, 1))

    
