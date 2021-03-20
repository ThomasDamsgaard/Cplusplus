# Basics
Every C++ program must have a special function named main (all lower case letters). When the program is run, execution starts with the first statement inside of function main and then continues sequentially.

Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

Although the language allows you to do so, avoid defining multiple variables in a single statement (even if they are the same type). Instead, define each variable in a separate statement (and then use a single-line comment to document what it is used for).

Initialize your variables upon creation.

Prefer ‘\n’ over std::endl when outputting text to the console.

There’s some debate over whether it’s necessary to initialize a variable immediately before you give it a user provided value via another source (e.g. std::cin), since the user-provided value will just overwrite the initialization value. In line with our previous recommendation that variables should always be initialized, best practice is to initialize the variable first.

When working in an existing program, use the conventions of that program (even if they don’t conform to modern best practices). Use modern best practices when you’re writing new programs.

# Functions
Your main function should return 0 if the program ran normally.

Always explicitly provide a return value for any function that has a non-void return type.

Follow the DRY best practice: “don’t repeat yourself”. If you need to do something more than once, consider how to modify your code to remove as much redundancy as possible. Variables can be used to store the results of calculations that need to be used more than once (so we don’t have to repeat the calculation). Functions can be used to define a sequence of statements we want to execute more than once. And loops (which we’ll cover in a later chapter) can be used to execute a statement more than once.

Define your local variables as close to their first use as reasonable.

When addressing compile errors in your programs, always resolve the first error produced first and then compile again.

When defining function prototypes, keep the parameter names. You can easily create forward declarations by using copy/paste on your function declaration. Don’t forget the semicolon on the end.

Use explicit namespace prefixes to access identifiers defined in a namespace.

Header files should generally not contain function and variable definitions, so as not to violate the one definition rule. An exception is made for symbolic constants

When writing a source file, include the corresponding header (If one exists), even if you don’t need it yet.

# Integers, floats and doubles

Now that fixed-width integers have been added to C++, the best practice for integers in C++ is as follows:

int should be preferred when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2 byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
If you need a variable guaranteed to be a particular size and want to favor performance, use std::int_fast#_t.
If you need a variable guaranteed to be a particular size and want to favor memory conservation over performance, use std::int_least#_t. This is used most often when allocating lots of variables.

Avoid the following if possible:
Unsigned types, unless you have a compelling reason.
The 8-bit fixed-width integer types.
Any compiler-specific fixed-width integers -- for example, Visual Studio defines __int8, __int16, etc…

Favor double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.

# Chars and strings
Always put stand-alone chars in single quotes (e.g. ‘t’ or ‘\n’, not “t” or “\n”). This helps the compiler optimize more effectively.

If reading strings with std::cin and operator<<, it’s a good idea to remove the extraneous newline using std::cin.ignore().

# Using symbolic constants throughout a multi-file program
1) Create a header file to hold these constants
2) Inside this header file, declare a namespace
3) Add all your constants inside the namespace
4) #include the header file wherever you need it