 
def main():
    file_name = input("Enter file name:\t")
    word = input("Enter word:\t")

    with open(file_name) as file:
        if word in file.read():
            print("I don\'t like snakes but the quest is done and the word is found")

main()