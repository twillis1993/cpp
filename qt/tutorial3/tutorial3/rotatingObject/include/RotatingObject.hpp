#ifndef ROTATINGOBJECT_H
#define ROTATINGOBJECT_H

#include <QWidget>

class RotatingObject : public QWidget {

	Q_OBJECT

	public:
		RotatingObject(QWidget *parent = 0);

	protected:
		void paintEvent(QPaintEvent *event);
};	

#endif
