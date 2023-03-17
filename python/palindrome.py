def is_palindrome(word):
    return word == word[::-1]

def palindrome_pairs(words):
    result = []
    for i, wordi in enumerate(words):
        for j, wordj in enumerate(words):
            if i == j:
                continue
            if is_palindrome(wordi + wordj):
                result.append((i,j))

    return result


if __name__ == "__main__":
    words = ["code", "edoc", "da", "d"]
    result = palindrome_pairs(words)
    print(result)