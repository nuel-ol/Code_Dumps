



filename = input("Enter filename: ").strip()

while (True):
    with open(filename, "a") as writefile:
        file_content = input("Enter file content: ")
        writefile.write(f"{file_content} \n")
        
        user_confirmation = input("Continue writing to file (Enter Y/N): ")
        if (user_confirmation.lower() == "n"):
            break



#file_list = []
with open(filename) as readfile:
     file_list = readfile.readlines()    
     print(sorted(file_list, reverse = False))        