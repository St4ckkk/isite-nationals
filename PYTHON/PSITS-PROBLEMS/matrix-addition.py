mx_size = int(input("Enter size of matrix: "))

mxs = []

for i in range(2):
    print(f'Enter matrix {i+1}: ')
    mx = []
    for _ in range(mx_size):
        row = []
        row_input = input().split()
        for element in row_input:
            row.append(int(element))
        mx.append(row)
    mxs.append(mx)

result = []
for i in range(mx_size):
    result.append([0] * mx_size)

for i in range(mx_size):
    for j in range(mx_size):
        result[i][j] = mxs[0][i][j] + mxs[1][i][j]
        
print("Resultant matrix after adding columns of both matrices:")
for row in result:
    print(row)