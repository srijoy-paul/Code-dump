# # Taking input in list
# my_list = []
# n = int(input("Enter the number of elements in the list: "))

# print("Enter the elements of the list:")
# for i in range(n):
#     element = int(input())
#     my_list.append(element)

# # Displaying the original list
# print("Original list:", my_list)

# # Taking input for indices to swap
# index1 = int(input("Enter the index of the first element to swap: "))
# index2 = int(input("Enter the index of the second element to swap: "))

# # Swapping the elements at the specified indices
# my_list[index1], my_list[index2] = my_list[index2], my_list[index1]

# # Displaying the list after swapping
# print("List after swapping elements at index", index1, "and", index2, ":", my_list)

# 3b
# Taking input in list
# my_list = []
# n = int(input("Enter the number of elements in the list: "))

# print("Enter the elements of the list:")
# for i in range(n):
#     element = int(input())
#     my_list.append(element)

# # Finding the sum of numbers in the list
# list_sum = 0
# for num in my_list:
#     list_sum += num

# # Displaying the sum
# print("The sum of numbers in the list is:", list_sum)

# 3c
# Taking input in list
# my_list = []
# n = int(input("Enter the number of elements in the list: "))

# print("Enter the elements of the list:")
# for i in range(n):
#     element = int(input())
#     my_list.append(element)

# # Printing all the even numbers in the list
# print("Even numbers in the list are:")
# for num in my_list:
#     if num % 2 == 0:
#         print(num)

# 4a
# Taking input for the dimensions of the matrices
# rows = int(input("Enter the number of rows for both matrices: "))
# columns = int(input("Enter the number of columns for both matrices: "))

# # Taking input for the first matrix
# print("Enter elements of the first matrix:")
# matrix1 = []
# for i in range(rows):
#     row = []
#     for j in range(columns):
#         element = int(input())
#         row.append(element)
#     matrix1.append(row)

# # Taking input for the second matrix
# print("Enter elements of the second matrix:")
# matrix2 = []
# for i in range(rows):
#     row = []
#     for j in range(columns):
#         element = int(input())
#         row.append(element)
#     matrix2.append(row)

# # Adding the matrices
# result_matrix = []
# for i in range(rows):
#     row = []
#     for j in range(columns):
#         sum = matrix1[i][j] + matrix2[i][j]
#         row.append(sum)
#     result_matrix.append(row)

# # Displaying the result matrix
# print("The sum of the two matrices is:")
# for row in result_matrix:
#     print(row)

# Defining the matrices
matrix1 = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

matrix2 = [
    [9, 8, 7],
    [6, 5, 4],
    [3, 2, 1]
]
# 4b
# Initializing the result matrix with zeros
# result_matrix = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]

# # Multiplying the matrices
# for i in range(len(matrix1)):
#     for j in range(len(matrix2[0])):
#         for k in range(len(matrix2)):
#             result_matrix[i][j] += matrix1[i][k] * matrix2[k][j]

# # Displaying the result matrix
# print("The product of the two matrices is:")
# for row in result_matrix:
#     print(row)

# 5a
# Defining the matrix
# matrix = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]

# # Finding the transpose of the matrix
# transpose_matrix = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
# for i in range(len(matrix)):
#     for j in range(len(matrix[0])):
#         transpose_matrix[j][i] = matrix[i][j]

# # Displaying the transpose matrix
# print("The transpose of the matrix is:")
# for row in transpose_matrix:
#     print(row)

# 5b
# Defining the matrices
# matrix1 = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]

# matrix2 = [
#     [9, 8, 7],
#     [6, 5, 4],
#     [3, 2, 1]
# ]

# # Initializing the result matrix with zeros
# result_matrix = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]

# # Subtracting the matrices
# for i in range(len(matrix1)):
#     for j in range(len(matrix2[0])):
#         result_matrix[i][j] = matrix1[i][j] - matrix2[i][j]

# # Displaying the result matrix
# print("The difference of the two matrices is:")
# for row in result_matrix:
#     print(row)

# 6
# Taking input for the dictionary
my_dict = {}
num_items = int(input("Enter the number of items in the dictionary: "))

print("Enter key-value pairs:")
for i in range(num_items):
    key = input("Enter key: ")
    value = int(input("Enter value: "))
    my_dict[key] = value

# Finding the sum of all items in the dictionary
dict_sum = sum(my_dict.values())

# Displaying the sum
print("The sum of all items in the dictionary is:", dict_sum)



