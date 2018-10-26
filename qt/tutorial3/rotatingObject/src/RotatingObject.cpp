#include <QtGui>
#include <RotatingObject.hpp>

RotatingObject::RotatingObject(QWidget* parent) : QWidget(parent) {
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(1);
	
	resize(200,200);	
}

// NB: Can omit parameter name as it is not referenced in the function body
void RotatingObject::paintEvent(QPaintEvent *) {

	QPainter painter(this);

	int side = qMin(width(), height());

	painter.setWindow(-50, -50, 100, 100);

	painter.setViewport((width()-side)/4, (height()-side)/4, side, side);

	QTime time = QTime::currentTime();

	painter.rotate(0.360 * time.msec());

	painter.drawRect(QRectF(0,0,10,10));
}
