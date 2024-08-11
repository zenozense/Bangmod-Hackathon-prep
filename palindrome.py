def isPalindrome(x: int) -> bool:
    x = str(x)
    reverse = x[::-1]
    if x == reverse:
        return True
    elif x != reverse:
        return False

if __name__ == '__main__':
    print(isPalindrome(121))