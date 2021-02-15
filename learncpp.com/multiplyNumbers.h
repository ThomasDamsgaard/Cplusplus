/*
Header guards are designed to ensure that the contents of a given header file 
are not copied more than once into any single file, in order to prevent duplicate definitions.

Note that duplicate declarations are fine, since a declaration can be declared multiple times 
without incident -- but even if your header file is composed of all declarations (no definitions) 
it’s still a best practice to include header guards.

Note that header guards do not prevent the contents of a header file from being copied (once) 
into separate project files. This is a good thing, because we often need to reference the 
contents of a given header from different project files.
*/
#ifndef MULTIPLYNUMBERS_H
#define MULTIPLYNUMBERS_H

int multiplyNumbers(int x, int y);

#endif // MULTIPLYNUMBERS_H
