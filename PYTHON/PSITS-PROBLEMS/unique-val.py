n = int(input("Enter the size of array: "))

my_list = []
print("Enter the elements of the array: ")
for i in range(n):
    element = int(input())
    my_list.append(element)

unique_num = []
for num in my_list:
    if my_list.count(num) == 1 and num not in unique_num: #i-check na diri ang my_list kung value sang num nag appear kaisa kag wala pa sa unique_num array
        unique_num.append(num) # so i add nato diri siya using append() function

print(f'Unique number: {unique_num}')
    