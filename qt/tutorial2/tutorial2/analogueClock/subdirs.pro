TEMPLATE = subdirs

SUBDIRS = \
	analogueClock \
	MyMainWindow

analogueClock.subdir = src/analogueClock
MyMainWindow.subdir = src/MyMainWindow

analogueClock.depends = MyMainWindow
