#ifndef MEMORY_H
#define MEMORY_H

//Cited Sources & how they helped:

/*I used w3schools.com/c/c_files.php to get a better understanding of how file handling works within C compared to other languages and I believe I found it to be a bit different so I had to look at more sources to get a better understanding. Ultimately this allowed for me to be able to write the basic part of opening my file in either read write or append mode*/

/* I Found myself very confused with how to get my userinput into a file and I found this very helpful youtube video that helped me understand how it works with a visual example allowing me to understand how I could get user input for my program This video is by Portfolio Courses on Youtube.com the video link is https://www.youtube.com/watch?v=HEEzZ7fA9Oo

/* I used geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/ to gather a better understanding of how I could maybe implement dynamic memory into my program and how it works overall because the book left me a little confused

/* I used Portfolio Courses on youtube link here https://www.youtube.com/watch?v=R0qIYWo8igs to get a deeper understanding of dynamic memory allocation and how to use malloc and what its used for to be able to find a way to implement it to my code


//Functions and Information regarding them

/*This function creates text welcoming and giving a small rundown of what the program does, which is editing a text file called test or creating and editing the users own file*/
void welcomeMsg();

/*This function was created to decrease the amount of lines in the fileEditor function by creating a function that produces text asking the user a question and for the users input to decide weather the program edits the test file or creates a new file to edit*/
char userInput();

/*This function was created as the big function that would be called into main using the other functions as helper functions which determins weather or not the program will append to or read from the file updateLogs which can keep track of my process and updates regarding the game I'm currently developing*/
void fileEditor();

/*I took this function from last assignment because I could find a reliable way to implement dynamic memory allocation onto my fileEditor function. I even tried to outsource sources but found nothing it seemed if you could point me into the correct direction I'd appricate it*/
void Calculator();

#endif
