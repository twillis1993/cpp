
class MyWidget : public QWidget {
public:

  // mouse tracking must be enabled
  void EnableMouse();

protected:

  virtual void paintEvent(QPaintEvent*);
  virtual void mouseMoveEvent(QMouseEvent*);

private:

};



