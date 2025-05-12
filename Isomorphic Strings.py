def isIsomorphic(s: str, t: str):
    if len(s) != len(t):
        return False
        
    s_to_t = {}
    t_to_s = {}
    
    for i in range(len(s)):
        char_s = s[i]
        char_t = t[i]
        
        if char_s in s_to_t:
            if s_to_t[char_s] != char_t:
                return False
        elif char_t in t_to_s:
            if t_to_s[char_t] != char_s:
                return False
        else:
            s_to_t[char_s] = char_t
            t_to_s[char_t] = char_s
    
    return True

# lo que tenía que tener en cuenta es que la única condición que debe cumplir ambas strings es que si mapeo una con la otra
# sea biyectivo. O sea que cada caracter se mapea solo con uno otro y biceversa. Si uno llegase a repetirse ya no es
# isomórfico