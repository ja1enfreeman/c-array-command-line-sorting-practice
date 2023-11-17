<p>In this program you will explore arrays in C and how to use <strong>command-line arguments. </strong><strong>You will also write a C program</strong> (not C++) to implement a <strong>bubble sort algorithm</strong> on an array of integers, and use command-line parameters to populate an array with data.</p>
<p>Make sure you read the following Week 5 pages first:</p>
<ul>
    <li><a title="Command-Line Arguments" href="https://eou.instructure.com/courses/37980/pages/command-line-arguments?wrap=1" data-api-endpoint="https://eou.instructure.com/api/v1/courses/37980/pages/command-line-arguments" data-api-returntype="Page">Command-Line Arguments.</a></li>
    <li><a title="Review of Arrays in C" href="https://eou.instructure.com/courses/37980/pages/review-of-arrays-in-c?wrap=1" data-api-endpoint="https://eou.instructure.com/api/v1/courses/37980/pages/review-of-arrays-in-c" data-api-returntype="Page">Review of Arrays in C</a></li>
</ul>
<hr />
<h3>Assignment Description</h3>
<p>In this assignment you will practice using C arrays and command-line arguments. You will also write a sorting algorithm to sort data given on the command-line.</p>
<p><strong>Requirements</strong></p>
<p>Write a program which behaves as follows:</p>
<ol>
    <li>If there are no command-line arguments at all when the program is run, the program should print out instructions on its use (a "usage message"). There should be one common usage message (consider a method/function for printing the usage message) for any type of usage error.</li>
    <li>The program will accept an <code>A</code> or <code>D</code> as the second command line argument (after the program name). This letter will tell you whether the bubble sort should sort in ascending or descending fashion. Anything other than A or D in that position should display the usage message and terminate the program.</li>
    <li>The program will be able to accept up to 32 numbers (integers) on the command line.</li>
    <li>If there are more than 32 numbers on the command line, or no numbers at all, the program should print out the usage message and exit with a non-zero value from main. This means 32 values not including the program name (<code>argv[0]</code>) and sort type.</li>
    <li>You may assume that the command line arguments (except for the sort type) are all integers.</li>
    <li>Sort the numbers using the bubble sort algorithm. Do not use a global array to hold the integers; use a locally-defined array in <code>main</code> and pass the array to the sorting function along with the type of sort (ascending or descending).</li>
    <li>Print out the sorted numbers, one per line.</li>
    <li>Your bubble sort function must be in its own separate file. The <code>main()</code> function should be in a file called <code>main.c</code>, along with supporting functions (like for printing a usage message).</li>
    <li>This program must be written in C (not C++). Note that if you're compiling on an OS, use the <code>gcc</code> command, not <code>g++</code>. Note also that since your program is in C, your source files should have a <code>.c</code> extension, not <code>.cpp</code> or <code>.cxx</code>.</li>
</ol>
<p><strong>Notes and Hints<br /></strong></p>
<ul>
    <li>Your sorting functions should operate on an an array of <em>integers</em>, not characters. See the sample output below for how it should work. You will need to create an array of integers to store the values, and convert each value (after the sort order character) in <code>argv</code> to an integer and store it in the array. The easiest way to do this in C is with the <a class="inline_disabled" href="https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm" target="_blank" rel="noopener">atoi</a> function, which is part of <code>stdlib.h</code>
        <pre style="background: #3C445C; color: #eee;">...
#include &lt;stdlib.h&gt;
...

... = atoi(argv[i]); // inside of a loop
  
</pre>
    </li>
    <li>You won't be able to "run" your code in replit using the button, though you can use that button to compile your code. If it compiles correctly, run the program using the command-line shell in the right pane in replit. See the sample output below for examples.</li>
    <li>Don't forget to comment your code create a header at the top. Reminder: the <a title="Programming Assignment Guidelines" href="https://eou.instructure.com/courses/37980/pages/programming-assignment-guidelines" data-api-endpoint="https://eou.instructure.com/api/v1/courses/37980/pages/programming-assignment-guidelines" data-api-returntype="Page">Programming Assignment Guidelines</a> page describes the guidelines for all programs.</li>
    <li>Don't forget to put your bubble sort code in a separate file (use the "add file" button in the repl.it file pane). You will need to include a function prototype for the functions in <code>main.c</code>. See the <a title="Function Prototypes" href="https://eou.instructure.com/courses/37980/pages/function-prototypes" data-api-endpoint="https://eou.instructure.com/api/v1/courses/37980/pages/function-prototypes" data-api-returntype="Page">Function Prototypes</a> page for more details.</li>
    <li>Feel free to create a separate header file for your functions in your repl.it project.</li>
</ul>
<p><strong>Sample Output</strong></p>
<pre style="background: #3C445C; color: #eee;">
> ./main A 12 -88 4 19 1 42
-88
1
4
12
19
42
> ./main D 12 -88 4 19 1 42
42
19
12
4
1
-88
> ./main G 5 2
Incorrect usage
Sort given data in ascending or descending order. First argument must be A or D to indicate ascending or descending sort order, followed by up to 32 integers separated by spaces
Usage: ./main [A|D] n1 n2 ... n31 n32
> ./main A
Incorrect usage
Sort given data in ascending or descending order. First argument must be A or D to indicate ascending or descending sort order, followed by up to 32 integers separated by spaces
Usage: ./main [A|D] n1 n2 ... n31 n32
> ./main A 3 4 5 1 2 3 4 5 6 3 3 4 5 6 6 4 5 6 6 7 9 4 3 54 5 4 3 4 5 5 5 5 5 6 7 2 3 4 5 6 6 7 
Incorrect usage
Sort given data in ascending or descending order. First argument must be A or D to indicate ascending or descending sort order, followed by up to 32 integers separated by spaces
Usage: ./main [A|D] n1 n2 ... n31 n32
</pre>
<p><strong>Submit</strong></p>
<p>A link to your repl.it project (URL copied from the address bar). Note that you will also need to "submit" this program in the Replit project posted at the top of these instructions.</p>
<p>&nbsp;</p>
<p>&nbsp;</p>