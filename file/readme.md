# C++ Libraries For File Handling

C++ provides three libraries to perform the file operations such as opening a file, reading a file, and writing to a file.

- **ofstream** `write to a file`
- **ifstream** `read data from a file`
- **fstream** `both read and write`

## Opening File in C++

`fstream (const char* filename, ios_base::openmode mode = ios_base::in | ios_base::out);`\
Here, we will open the file in read and write mode. So, we pass both the values ios_base::in and ios_base::out as the default value for mode as shown below.
The fstream library opens the file in read as well as write mode. Again, you can open the file in read and write mode in C++ by simply passing the filename to the fstream constructor as follows.
`fstream(filename);`

### Open A File in C++ Using The open() Function

Instead of passing the filename to constructors of the file stream object, you can use the open() method to open a file in C++. The syntax for using the open() method in the libraries is as follows.

- `ifstream_object.open(const char* filename, ios_base::openmode mode = ios_base::in);`
- `ofstream_object.open(const char* filename, ios_base::openmode mode = ios_base::out);`
- `fstream_object.open (const char\* filename, ios_base::openmode mode = ios_base::in | ios_base::out);`
