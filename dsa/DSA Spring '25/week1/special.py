def check_year(year):
    l = (str(year)[0:2])
    r = (str(year)[2:])

    return (int(l) + int(r))**2 == int(year)
