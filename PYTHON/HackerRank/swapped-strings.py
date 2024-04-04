def swap_case(s):
    for char in s:
        swapped = ''
        if char.islower():
            swapped += char.upper()
        elif char.isupper():
            swapped += char.lower()
        else:
            swapped += char
            
    return swapped

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)