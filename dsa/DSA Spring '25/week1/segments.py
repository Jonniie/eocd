def find_segments(data):
    res = []
    temp = 0
    curr = data[0]

    for i in range(len(data)):
        if data[i] == curr:
            temp+=1
        else:
            l = (temp, curr)
            res.append(l)
            temp = 1;
            curr = data[i]

    res.append((temp, curr))
    return res
        