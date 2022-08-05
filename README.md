
<h1>Simple Shell Project :shell: </h1>
<h2> Holberton SHELL </h2>
  <img src="https://media.giphy.com/media/jUhpOyPjtyiDLuL8ZX/giphy.gif" height="200" width="400"/>
<p>A shell build from scratch that asimilates the Linux Shell terminal.</p>

 <p> <strong>Who designed and implemented the original Unix operating system?:man: </strong></p>
             <p>Ken Thompson designed the Unix operating system.</p>
             
<p> <strong>Who wrote the first version of the UNIX shell? :pencil: </strong></p>
               <p>Thompson wrote the first version of the UNIX shell. </p>
               
<p> <strong>Who invented the B programming language (the direct predecessor to the C programming language)? :teacher:</strong></p>
       <p> Ken Thompson, indeed invented the B language programming as well. </p>
       
<p> <strong> Who is Ken Thompson? :older_man:</strong> </p>
    <p>He is an American pioneer of computer science.  Thompson worked at Bell labs for most of his career where he designed and implemented the original Unix operating system. </p> 
    
<ul> <strong>How does a shell work? :hammer: </strong></ul>
Once, enters the unix system, is like being inside the shell.
Is a basic command line useface-interpreter that receives simple commands from the user and pass to binary code to execute the code. It can determine if a command is valid or not.  You will know if you are inside the shell by typing echo $shell.

<ul><strong>What is a pid and a ppid? :bar_chart:</strong></ul>
A pid is a process identification number that is created in the unix system as you begin programing. A pid is known to be a unique running process, executing inside the shell program. A ppid is a process that creates a new process. The current process is named parent process, the new process is known as child process.

<ul><strong>What is the difference between a function and a system call? :interrobang: </strong></ul>
A  function call is when the program suggest to perform a specific task. Therefore, the system call is a request for the kernel to access a resource.

<ul><strong>How to create processes?:heavy_exclamation_mark:</strong></ul>
By using the command fork, you can create processes. The system call will copy the address of the parent process to make a new child process.

<ul>What are the three prototypes of main? :small_blue_diamond: </ul>
<blockquote>int main(void); </blockquote>
<blockquote>int main(int argc, char **argv); </blockquote>
<blockquote>int main(int argc, char * argv[], char *envp[]) </blockquote>

<ul><strong>How does the shell use the PATH to find the programs?:heavy_check_mark:</strong></ul>
The shell goes trough each directory in the PATH ,  and runs the first executable program with the matching command name that it finds. Slashes in the pathname prevent the shell from using PATH to look up the command name, so the shell executes /bin/date directly.

<ul> <strong>How to suspend the execution of a process until one of its children terminates?</strong></ul>
     <p>Using the function wait. </p>
     
<ul><strong>What is EOF / “end-of-file”?:red_circle:</strong></ul>
<p>The acronym EOF means end of file, no more data can be read from a file.</p>

<h2> Compilation :books:</h2> 
<p>Your shell will be compiled this way: </p>
<code>
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
</code>
<h2> Testing :page_facing_up:</h2>
Your shell should work like this in interactive mode: </p>
<code>
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
</code>

<p> But also in non-interactive mode: </p>
<code>
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
</code>




| functions | files | meaning |
| ------ | ------ | ------ |
| _printf | _printf.c | custom printf|
|  _strcmp  | _strcmp.c | to compare strings |
| _strlen| _strlen.c | gets the lenghts of the string | 
| _strncat | _strncat.c | concatenate string |
| *chkcmddir| chkcmddir | checks if commands are inside directories with _strncat|
| count_words| count_words.c | counts how many words are in a string |
| spawn_process | execve.c | creates a child process and executes a command |
| print_string, print_char, print_int, print_numbers | functions.c | prints characters, integers, a string and numbers|
| _getpath | path.c |  grabs the string of the path |
| _printenv | printenv.c | print environments information|
| main | readinput.c | primary function for shell |
| **separate | separate.c| splits a string and returns an array of each word of the string|
| header | shell.h | struct, libraries and function prototypes|

<h1> <bold> AUTHORS :family: </bold> </h1> 
<p> <em> Norman Torres Padovani </em> </p>
<p> <em> Griseliz Ramos Crespo </em> </p>
<p> <em> Raul Acosta </em> </p>
  
