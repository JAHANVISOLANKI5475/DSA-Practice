def product(nums):
    prod = 1
    zerocount = 0
    for i in nums:

        if i==0:
            zerocount+=1
        if zerocount==2:
            return False,1
    if zerocount==1:
        return False,0
    else:
        for i in nums:
            prod*=i
        return True, prod


class Solution:

    def productExceptSelf(self, nums,n):
        new_list = []
        bol,prod = product(nums)
        if bol:
            for num in nums:
                new_list.append(prod // num)
            return new_list
        else:
            if prod==1:
                return [0]*len(nums)
            for idx,num in enumerate(nums):
                x = nums[:idx]+ nums[idx+1:]
                if product(x)[1]!=0:
                    new_list.append(product(x)[1])
                else:
                    new_list.append(0)
            return new_list
