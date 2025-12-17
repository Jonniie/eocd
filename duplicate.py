def has_duplicates(lst):
    """
    Returns True if the list contains any duplicate elements, False otherwise.
    Uses a hashmap (dictionary) to track element counts.
    """
    element_count = {}
    for item in lst:
        if item in element_count:
            element_count[item] += 1;
        else:
            element_count[item] = 1
    
    for key in element_count:
        if(element_count[key] > 1):
            return True;

    return False;

if __name__ == "__main__":
    print(has_duplicates([1, 2, 3, 4]))        # Output: False
    print(has_duplicates([1, 2, 3, 2]))        # Output: True
    print(has_duplicates(['a', 'b', 'c']))     # Output: False
    print(has_duplicates(['a', 'b', 'a']))     # Output: True