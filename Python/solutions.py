"""EST1 HackerRank practice solutions - Python 3.
Each function implements the core HackerRank challenge logic.
Add the challenge-specific input/output wrapper when submitting.
"""

from collections import Counter, deque
from math import gcd, isqrt

def simple_array_sum(ar): return sum(ar)

def plus_minus(arr):
    n = len(arr)
    return (sum(x > 0 for x in arr)/n, sum(x < 0 for x in arr)/n, sum(x == 0 for x in arr)/n)

def diagonal_difference(a):
    n = len(a)
    return abs(sum(a[i][i] - a[i][n-1-i] for i in range(n)))

def camelcase(s): return 1 + sum(c.isupper() for c in s) if s else 0

def super_reduced_string(s):
    st = []
    for c in s:
        if st and st[-1] == c: st.pop()
        else: st.append(c)
    return ''.join(st) or 'Empty String'

def pangrams(s): return 'pangram' if len(set(c.lower() for c in s if c.isalpha())) == 26 else 'not pangram'

def recursive_digit_sum(n, k):
    p = str(sum(map(int, str(n))) * k)
    while len(p) > 1: p = str(sum(map(int, p)))
    return int(p)

def power_sum(X, N, start=1):
    if X == 0: return 1
    total = 0
    for i in range(start, int(X ** (1/N)) + 1):
        rem = X - i**N
        if rem >= 0: total += power_sum(rem, N, i+1)
    return total

def between_two_sets(a, b):
    l = 1
    for x in a: l = l*x//gcd(l, x)
    g = b[0]
    for x in b[1:]: g = gcd(g, x)
    return sum(g % x == 0 for x in range(l, g+1, l))

def restaurant(l, b):
    g = gcd(l, b)
    return (l//g) * (b//g)

def two_strings(s1, s2): return 'YES' if set(s1) & set(s2) else 'NO'

def check_magazine(magazine, note):
    c = Counter(magazine)
    for w in note:
        if c[w] == 0: return 'No'
        c[w] -= 1
    return 'Yes'

def is_balanced(s):
    pairs = {')':'(', ']':'[', '}':'{'}
    st = []
    for c in s:
        if c in '([{': st.append(c)
        elif not st or st.pop() != pairs.get(c): return 'NO'
    return 'YES' if not st else 'NO'

def equal_stacks(h1, h2, h3):
    sums = [sum(h1), sum(h2), sum(h3)]
    stacks = [list(h1), list(h2), list(h3)]
    idx = [0, 0, 0]
    while len(set(sums)) > 1:
        j = sums.index(max(sums))
        if idx[j] == len(stacks[j]): return 0
        sums[j] -= stacks[j][idx[j]]
        idx[j] += 1
    return sums[0]

def queue_two_stacks(operations):
    incoming, outgoing, result = [], [], []
    for op in operations:
        if op[0] == 1: incoming.append(op[1])
        elif op[0] == 2:
            if not outgoing:
                while incoming: outgoing.append(incoming.pop())
            if outgoing: outgoing.pop()
        else:
            if not outgoing:
                while incoming: outgoing.append(incoming.pop())
            result.append(outgoing[-1] if outgoing else None)
    return result

def maximum_element(operations):
    st, mx, out = [], [], []
    for op in operations:
        if op[0] == 1:
            st.append(op[1]); mx.append(max(op[1], mx[-1] if mx else op[1]))
        elif op[0] == 2:
            if st: st.pop(); mx.pop()
        elif mx: out.append(mx[-1])
    return out

def largest_rectangle(h):
    st, best = [], 0
    for i, x in enumerate(h + [0]):
        start = i
        while st and st[-1][1] > x:
            j, height = st.pop()
            best = max(best, height * (i-j))
            start = j
        st.append((start, x))
    return best

def ice_cream_parlor(m, arr):
    seen = {}
    for i, x in enumerate(arr, 1):
        if m-x in seen: return [seen[m-x], i]
        seen[x] = i

def closest_numbers(arr):
    arr.sort()
    d = min(arr[i+1]-arr[i] for i in range(len(arr)-1))
    return [v for i in range(len(arr)-1) if arr[i+1]-arr[i] == d for v in (arr[i], arr[i+1])]

def pairs(k, arr):
    s = set(arr)
    return sum(x+k in s for x in s)

def triple_sum(a, b, c):
    a, b, c = sorted(set(a)), sorted(set(b)), sorted(set(c))
    i = j = k = ans = 0
    while j < len(b):
        while i < len(a) and a[i] <= b[j]: i += 1
        while k < len(c) and c[k] <= b[j]: k += 1
        ans += i*k; j += 1
    return ans

def max_subarray_sum_mod(arr, m):
    # Maximum subarray sum modulo m, O(n log n).
    import bisect
    prefix = ans = 0
    seen = [0]
    for x in arr:
        prefix = (prefix + x) % m
        ans = max(ans, prefix)
        i = bisect.bisect_right(seen, prefix)
        if i < len(seen): ans = max(ans, (prefix-seen[i]+m) % m)
        bisect.insort(seen, prefix)
    return ans

def lonely_integer(a):
    ans = 0
    for x in a: ans ^= x
    return ans

def flipping_bits(n): return n ^ 0xFFFFFFFF

def maximizing_xor(l, r):
    x = l ^ r
    return (1 << x.bit_length()) - 1

def time_complexity_primality(n):
    if n < 2: return 'Not prime'
    if n % 2 == 0: return 'Prime' if n == 2 else 'Not prime'
    for d in range(3, isqrt(n)+1, 2):
        if n % d == 0: return 'Not prime'
    return 'Prime'
