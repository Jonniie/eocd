def count_numbers(a, b):
    res = set(("2", "5"));
    combo = set(("2", "5"));
    
    if (b-a <= 10) and (b <= 10):
        if (b < 2 and a < 2) or (a > 5 and b > 5):
            return 0;
        elif (b >= 5 and a <= 2):
            return len(res);
        elif (b < 5 and a >= 1):
            return 1;

    blen = len(str(b))
    idx = 2;

    while idx <= blen:
        temp = set()
        for curr in combo:
            new_num2 = curr.ljust(idx, "2");
            new_num5 = curr.ljust(idx, "5");
            if (int(new_num2) >= a and int(new_num2) <= b):
                res.add(new_num2);
            if (int(new_num5) >= a and int(new_num5) <= b):
                res.add(new_num5);

            temp.add(new_num2)
            temp.add(new_num5)

        combo |= temp;
        
        idx += 1

    if a > 5: return len(res) - 2
    elif a > 2: return len(res) - 1
    else: return len(res)


