              ASSIGNMENT - 1

(1)	Design a class of Student that has the following attributes:

•	Data members: first name, last name, ID, Mathematics score and Biology score.

•	Function members: 

(1) A default constructor and a constructor that accepts actual arguments.

(2) The get methods that return names and ID. 

(3) A compAveScore() function that computes and returns the average score. average score = (Mathematics score + Biology score)/2.0

(2)	In the main function, test the Student class as follows:

•	Declare an array of three elements.

•	Create three Student objects:  a(“Amy”, ”Miller”, 1001, 60, 66),  b(“John”, “Smith”, 1002, 70,77) and c(“Eric”, “Taylor”, 1003, 80, 88), and then assign three objects to the array.

•	Loop through all objects and print out their names, IDs and average scores like:

Amy   Miller  1001  63.0

John  Smith   1002  73.5

Eric  Taylor  1003  84.0



      ASSIGNMENT-2  

(1)	Derive a child class of GradStudent by treating Student as a parent class.

•	Add a new data member: Biometrics score. 

•	Add new function members: 

(1) A default constructor and a constructor that accepts actual arguments; 

•	Override the compAveScore() function to take into account the Biometrics score:

average score = (Mathematics score + Biology score + Biometrics score)/3.0


(2)	In the main function, test the two classes as follows:

•	Declare an empty vector.

•	Add two Student objects to the vector:  

a(“Amy”, ”Miller”, 1001, 60, 66) and  b(“John”, “Smith”, 1002, 70,77).

•	Add two GradStudent objects to the vector: 

c(“Diane”, ”Myers”, 2001, 80, 84, 88) and  d(“Scott”, “Baker”, 2002, 90, 91, 98).

•	Loop through all objects using an iterator and print out their names, IDs and average scores like:


Amy    Miller  1001  63.0

John   Smith   1002  73.5

Diane  Myers   2001  84.0

Scott  Baker   2002  93.0
