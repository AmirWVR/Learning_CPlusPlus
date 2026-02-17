Logging the first chapter of C++ learning here. Anything I wish to take note of will be dumped here

Compiling and Running:

For compiling, we use the g++ command. We can follow the g++ command with a bunch of flags, but ultimately we have to indicate the name of the executable file we want to compile it to, as well as the file we are compiling.

For running, we use the gdb command. gdb is our debugger, it allows us to do things like add breakpoints in code (suspends the code execution when the execution reaches that line), runs the program as per normal, etc etc. A lot of different inbuilt functions.

Sometimes, our IDE (VSC) doesn't seem to flag certain errors as they pop up. I tried to change the return type of main from int to void, and remove the 'return 0;' line. No errors flagged until I compiled.