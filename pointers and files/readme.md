                                   ASSIGNMENT-1: POINTER
Write a function of removeChar that removes all the occurrences of a character in a string.
For example, given a string of “ab cd 1    2” and a whitespace character, the string becomes “abcd12”.
You can assume that the string can be modified. 

1.	In the main function, ask the user to enter a string and a character to be removed.
2.	The entered string should be handled as a C-string (or is converted to a C-string).
3.	Write a removeChar function that takes a pointer parameter (char *) and a char parameter.
4.	In the main function, print out the original string and the string with the character being removed.
5.	The removeChar function should be implemented using the pointer notation only.
6.	Implement the function without using library functions.

                                  ASSIGNMENT-2: READ FROM .txt FILE
Write a program that processes the data of a retail company with the following requirements:
1.	Define a new data type of Customer using struct , with the following members: ID, first name, 
last name, number of items purchased, price of a single item, and total spending.
2.	In the main function, declare an array of Customer.
3.	The array should be created dynamically. In other words, you do not know how many customers when you write the program. The program can ask a user to enter the total number of customers, or better yet, let the code to count the number of records in the file.
4.	The main function reads the data from a file: “retails.txt”.
•	Each row represents a customer’s record, with ID, first name, last name, number of item purchased and the price of a single item.
•	The data columns are separated by whitespaces.
5.	Store the customer data in the array.
6.	Design a function, computeTotals, to calculate the total spending of each customer:

   total = numItems * price.

7.	computeTotals takes two parameters: an array of Customer and the number of customers.
8.	computeTotals must be coded with pointer notation (a 3-point deduction for non-pointer notations).
9.	In the main function, print out all records, including the total spending, such as:

    1001      Scott   Adams   3   22.86   68.58
    
    1002   Nicholas   Allen    8   10.00    80.00

