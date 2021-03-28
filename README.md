#  RPSC68

RPSC68 is the SC68 based player plugin for RetroPlayer.

The SC68 source tree is located in the Source/sc68 folder.

Check Source/sc68/COPYING for the license for the SC68.

The source tree can be updated to the latest version from the [SC68 project](https://sourceforge.net/projects/sc68/) on SourceForge with the following commands:

    rm -rf Source/sc68
    svn checkout http://svn.code.sf.net/p/sc68/code/ Source/sc68

There are several custom build phases to build the required SC68 libraries:

1. __Run SC68 Bootstrap__ for preparing the SC68 source tree for running configure scripts.
2. __Build as68__ for building the as68 assembler used when building the sc68 library.
3. __Build unice68__ for building the unice68 libraryes used by the file68 library.
4. __Build file68__ for building the file68 library used by the sc68 library.
5. __Build libsc68__ for building the sc68 library.

The custom build phases are configured using user defined variables.

1. __SC68_SOURCE_DIR__ for the path to the SC68 source tree.
2. __SC68_BUILD_DIR__ for the path to the SC68 build directory.
3. __SC68_INSTALL_DIR__ for the path to the directory where the SC68 libraries and header files are installed.
   This is used when compiling and linking the RPSC68 executable.

## Requirements ##

The autoconf and automake tools are required to run the __Run SC68 Bootstrap__ build phase.
These tools can be installed using the [Homebrew package manager](https://brew.sh).
