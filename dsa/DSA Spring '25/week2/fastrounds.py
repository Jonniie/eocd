def count_rounds(nums):
    n = len(nums)
    pos = [0] * (n + 1) 
    for idx, num in enumerate(nums):
        pos[num] = idx
    
    rounds = 1
    for i in range(1, n):
        if pos[i + 1] < pos[i]:
            rounds += 1
    
    return rounds
