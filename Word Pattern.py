def wordPattern(pattern: str, s: str) -> bool:
    words = s.split(" ")
    index = 0
    dic = {}
    dic2 = {}
    if len(s) != len(pattern) - 1:
        return False
    for ch in pattern:
        if ch in dic or words[index] in dic2:
            if dic.get(ch) != words[index] or dic2.get(words[index]) != ch:
                return False
        dic[ch] = words[index]
        dic2[words[index]] = ch
        index += 1
    return True

## solo uso python para problemas de strings