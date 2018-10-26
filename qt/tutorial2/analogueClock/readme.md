# Analogue clock

Uses the code found at <http://doc.qt.io/archives/qt-4.8/coordsys.html>.

# Running tests

The project can be build and tests run with:
	`make check`
from the `build` directory once the `Makefile` has been generated.

# NB (note to self)

When specifying the location of the static library with the `-L` option in the `qmake` file of the app depending on that library, the path needs to be specified relative to the app's `Makefile` in the eventual build directory used by the `subdirs.pro` file.

# Re: subclassing MyMainWindow

It would be far easier to subclass QMainWindow directly than it is to subclass MyMainWindow instead, but one of my goals with this project is to learn to use the `subdirs` template in `qmake`.
