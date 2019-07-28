* The first step in this proccess was created a _putchar function (function that write a simple character) for the output display, a header for organized all the prototype functions and the main prototype function _printf.
* In the _printf we build the format of a variadic function from which an entry is received in the argument. The first argument is a literal string composed of zero or more directives, ordinary characters which are copied unchanged to the output stream. The second argument defines the format specification of the argument list and that begins with a percent sign (%) and ends with a key letter as show in this table:
[TABLE]
* We configurated a simple printing of the first argument with the _putchar function with a loop that ends when it finds the null character. We take into account the naturally special characters with statemets they find it. Also we define alternatily special characters when it start with backslash:
[TABLE SPECIAL CHARACTERS] [TABLE ALTERNATILY SPECIAL CHARACTERS] [PSEUDOCODE]
* The argument list starts when find it int the first argument string of a function a percent sign (%). It goes to the next argument and uses its value that defines the data type of te output. We worked on this with a loop and an statement that find the percent sign (%) and the next character if it corresponds to a format. If it does not correspond to a format specification the percent sign (%) is printed and the next character is ignored:
[TABLE FORMAT SPECIFICATION]
* The prototype function must return the number of ordinary characters of the string of first argument, without count special characters and alternatily special characters.
[EXAMPLE]
