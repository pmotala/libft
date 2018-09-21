# Libft - @WeThinkCode_
A basic implementation of some of the Standard C Library functions, as well as few extra ones.

### TOC
* [What is libft?](#what-is-libft)
* [What is in the Project?](#what-is-in-the-project)
* [The Mechanics behind it all?](#the-mechanics-behind-it-all)
* [How do I use the library?](#how-do-i-use-the-library)
* [How do I test it? How do I test my own implementations?](#how-do-i-test-it-how-do-i-test-my-own-implementations)
	1. [To test the code in this repo](#1-to-test-the-code-in-this-repo)
* [Example usage](#example-usage)

### What is libft?
[Libft][1] is an individual project at [WeThinkCode_][2] that requires us to re-create some standard C library functions including some additional ones that can be useful for future project. 

NOTE: *Although it seems redundent to recreate these functions, the purpose was to invest some basic coding principles that would carry us into the future.*

### What is in the Project?

Take a look in the [Project instructions][1]. The project has 3 sections as well as the extra personal functions:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions deemed useful for later projects
3.  **Bonus Functions:** Functions deemed useful for Chained list manipulation

My code is not the best, but it passed all the WeThinkCode_ tests successfully.

### The Mechanics behind it all?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/pmotala/libft
	cd libft
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files and the .c files from the root), call the function:
	make clean

### How do I use the library?

You have to tell the file where your library resides and which library it is using:

`gcc example.c -L. -lft`

-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

That's it. Now run it using `./a.out`

### How do I test it? How do I test my own implementations?

To test the code we're going to be using @alelievr's [Libft Unit Test][4]. There are [some][5] [good][6] [others][7] but I'll only be covering this one.

#### 1. To test the code in this repo

1. Clone this repo and cd into it, make sure it's called `libft`:
		
		git clone https://github.com/pmotala/libft
		cd libft/
2. Run Make so you can build the library:
		
		make
3. Go back to the root directory and download @alelievr's Libft Unit Test:
		
		cd ..
		git clone https://github.com/alelievr/libft-unit-test
4. Go into the test folder and run the test:

		cd libft-unit-test/
		make f

If you did everything correctly you should get a cool list of tests showing you the function names and if they passed or not.

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/pmotala/get_next_line)
* [fdf](https://github.com/pmotala/fdf)
* [Wolf3D](https://github.com/pmotala/wolf3d)

Enjoy.

[1]: https://github.com/pmotala/libft/blob/master/document/libft.en.pdf "Libft PDF"
[2]: https://www.wethinkcode.co.za "WeThinkCode_"
[4]: https://github.com/alelievr/libft-unit-test
[5]: https://github.com/yyang42/moulitest
[6]: https://github.com/QuentinPerez/Maintest/tree/master/libft
[7]: https://github.com/Kant1-0/libft-test