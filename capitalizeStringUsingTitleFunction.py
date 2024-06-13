def solve(s):
    # Capitalize the first letter of each word
    return s.title()

if __name__ == '__main__':
    s = input()
    result = solve(s)
    print(result)
