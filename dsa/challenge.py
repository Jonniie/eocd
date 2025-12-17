

# Part 2
def remove_tags(str):
    res = []
    strings = str.split("\n")
    for s in strings:
        valid_string = ""
        valid = False;

        for char in s:
            if char == "<":
                valid = False;
                continue
            
            if char == ">":
                valid = True;
                continue;

            if(valid): valid_string += char;

        if(len(valid_string) > 0): res.append(valid_string)

    
    return res;




results = """
<li>100% Cotton</li>
<li class="highlight-gray">Imported</li>
<li></li>
<li><p>Machine Wash in Cold Water</p></li>
"""


print(remove_tags(results)) 
# ['100% Cotton', 'Imported', 'Machine Wash in Cold Water']



