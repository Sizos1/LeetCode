def isPalindrome(self, s):
    """
    :type s: str
    :rtype: bool
    """
    # Remove all non-alphanumeric characters and convert to lowercase
    s = ''.join(c.lower() for c in s if c.isalnum())
    
    # Check if the string is equal to its reverse
    return s == s[::-1]

# En python es mucho más fácil