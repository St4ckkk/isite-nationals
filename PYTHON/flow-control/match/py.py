def match_point(x, y):
    match (x, y):
        case (0, 0):
            print("Origin")
        case (0, y):
            print(f"Y={y}")
        case (x, 0):
            print(f"X={x}")
        case (x, y):
            print(f"X={x}, Y={y}")
        case _:
            raise ValueError("Not a point")

match_point(0, 0)
match_point(0, 5)
match_point(10, 0)
match_point(3, 4)
match_point(1, 2, 3)  # Raises ValueError