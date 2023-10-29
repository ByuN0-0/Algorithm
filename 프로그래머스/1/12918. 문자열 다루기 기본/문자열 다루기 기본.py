def solution(s):
    if len(s)!=4 and len(s)!=6:
        return False
    for ch in s:
        if '0'<=ch<='9':
            pass
        else:
            return False
    return True