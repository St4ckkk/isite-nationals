rows = 5
# Top half
for i in range(rows):
    # increment 1 to 5, (upper left)                   
    for j in range(i + 1):                            
        print("*", end=" ")                            
    #decrement 5 to 1, starts at (upper right)         
    for k in range(5, i, -1):                           
        print(k, end=" ")                              
        
    #decrement 5* to 1, starts at (upper left)       
    for k in range(5, i, -1):                          
        print("*", end=" ")
     
    # increment 1 to 5 starts at (upper right)
    for k in range(i + 1):
        print(k + 1, end=" ")
    print()


# Bottom half
for i in range(rows, 0, -1):
    #decrement, starts at (upper left)
    for j in range(i):
        print(j + 1, end=" ")
        
    # increment 1 to 5, starts at (upper right)
    for j in range(5 + 1, i, -1):
        print("*", end=" ")
        
    #decrement 5 to 1, starts at at (upper right)      
    for j in range(6, i, -1):
        print(j - 1, end=" ")
        
    #decrement 5 to 1, starts at at (upper right)      
    for k in range(i):
        print("*", end=" ")
    print()
