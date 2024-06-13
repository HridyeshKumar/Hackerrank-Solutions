def solve(s):
    # Split the input string into words
    words = s.split()

    # Capitalize the first letter of each word
    capitalized_words = [word.capitalize() for word in words]

    # Join the words back into a single string
    return ' '.join(capitalized_words)

if __name__ == '__main__':
    s = input()
    result = solve(s)
    print(result)
