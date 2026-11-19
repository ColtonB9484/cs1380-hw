This folder has three small C programs. Each one shows a different way to read and write files with the `<stdio.h>` library:

`basic_file_ops.c`: Creates `output.txt` in write mode (`"w"`) and writes a few lines with `fprintf`. Then it reopens the file in read mode (`"r"`), prints each line with `fgets`, and uses `feof` to report that it reached the end of the file.
`text_copy.c`:Copies `input.txt` into `copy.txt` one line at a time and prints how many lines it copied.
`binary_records.c`: Writes an array of five `Student` structs (`id`, `score`) to `binary_output.bin` with `fwrite`, reads them back with `fread`, and prints each record.

Each program written in a professional setting reads or writes files. These programs are working examples.


Run each program from this directory, because they use relative file names.

`basic_file_ops` creates (or overwrites) `output.txt`.


`text_copy` copies a text file into another text file name 'copy.txt'

`input.txt` must exist in the current directory.
If `input.txt` is missing, the program prints an error from `perror` and doesn't copy anything.


`binary_rcords` creates `binary_output.bin`, it then read from `binary_output.bin` and displays what was read to the console

How do I build it?

Requirements
- GCC with C23 support
- Linux, macOS, or WSL with `bash`.

Option 1: build everything with the script

`compile_file.sh` compiles every `.c` file in the directory and prints a summary:


Option 2: Build everything with shell command

gcc -Wall -Wextra -Wpedantic -std=c23 basic_file_ops.c -o basic_file_ops
gcc -Wall -Wextra -Wpedantic -std=c23 text_copy.c      -o text_copy
gcc -Wall -Wextra -Wpedantic -std=c23 binary_records.c -o binary_records

