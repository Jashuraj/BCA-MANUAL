//Coding Done By Jashwanth Raj
#include<stdio.h>
#include<conio.h>
void main()
{
int i,one,two,three,four,five,six,seven,eight;
printf("###########################  PROTOTYPE PROGRAM ###########################\n\n");
printf(" # Title       : BCA Manual. \n");
printf(" # Version     : Demo \n");
printf(" # Coded By    : Jashwanth Raj J.R\n");
printf(" # Code Link   : https://github.com/Jashraj/Food-Suggestion \n");
printf(" # My Web      : https://jashwanth-raj.github.io/website.github.io/#\n\n");
printf("###########################  NOTE  ###########################\n\n");
printf(" # Note        : This is an open source project it contain bugs.\n                 This software is developed in JAN-2023 due to this only FOUR SEM are contains information.\n                 We will update information later.\n");
printf(" # Disclimer   : Educational Purpose Only\n");
printf("\n########################  BCA MANUAL  ########################\n");
printf(" Enter The Numerical Value According To SEM\n\n");
printf(" First SEM:-->[1]\n Second SEM:-->[2]\n Third SEM:-->[3]\n Fourth SEM:-->[4]\n Fifth SEM:-->[5]\n Sixth SEM:-->[6]\n Seventh SEM:-->[7]\n Eigth SEM:-->[8]\n");
printf("\n Enter Your Input:");
strtol("%d",&i);
switch (i)
{
case 1:printf("\n*You Have Selected 1st SEM\n"); printf(" These Are The Subjects In BCA First SEM\n");
       printf(" [1] Fundamentals Of Computer\n [2] Programming In C\n [3] Mathematical Foundation/Accountancy\n [4] LAB: Information Technology\n [5] LAB: C Programming\n [6] Environmental Studies\n [7] Open Elective:(Depends Upon Collage)");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&one);
       switch(one)
       {
       case 1: printf("\nYou Have Selected: [1] Fundamentals Of Computer\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Introduction to computer\n Unit-2 : Number Systems\n Unit-3 : Computer Software\n Unit-4 : Introduction to computer\n Unit-5 : Input and Output Devices\n Unit-6 : Operating System Fundamentals\n Unit-7 : Unix Operating System\n Unit-8 : Introduction to Database Management Systems\n Unit-9 : Internet Basics\n Unit-10 : Web Basics\n");
        break;
       case 2: printf("\nYou Have Selected: [2] Programming In C\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Overview of C\n Unit-2 : C Programming Basic Concepts\n Unit-3 : Input and Output with C\n Unit-4 : Operators and Expressions\n Unit-5 : Control Structures\n Unit-6 : Arrays\n Unit-7 : Strings\n Unit-8 : Pointers\n Unit-9 : User Defined Functions\n Unit-10 : User Defined Data Types\n");
       break;
       case 3: printf("\nYou Have Selected: [3] Mathematical Foundation\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Basic concepts of set theory\n Unit-2 : Operations on sets\n Unit-3 : Matrix algebra\n Unit-4 : Matrix\n Unit-5 : Differential Calculus\n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Information Technology\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: HARDWARE\n Prg-1 : Identification of the peripherals of computer, components in a CPU and their functions.\n Prg-2 : Assembling and Disasembing the system hardware components of personal computer.\n Prg-3 : Basic Computer Hardware Trouble Shooting.\n Prg-4 : LAN and WiFi Basics.\n Prg-5 : Operating System Installation- Windows OS, UNIX/LINUX, Dual Booting.\n Prg-6 : Installation and Uninstallation of Software.\n Prg-7 : System Configuration.\n");
                printf(" PART-B: SOFTWARE\n Prg-1 : Activities Using Word Processor Software.\n Prg-2 : Activities Using Spreadsheets Software.\n Prg-3 : Activities Using Presentation Software.\n Prg-4 : Activities Involving Multimedia Editing(Images,Video,Audio...).\n Prg-5 : Task Involving Internet Browsing.\n Prg-6 : Flow charts: Installation and using of flowgarithms software for diffrent arithmetic tasks like sum, average, product, diffrence, quotient and remainder of given numbers, calculate area of Shapes(Square, Rectangle,Circle and Triangle),arrays and recursion.\n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: C Programming\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : Program to read radius of a circle and to find area and circumference.\n Prg-2 : Program to read three numbers and find the biggest of three.\n Prg-3 : Program to demonstrate library functions in math.h.\n Prg-4 : Program to check for prime.\n Prg-5 : Program to generate n primes.\n Prg-6 : Program to read a number,find the sum of the digits,reverse the number and check it for palindrome.\n Prg-7 : Program to read numbers from keyboard continuously till the user presses 999 and to find the sum of only positive numbers.\n Prg-8 : Program to Program to read percentage of marks and to display appropriate message(Demonstration of else-if ladder).\n Prg-9 : Program to find roots of quadratic equation (demonstration of switch case statement).\n Prg-10 : Program to read marks scored by n students and find the average of marks(Demonstration of single dimensional array).\n Prg-11 : Program to remove Duplicate Element in a single dimensional Array.\n Prg-12 : Program to perform addition and subtraction of Matrices.\n");
                printf(" PART-B: \n Prg-1 : Program to find the length of a string without using built in function.\n Prg-2 : Program to demonstrate string functions.\n Prg-3 : Program to demonstrate pointers in C.\n Prg-4 : Program to check a number for prime by defining isprime() function.\n Prg-5 : Program to read, display and to find the trace of a square matrix.\n Prg-6 : Progarm to read, display and add two mxn matrices using functions.\n Prg-7 : Program to read,display and multiply two mxn matrices using functions.\n Prg-8 : Program to read a string and to find the number of alphabets, digits, vowels, consonants, spaces and special characters.\n");      
       break;
       case 6: printf("\nYou Have Selected: [6] Environmental Studies\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 2:printf("\n*You Have Selected 2nd SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Data Structures using C\n [2] Object Oriented Concepts using JAVA\n [3] Discrete Mathematical Structures\n [4] LAB: Data Structure\n [5] LAB: JAVA\n [6] Compalsory Subject\n [7] Open Elective:(Depends Upon Collage)");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&two);
       switch(two)
       {
       case 1: printf("\nYou Have Selected: [1] Data Structures using C\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Introduction to data structures\n Unit-2 : Arrays\n Unit-3 : Linked list\n Unit-4 : Stacks And Queues\n Unit-5 : Trees And Binary Tree\n");
        break;
       case 2: printf("\nYou Have Selected: [2]  Object Oriented Programming with JAVA\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Introduction to Java\n Unit-2 : Objects and Classes\n Unit-3 : Inheritance and Polymorphism\n Unit-4 : Event and GUI programming\n Unit-5 : I/O programming\n Unit-6 : Multithreading in java\n");
       break;
       case 3: printf("\nYou Have Selected: [3] Discrete Mathematical Structures\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : The Foundations\n Unit-2 : Counting And Advanced Counting Techniques\n Unit-3 : Induction and Recursion And Relation\n Unit-4 : Graphs\n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Data Structure\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : Program to find GCD using recursive function.\n Prg-2 : Program to display Pascal Triangle using binomial function.\n Prg-3 : Program to generate n Fibonacci numbers using recursive function.\n Prg-4 : Program to implement Towers of Hanoi.\n Prg-5 : Program to implement dynamic array, find smallest and largest element of the array.\n Prg-6 : Program to create two files to store even and odd numbers.\n Prg-7 : Program to create a file to store student records.\n Prg-8 : Program to read the names of cities and arrange them alphabetically.\n Prg-9 : Program to sort the given list using selection sort technique.\n Prg-10 : Program to sort the given list using bubble sort technique.\n");
                printf(" PART-B: \n Prg-1 : Program to sort the given list using insertion sort technique.\n Prg-2 : Program to sort the given list using quick sort technique.\n Prg-3 : Program to sort the given list using merge sort technique.\n Prg-4 : Program to search an element using linear search technique.\n Prg-5 : Program to search an element using recursive binary search technique.\n Prg-6 : Program to implement Stack.\n Prg-7 : Program to convert an infix expression to postfix.\n Prg-8 : Program to implement simple queue.\n Prg-9 : Program to implement linear linked list.\n Prg-10 : Program to display traversal of a tree.\n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: JAVA\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: Java Fundamentals OOPs in Java\n Prg-1 : Program to assign two integer values to X and Y. Using the if statement the output of the program should display a message whether X is greater than Y.\n Prg-2 : Program to list the factorial of the numbers 1 to 10. To calculate the factorial value, use while loop. (Hint Fact of 4 = 4*3*2*1)\n Prg-3 : Program to add two integers and two float numbers. When no arguments are supplied, give a default value to calculate the sum. Use function overloading.\n Prg-4 : Program to perform mathematical operations. Create a class called AddSub with methods to add and subtract. Create another class called MulDiv that extends from AddSub class to use the member data of the super class. MulDiv should have methods to multiply and divide A main function should access the methods and perform the mathematical operations.\n Prg-5 : Program with class variable that is available for all instances of a class. Use static variable declaration. Observe the changes that occur in the objects member variable values.\n Prg-6 : Programa. To find the area and circumference of the circle by accepting the radius from the user.b. To accept a number and find whether the number is Prime or not\n Prg-7 : Program to create a student class with following attributes;Enrollment No Name, Mark of sub1, Mark of sub2, mark of sub3, Total Marks. Total of the three marks must be calculated only when the student passes in all three subjects. The pass mark for each subject is 50. If a candidate fails in any one of the subjects his total mark must be declaredas zero. Using this condition write a constructor for this class. Write separate functions for accepting and displaying student details. In the main method create an array of three student objects and display the details.\n Prg-8 : In a college first year class are having the following attributesName of theclass (BCA, BCom, BSc), Name of the staff No of the students in the class,Array of students in the class\n Prg-9 : Define a class called first year with above attributes and define a suitable constructor. Also write a method called best Student () which process a first-year object and return the student with the highest total mark. In the main method define a first-year object and find the best student of this class\n Prg-10 : Program to define a class called employee with the name and date of appointment. Create ten employee objects as an array and sort them as per their date of appointment. ie, print them as per their seniority.\n Prg-11 : Create a package student. Fulltime. BCA in your current working directorya. Create a default class student in the above package with the following attributes: Name, age, sex. b. Have methods for storing as well as displaying\n");
                printf(" PART-B: Exception Handling & GUI Programming\n Prg-1 : Program to catch Negative Array Size Exception. This exception is causedwhen thearray is initialized to negative values\n Prg-2 : Program to handle Null Pointer Exception and use the “finally” method to display a message to the user.\n Prg-3 : Program which create and displays a message on the window\n Prg-4 : Program to draw several shapes in the created window\n Prg-5 : Program to create an applet and draw grid lines\n Prg-6 : Program which creates a frame with two buttons father and mother. When we click the father button the name of the father, his age and designation must appear. When we click mother similar details of mother also appear.\n Prg-7 : Create a frame which displays your personal details with respect to a button click\n Prg-8 : Create a simple applet which reveals the personal information of yours.\n Prg-9 : Program to move different shapes according to the arrow key pressed.\n Prg-10 : Program to create a window when we press M or m the window displays Good Morning, A or a the window displays Good After Noon E or e the window displays Good Evening, N or n the window displays Good Night.\n Prg-11 :  Demonstrate the various mouse handling events using suitable example.\n Prg-12 : Program to create menu bar and pull-down menus.\n");      
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 3:printf("\n*You Have Selected 3rd SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Database Management Systems\n [2] C# and DOT NET Framework\n [3] Computer Communication and Networks\n [4] LAB: DBMS \n [5] LAB: C# and DOT NET Framework\n [6] Compalsory Subject\n [7] Open Elective:(Depends Upon Collage)");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&three);
       switch(three)
       {
       case 1: printf("\nYou Have Selected: [1] Database Management Systems\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Database Architecture\n Unit-2 : E-R Model\n Unit-3 : Relational Data Model\n Unit-4 : Data Normalization\n Unit-5 : Query Processing Transaction Management\n");
        break;
       case 2: printf("\nYou Have Selected: [2] C# and DOT NET Framework\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Introduction to .Net Technologies\n Unit-2 : Introduction to C# And OOPS with C#\n Unit-3 : Introduction to VB.NET\n Unit-4 : Application Development on .NET\n Unit-5 : ADO .NET Connectivity\n");
       break;
       case 3: printf("\nYou Have Selected: [3] Computer Communication and Networks\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : Introduction\n Unit-2 : The Physical Layer\n Unit-3 : The Data Link Layer\n Unit-4 : The Network Layer\n Unit-5 : The Transport Layer and Application Layer\n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: DBMS\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
                printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: C# and DOT NET Framework\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
              printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
              printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 4:printf("\n*You Have Selected 4th SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Python Programming\n [2] Computer Multimedia and Animation\n [3] Operating Systems Concepts\n [4] LAB: Multimedia and Animation\n [5] LAB: Python programming\n [6] Compalsory Subject\n [7] Open Elective:(Depends Upon Collage)");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&four);
       switch(four)
       {
       case 1: printf("\nYou Have Selected: [1] Python Programming\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
        break;
       case 2: printf("\nYou Have Selected: [2] Computer Multimedia and Animation\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 3: printf("\nYou Have Selected: [3] Operating Systems Concepts\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Multimedia and Animation\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
                printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: Python programming\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
              printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
              printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 5:printf("\n*You Have Selected 5th SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Coming Soon\n [2] Coming Soon\n [3] Coming Soon\n [4] LAB: Coming Soon\n [5] LAB: Coming Soon\n [6] Compalsory Subject\n [7] Open Elective:( Depends Upon College )");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&five);
       switch(five)
       {
       case 1: printf("\nYou Have Selected: [1] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
        break;
       case 2: printf("\nYou Have Selected: [2] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 3: printf("\nYou Have Selected: [3] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
                printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
              printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
              printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 6:printf("\n*You Have Selected 6th SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Coming Soon\n [2] Coming Soon\n [3] Coming Soon\n [4] LAB: Coming Soon\n [5] LAB: Coming Soon\n [6] Compalsory Subject\n [7] Open Elective:( Depends Upon College )");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&six);
       switch(six)
       {
       case 1: printf("\nYou Have Selected: [1] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
        break;
       case 2: printf("\nYou Have Selected: [2] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 3: printf("\nYou Have Selected: [3] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
                printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
              printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
              printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 7:printf("\n*You Have Selected 7th SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Coming Soon\n [2] Coming Soon\n [3] Coming Soon\n [4] LAB: Coming Soon\n [5] LAB: Coming Soon\n [6] Compalsory Subject\n [7] Open Elective:( Depends Upon College )");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&seven);
       switch(seven)
       {
       case 1: printf("\nYou Have Selected: [1] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
        break;
       case 2: printf("\nYou Have Selected: [2] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 3: printf("\nYou Have Selected: [3] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
                printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
              printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
              printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
break;
case 8:printf("\n*You Have Selected 8th SEM\n"); printf(" These Are The Subjects In BCA Second SEM\n");
       printf(" [1] Coming Soon\n [2] Coming Soon\n [3] Coming Soon\n [4] LAB: Coming Soon\n [5] LAB: Coming Soon\n [6] Compalsory Subject\n [7] Open Elective:( Depends Upon College )");
       printf("\n\nEnter Your Input For More Information:");
       strtol("%d",&eight);
       switch(eight)
       {
       case 1: printf("\nYou Have Selected: [1] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
        break;
       case 2: printf("\nYou Have Selected: [2] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 3: printf("\nYou Have Selected: [3] Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" Unit-1 : \n Unit-2 : \n Unit-3 : \n Unit-4 : \n Unit-5 : \n");
       break;
       case 4: printf("\nYou Have Selected: [4] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
                printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");      
       break;
       case 5: printf("\nYou Have Selected: [5] LAB: Coming Soon\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
              printf(" PART-A: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
              printf(" PART-B: \n Prg-1 : \n Prg-2 : \n Prg-3 : \n Prg-4 : \n Prg-5 : \n Prg-6 : \n Prg-7 : \n Prg-8 : \n Prg-9 : \n Prg-10 : \n");
       break;
       case 6: printf("\nYou Have Selected: [6] Compalsory Subject.\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("Uploading Soon... \n");      
       break;
       case 7: printf("\nYou Have Selected: [7] Open Elective\n");
                printf("According To National Education Policy Units Are Displayed Here:\n");
                printf("It Depends Upon Individual Collage \n");      
       break;
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
       }
default: printf(" INVALID CHOICE!\n TRY AGAIN.");
    break;
}
printf("\n********************************************\n");
printf("             Thanks For Using                 \n");
printf("********************************************\n");
getch();
}
