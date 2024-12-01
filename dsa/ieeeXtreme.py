# a simple parser for python. use get_number() and get_word() to read
def parser():
    while 1:
        data = list(input().split(' '))
        for number in data:
            if len(number) > 0:
                yield(number)   

input_parser = parser()

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)

def gcf(a, b):
    if(b == 0):
        return abs(a)
    else:
        return gcf(b, a % b)

N = get_number()
Q = get_number()

res = []

salary = []
happiness = []
avg_salary = 0;
avg_happiness = 0;

for i in range(N):
    salary.append(get_number())
    happiness.append(0)

def action(id):
    if(id == 0):
        l = get_number()
        r = get_number()
        c = get_number()
        for i in range(l-1,r):
            if salary[i] > c :
                happiness[i] -= 1;
            elif salary[i] < c :
                happiness[i]+=1;
            salary[i] = c;
            
    if(id == 1):
        # 1 l r c
        l = get_number()
        r = get_number()
        c = get_number()
        for i in range(l-1,r):
            if(c > 0):
                happiness[i]+=1;
            elif (c < 0):
                happiness[i] -= 1;
            salary[i] += c
        
    if(id == 2):
        # 2 l r
        l = get_number()
        r = get_number()
        total_sal = 0;
        for i in range(l-1,r):
            total_sal += salary[i]
        
        div = gcf(total_sal, r-l+1)
        val = (f'{int(total_sal/div)}/{int((r-l+1)/div)}')
        res.append(val)

    if(id == 3):
        # 3 l r
        l = get_number()
        r = get_number()
        total_hap = 0;
        for i in range(l-1,r):
            total_hap += happiness[i]
        div = gcf(total_hap, r-l+1)

        val = (f'{int(total_hap/div)}/{int((r-l+1)/div)}')
        res.append(val)

for i in range(Q):
    idx = get_number();
    action(idx);

for i in range(0, len(res)):
    print(res[i])
      
    

    