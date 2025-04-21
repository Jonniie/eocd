import random
import time

lst = []

def add(num):
    lst.append(num);

def remove():
    lst.pop(0);
    

n = 1000
print("n:", n)
random.seed(1337)
numbers = [random.randint(1, 10**5) for _ in range(n)]


start_add = time.time()
for num in numbers:
    add(num);   
end_add = time.time()

print("time1:", round(end_add - start_add, 20), "s")

start_rem = time.time()
for num in numbers:
    remove(); 
end_rem = time.time()


print("time2:", round(end_rem - start_rem, 5), "s")