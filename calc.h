#ifndef CALC_H
#define CALC_H

#include<QtGui>


class Calc : public QWidget
{
    Q_OBJECT
    
public:
    explicit Calc(QWidget *parent = 0);
    ~Calc();
    
private:

    QLineEdit *FirstLine, *SecondLine;
    QLabel *Output;
    QVBoxLayout *layout;
    QHBoxLayout *buttonlayout;
    QPushButton *add, *sub, *mul, *div;
public slots:
    void addnum();
   void subnum();
   void mulnum();
   void divnum();

};

#endif // CALC_H
