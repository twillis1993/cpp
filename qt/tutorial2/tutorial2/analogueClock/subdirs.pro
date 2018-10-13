TEMPLATE = subdirs

SUBDIRS = \
	analogueClock \
	MyMainWindow \
	test

analogueClock.subdir = "src/analogueClock"
MyMainWindow.subdir = "src/MyMainWindow"
test.subdir = "src/test"

analogueClock.depends = MyMainWindow
test.depends = analogueClock
