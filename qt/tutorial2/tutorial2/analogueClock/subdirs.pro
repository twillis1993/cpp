TEMPLATE = subdirs

SUBDIRS = \
	analogueClock \
	MyMainWindow  \
	test

analogueClock.subdir = "analogueClock"
MyMainWindow.subdir = "MyMainWindow"
test.subdir = "test"

analogueClock.depends = MyMainWindow
test.depends = analogueClock
