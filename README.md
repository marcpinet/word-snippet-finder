# word-snippet-finder
A simple word snippet finder.

If you wanna use another dictionnary than the english one, just open the project using Visual Studio 2019 (, go into the `functions.c` file and edit the value of the line `8` to `dicts/fr.txt` for example if you're french. You can also add your own dictionnaries by putting the proper `.txt` into the `folder`.

Howerver, the program doesn't seem to understands characters others than A -> Z and a -> z (maybe because I don't know how to make UTF-8 work in C)
