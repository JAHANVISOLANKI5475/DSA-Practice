def smallestpositive(self, array, n): 
           sum = 1
           i = 0 
           array.sort()
           while i<n and array[i] <= sum:
                 sum = sum + array[i]
                 i = i + 1
           return sum
