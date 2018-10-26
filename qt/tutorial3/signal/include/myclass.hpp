#include <QObject>

#ifndef _MYCLASS
#define _MYCLASS


class MyClass : public QObject  {

Q_OBJECT

public:

  MyClass();


public slots: 
  void handleButton();

private:

  std::string initializeWorkingDirectory() const;

  std::string _working_directory;

};

#endif // _MYCLASS
