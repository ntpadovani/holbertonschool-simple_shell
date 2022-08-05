
<h1>Simple Shell Project :shell: </h1>

<p>A shell build from scratch that asimilates the Linux Shell terminal. </p>
<ul>Who designed and implemented the original Unix operating system?</ul>
Ken Thompson designed the Unix operating system. 
<ul>Who wrote the first version of the UNIX shell?</ul>
Thompson wrote the first version of the UNIX shell. 
<ul>Who invented the B programming language (the direct predecessor to the C programming language)?</ul>
Ken Thompson, indeed invented the B language programming as well.
<ul>Who is Ken Thompson?</ul>
He is an American pioneer of computer science.  Thompson worked at Bell labs for most of his career where he designed and implemented the original Unix operating system. 
<ul>How does a shell work?</ul>
Once, enters the unix system, is like being inside the shell.
Is a basic command line useface-interpreter that receives simple commands from the user and pass to binary code to execute the code. It can determine if a command is valid or not.  You will know if you are inside the shell by typing echo $shell.
<ul>What is a pid and a ppid?</ul>
A pid is a process identification number that is created in the unix system as you begin programing. A pid is known to be a unique running process, executing inside the shell program. A ppid is a process that creates a new process. The current process is named parent process, the new process is known as child process.
<ul>What is the difference between a function and a system call?</ul>
A  function call is when the program suggest to perform a specific task. Therefore, the system call is a request for the kernel to access a resource.
<ul>How to create processes?</ul>
By using the command fork, you can create processes. The system call will copy the address of the parent process to make a new child process.
<ul>What are the three prototypes of main?</ul>
<blockquote>int main(void); </blockquote>
<blockquote>int main(int argc, char **argv); </blockquote>
<blockquote>int main(int argc, char * argv[], char *envp[]) </blockquote>

<ul>How does the shell use the PATH to find the programs?</ul>
The shell goes trough each directory in the PATH ,  and runs the first executable program with the matching command name that it finds. Slashes in the pathname prevent the shell from using PATH to look up the command name, so the shell executes /bin/date directly.

<ul>How to suspend the execution of a process until one of its children terminates?</ul>
     Using the function wait.
<ul>What is EOF / “end-of-file”?</ul>
The acronym EOF means end of file, no more data can be read from a file.

<h3> Compilation </h3>
<p>Your shell will be compiled this way: </p>
<code>
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
</code>
<h3> Testing </h3>
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
