# Coordinate frames

Before modifying `transform.cpp`, we have an empty window.

After creating the `QRectangle`, the rectangle is painted in the specified coordinates and is deformed when the enclosing window is resized.

After creating a viewport and setting the size as with the return value of `QMin`, the rectangle is scaled appropriately when the window is resized. It has a maximum size.


After creating a viewport and setting the size as with the return value of `QMax`, the rectangle is scaled appropriately when the window is resized. It has a minimum size.

