import random
import time

def count_even1(numbers):
    result = 0
    for x in numbers:
        if x % 2 == 0:
            result += 1
    return result


def count_even2(numbers):
    return sum(x % 2 == 0 for x in numbers)

n = 1000
print("n:", n)
random.seed(1337)
numbers = [random.randint(1, 10**7) for _ in range(n)]

start_time1 = time.time()
result1 = count_even1(numbers)
end_time1 = time.time()


print("result1:", result1)
print("time1:", round(end_time1 - start_time1, 5), "s")

start_time2 = time.time()
result2 = count_even2(numbers)
end_time2 = time.time()


print("result2:", result2)
print("time2:", round(end_time2 - start_time2, 5), "s")