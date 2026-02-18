Logging the first chapter of C++ learning here. Anything I wish to take note of will be dumped here

**Compiling and Running**

For compiling, we use the g++ command. We can follow the g++ command with a bunch of flags, but ultimately we have to indicate the name of the executable file we want to compile it to, as well as the file we are compiling.

For running, we use the gdb command. gdb is our debugger, it allows us to do things like add breakpoints in code (suspends the code execution when the execution reaches that line), runs the program as per normal, etc etc. A lot of different inbuilt functions.

Sometimes, our IDE (VSC) doesn't seem to flag certain errors as they pop up. I tried to change the return type of main from int to void, and remove the 'return 0;' line. No errors flagged until I compiled.

**Variable Initialization**

There are a few primary methods of variable initialization. 

int x = 5;   - Copy-Initialization
int x ( 5 ); - Direct-Initialization
int x { 5 }; - List-Initialization

Technically, these all do the same thing. Why do we typically use List-Initialization then? 

2 main reasons: flexibility and security. 

In terms of flexibility, list-initialization allows us to assign either a single value into our variable, or an entire list of values. 

In terms of security, list-initialization doesn't allow for narrowing conversions. If we try to assign a double into an int variable *int x { 4.5 }*, the compiler will throw an error. On the other hand, something like *int x = 4.5* is completely allowed, and the compiler will simply convert 4.5 into an int, reducing it to 4. There are potential use-cases for this, but more often than not we want the specific value that we have assigned, which means we would have to re-write our code to fit that standard accordingly.

Suppose we had a variable that stores the trade price of a certain stock, 103.78. if we stupidly stored that into an int, it would reduce it to 103. the program would try trading for 103, and we'd lose money! As a result, for the sake of specificity, we use list-initializations.

**Unused Variables**

When it comes to unused variables, though C++ doesn't technically have a problem with it (it'll just throw warnings), it's annoying when something is *meant* to be left unused temporarily. For that, we can initialize variables using the *[[maybe_unused]]* command. As an example:

[[maybe_unused]] int x { 5 };

Some compilers may help to optimize these variables out of the program when unneeded, which could be beneficial!