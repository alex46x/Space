def ispal(text):
    return text == text[::-1]

a = input("Enter : ")
x = ispal(a)

print("Palindrome" if x else "Not palindrome")
