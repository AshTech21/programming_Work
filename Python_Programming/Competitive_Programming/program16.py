# Q16. Write a program which accepts one character from user and check wheather it is vowel or not.

# Function Name : ChkVowel()
# Work : Accept one character from user and check wheather it is vowel or not.

def ChkVowel(char):
    flag = False

    if (char == 'a' or char == 'A') or (char == 'e' or char == 'E') or (char == 'i' or char == 'I') or (char == 'o' or char == 'O') or (char == 'u' or char == 'U'):
        flag = True
    return flag

def main():
    Value = '\0'

    print("Enter a Character :")
    Value = (input())

    Ret = ChkVowel(Value)

    if (Ret == True):
        print(f"{Value} is a vowel.\n")
    else:
        print(f"{Value} is not a vowel.\n")
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a Character :
A
A is a vowel.

Enter a Character :
a
a is a vowel.

Enter a Character :
I
I is a vowel.


"""