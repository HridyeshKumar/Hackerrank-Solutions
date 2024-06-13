# Creating lists for different character types
l, u, o, e = [], [], [], []

# Sorting the input string
for i in sorted(input()):
    if i.islower():
        l.append(i)
    elif i.isupper():
        u.append(i)
    elif i.isdigit():
        if int(i) % 2 == 0:
            e.append(i)
        else:
            o.append(i)

# Printing the sorted string
print(''.join(l + u + o + e))
