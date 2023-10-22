from itertools import permutation

sentence = input("Enter any a sentence with spaces.")

#extracting words
word = sentence.split()
n = len(sentence)
m=0

for c in sentence:
    if c == " ":
        m=m+1

# makes combinations of words taking all words at a time
comb = permutation(word, m)
for i in comb:
    print(i)










