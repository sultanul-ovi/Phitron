# TO READ

# myfile = open("fruits.txt")
# content = myfile.read()
# myfile.close()

with open("Basics/files/fruits.txt", "r") as myfile1:
    content1 = myfile1.read()


#print(content1)

#TO WRITE

with open("Basics/files/veg.txt", "w") as myfile2:
    myfile2.write("Tomato\nOnion\nGarlic\n")


#TO Append

with open("Basics/files/nonveg.txt", "a") as myfile3:
    myfile3.write("Tomato\nOnion\nGarlic\n")
    
    
#TO Append and read #best method

with open("Basics/files/nonveg.txt", "a+") as myfile3:
    myfile3.write("Tomato\nOnion\nGarlic\n")
    myfile3.seek(0)
    content3 = myfile3.read()


print(content3)

#file processing inside function
# def foo(character, filepath="bear.txt"):
#     file = open(filepath)
#     content = file.read()
#     return content.count(character)

#copy n times
# with open("data.txt", "a+") as file:
#     file.seek(0)
#     content = file.read()
#     file.seek(0)
#     file.write(content)
#     file.write(content)