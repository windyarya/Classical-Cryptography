def encrypt(text, s):
    result = ""
 
    for i in range(len(text)):
        char = text[i]
        if (char.isupper()):
            result += chr((ord(char) + s - 65) % 26 + 65)
        else:
            result += chr((ord(char) + s - 97) % 26 + 97) 
    return result

def decrypt(text, s):
    result = ""

    for i in range(len(text)):
        char = text[i]
        if (char.isupper()):
            result += chr((ord(char) - 65 - s) % 26 + 65)
        else:
            result += chr((ord(char) - 97 - s) % 26 + 97) 
    return result

choice = int(input("Encrypt (1) or Decrypt (2): "))
if (choice == 1):
    p = str(input("Enter your text: "))
    s = int(input("Enter the shift: "))
    cipher = encrypt(p, s)
    print("Plaintext: " + p)
    print("Ciphertext: "+ cipher)
else:
    p = str(input("Enter your text: "))
    s = int(input("Enter the shift: "))
    plain = decrypt(p, s)
    print("Ciphertext: " + p)
    print("Plaintext: "+ plain)
