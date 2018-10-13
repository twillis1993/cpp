# NB

When specifying the location of the static library with the `-L` option in the `qmake` file of the app depending on that library, the path needs to be specified relative to the app's Makefile in the eventual build directory used by the subdirs.pro file.
