def merge_the_tools(string, k):
    my_list = []
    for i in range(
        0, len(string), k
    ):  # gi split nato ang substring to k, so kay si k=3, ang substring mag by 3 na characters
        my_list.append(string[i : i + k])  # append ang substring sa my_list
    for substring in my_list:  # iterate sa my_list
        repeating_chars = []  # initialize empty list
        for char in substring:  # iterate sa substring
            if (
                char not in repeating_chars
            ):  # if dili repeating characters for every chari i add nato atong char sa repeating_chars
                repeating_chars.append(char)
        print(
            "".join(repeating_chars)
        )  # then join nato ang repeating_chars nga list into string


if __name__ == "__main__":
    string, k = input(), int(input())
    merge_the_tools(string, k)
