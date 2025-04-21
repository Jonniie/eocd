def check_number(number):
    arr = [3,7,1, 3, 7, 1, 3, 7]
    sum = 0

    if number[0] != "0" or number == "0":
        return False

    for i in range(len(number) - 1): 
        sum += (int(number[i]) * arr[i])


    if(sum%10 == 0):
        return int(number[-1]) == 0

    return int(number[-1]) == 10 - sum%10
