from string import ascii_lowercase as alc

def print_rangoli(size):
    if size == 1:
        print(alc[0])
        return

    alpha_slice = [*alc[:size]]
    rangoli = []

    for i in range(size):
        center = alpha_slice[i]  # Isolate center letter for easy padding
        half_line = '-'.join([y for y in alpha_slice[i + 1:]])
        rangoli.append((center + half_line).center(4 * size - 3, '-'))

    print("\n".join(rangoli[:0:-1] + rangoli))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
