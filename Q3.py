# Input a list of numbers and get the second largest number from the list.
import array as arr

def bubbleSort(tup):
    n = len(tup)

    for i in range(n-1):

        for j in range(0, n - i - 1):

            if tup[j] > tup[j+1]:

                tup[j], tup[j+1] = tup[j+1], tup[j]



arr1 = arr.array('5')

for i in range(5):
    arr1[i] = input("Enter a number")

for j in range(5):
    print(arr1[j])

print(bubbleSort(arr1))
print("\n")
print(arr1(4))



