
def is_palindrome(word):
    return word == word[::-1]

def palindrome_pairs(words):
    d = {}
    result = []

    for i, word in enumerate(words):
        d[word] = i 
    
    for idx, word in enumerate(words):
        for char_i in range(len(word)):
            prefix, suffix = word[:char_i], word[char_i:]
            reversed_prefix = prefix[::-1]
            reversed_suffix = suffix[::-1]

            if (is_palindrome(suffix) and reversed_prefix in d):
                if idx != d[reversed_prefix]:
                    result.append((idx, d[reversed_prefix]))
            if (is_palindrome(prefix) and reversed_suffix in d):
                if idx != d[reversed_suffix]:
                    result.append((d[reversed_suffix], idx))
    return result



if __name__ == "__main__":
    words = ["code", "edoc", "da", "d"]
    result = palindrome_pairs(words)
    print(result)