# Taking input from the user
s = input()

# Using the lambda function to filter and then sort
s = sorted(s, key=lambda x: (x.isdigit() and int(x) % 2 == 0, x.isdigit(), x.isupper(), x.islower(), x))

# Printing the sorted string
print(*s, sep='')
