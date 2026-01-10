text = " cyber security is important in the modern world cyber threats are increasing."
words = text.split()
freq = {}
for word in words:
    freq[word] = freq.get(word , 0)+1

print(freq)    