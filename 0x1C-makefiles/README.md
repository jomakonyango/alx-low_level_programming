0x1C. C - Makefiles
What Is a Makefile?
A Makefile is a plain text file that specifies how to build a project. It contains rules that define how to create target files (such as executables or libraries) from source files.
The make utility reads the Makefile and executes the specified tasks based on dependencies and recipes defined within it.
Most open-source projects use make to compile their final executable binaries, which can then be installed using make install.
How Does It Work?
A Makefile consists of rules, targets, prerequisites, and recipes:
Target: Represents the desired output (e.g., an executable binary).
Prerequisites: Files or other targets that the target depends on.
Recipe: The actual commands to create the target from its prerequisites.
A typical rule in a Makefile has the following syntax:
target: prerequisites
    recipe

For example, consider a simple Makefile with a target called say_hello:
say_hello:
    @echo "Hello World"

Here, say_hello is the target, and the recipe is echo "Hello World".
Running make in the directory containing this Makefile will execute the recipe and display “Hello World.”
Phony Targets:
Sometimes, targets don’t correspond to actual files but serve as labels for specific actions.
These are called phony targets.
Example:
generate:
    @echo "Creating empty text files..."
    touch file-{1..10}.txt

clean:
    @echo "Cleaning up..."
    rm *.txt

The generate target creates empty text files, and the clean target removes them.
By default, the first target in the Makefile is the default goal. Other targets can be called from this default target.
To suppress echoing the actual command, prefix the recipe with @.
Advanced Usage:
Makefiles can handle complex scenarios, such as compiling multiple source files, managing dependencies, and handling conditional builds.
They are especially useful for large projects with many files.
