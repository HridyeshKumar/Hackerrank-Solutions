def minion_game(string):
    vowel = "AEIOU"
    sc = 0
    kc = 0
    x = len(string)
    for i in range(x):
        if string[i] in vowel:
            kc += x - i
        else:
            sc += x - i
    if sc > kc:
        print("Stuart", str(sc))
    elif kc > sc:
        print("Kevin", str(kc))
    else:
        print("Draw")


if __name__ == '__main__':
    s = input()
    minion_game(s)
