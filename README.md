# Sorting-Visualization
This is the place where you experience the vsulizations of sorting algorithms.  
In this context we will discuss the most frequent sorting algorithms which are commonly used.  
1)Bubble Sort  
2)Insertion Sort  
3)Selection Sort  
4)Merge Sort  
5)Quick Sort  
->once visit the code given in the name of "name"_visual then compile the code in your IDE.  
then you experience how the sort actually working in the GRAPHICAL MANNER.  
-> if you have no time then I HAVE GIVEN OUTPUT IN VIDEO FORMAT once watch it you will get to a point.   


DEVELOPING SECTION:  

->If you had the DOUBT HOW CODE WAS BUILD for this visulization?  
  -the whole sorting algorithms are developed of common idea.  
  -I have displayed the array at each instance of operation so that learner will understand how it actually works.  
  -for displaying the array in graphical order follow these steps  
       
       >first calculate the maximum in the array
       >to display it in graphical manner we have to take an n*n matrix
       >I have n*n matrix matrix i have pushed "array value times" to each index of n*n matrix.
       >so that remaining values upto max should be empty spaces
       for example
          arr={1,2,3,4}
          n*n matrix:
          vector<vector<int>>display
          in this case max=4;
          at first index of display array i have pushed a symbol '|' for arr[0] times & remaining upto max times, 
          empty spaces are pushed to make it n*n
          at second index of display array i have pushed '|' for arr[1] times and remaining i.e (2 times '|' && 2 time ' ')
          at third index of display array i have pushed '|' for arr[2] times and remaining i.e (3 times '|' && 1 time ' ')
          and soo on.
       > if it is not a square matrix i have pushed empty spaces on (from array element upto max)->column from (array size to max)->row 
       > at present they are in horizontal position 
          example
            vector<vector<int>>display is like 
             |
             | |
             | | |
             | | | |
       > this is how they actually looks like (spaces cant be visible but they actually existed there)
       > now we have to rotate the display array into 90° in anti clock wise for actual representation.
         after rotating they look like
               |
             | |
           | | |
         | | | |
       > for that rotation we just reversed each at each row of display then transposed !
       > note : EVEN THEY ARE NOT IN N*N WE HAD MADE MATRIX INTO N*N BECAUSE IT AVOIDS CLASHES WHILE TRANSPOSING ..THAT'S IT
       
  
THANKS FOR YOUR PATIENCE  
AKHIL VENKAT .G
