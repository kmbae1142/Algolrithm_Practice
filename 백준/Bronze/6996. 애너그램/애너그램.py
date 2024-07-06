for _ in range(int(input())):
    word1, word2 = input().split()

    w1 = sorted(word1)
    w2 = sorted(word2)

    if w1 == w2:
        print(f"{word1} & {word2} are anagrams.")
    else:
        print(f"{word1} & {word2} are NOT anagrams.")