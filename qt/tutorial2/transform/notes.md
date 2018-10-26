# Coordinate frames

Before modifying `transform.cpp`, we have an empty window.

After creating the `QRectangle`, the rectangle is painted in the specified coordinates and is deformed when the enclosing window is resized.

After creating a viewport and setting the size as with the return value of `QMin`, the rectangle is scaled appropriately when the window is resized. It has a maximum size.

After creating a viewport and setting the size as with the return value of `QMax`, the rectangle is scaled appropriately when the window is resized. It has a minimum size.

# Notes on Qt coordinate system (<http://doc.qt.io/archives/qt-4.8/coordsys.html>)

	The mapping of the logical coordinates to the physical coordinates are handled by QPainter's world transformation worldTransform() (described in the Transformations section), and QPainter's viewport() and window(). The viewport represents the physical coordinates specifying an arbitrary rectangle. The "window" describes the same rectangle in logical coordinates. By default the logical and physical coordinate systems coincide, and are equivalent to the paint device's rectangle.

In short: the window and the viewport are arbitrary rectangles described in logical and physical coordinates, respectively. By default, both are set to the device's rectangle.

The window-viewport mechanism is useful to make drawing code independent of the size or resolution of the paint device.

	By default, the QPainter operates on the associated device's own coordinate system, but it also has complete support for affine coordinate transformations.

NB: One can transform the coordinate system with something as simple as painter.translate(). For example, in the analogue clock the use of 

	`painter.translate(width()/2,height()/2);`

sufficed to set the origin at the center of the paint area.

	Using window-viewport conversion you can make the logical coordinate system fit your preferences. The mechanism can also be used to make the drawing code independent of the paint device (e.g. QWidget, QPixmap, QImage). You can, for example, make the logical coordinates extend from (-50, -50) to (50, 50) with (0, 0) in the center by calling the QPainter::setWindow() function:

	QPainter painter(this);
	painter.setWindow(QRect(-50, -50, 100, 100));

	Now, the logical coordinates (-50,-50) correspond to the paint device's physical coordinates (0, 0). Independent of the paint device, your painting code will always operate on the specified logical coordinates.

The world matrix is a transformation matrix applied in addition to the window-viewport conversion. It allows translation, shearing, scaling, and rotation. Logical coordinates passed to a drawing function transformed by the world matrix before window-viewport conversion.



