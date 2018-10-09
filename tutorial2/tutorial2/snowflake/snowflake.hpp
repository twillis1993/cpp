
class MyWidget : public QWidget {
	public:
		MyWidget();
		virtual ~MyWidget();
		void EnableMouse();
		void enableKeyboard();

	protected:
		virtual void paintEvent(QPaintEvent*);
		virtual void mouseMoveEvent(QMouseEvent*);
//		virtual void keyPressEvent(QKeyEvent*);

	private:
		QElapsedTimer* clickTimer;

};
