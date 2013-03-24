#include "calc.h"


Calc::Calc(QWidget *parent) :
    QWidget(parent)
{
 layout = new QVBoxLayout; //calling the constructor to create a new layout
 buttonlayout = new QHBoxLayout; // same as above but for button
 FirstLine = new QLineEdit;
 SecondLine = new QLineEdit;
 Output = new QLabel;// displays the output on the window itself.

 layout->addWidget(FirstLine);//placing the firstline in the window.
 layout->addWidget(SecondLine);//placing the second line in the window.

 add = new QPushButton("+", this);// creating a new add button
 mul = new QPushButton("*", this);// creating a new mul button
 sub = new QPushButton("-", this);// creating a new sub button
 div = new QPushButton("/", this);// creating a new div button

 buttonlayout->addWidget(add);//placing the add button
 buttonlayout->addWidget(sub);//placing the sub button
 buttonlayout->addWidget(div);//placing the div button
 buttonlayout->addWidget(mul);//placing the mul button


 layout->addLayout(buttonlayout);
 layout->addWidget(Output);

 connect(add, SIGNAL(clicked()), this, SLOT(addnum()));// the func will be called when + button is clicked.
 connect(sub, SIGNAL(clicked()), this, SLOT(subnum()));// the func will be called when - button is clicked.
 connect(mul, SIGNAL(clicked()), this, SLOT(mulnum()));// the func will be called when * button is clicked.
 connect(div, SIGNAL(clicked()), this, SLOT(divnum()));// the func will be called when / button is clicked.
 setLayout(layout);
}

Calc::~Calc()// destructor- cleanup function
{

}
void Calc::addnum()
{
    int a = FirstLine->text().toInt();//converting the string obtained to an integer
    int b = SecondLine->text().toInt();
    Output->setText(QString::number(a+b));//dispplaying the result after converting it to a string.
}

void Calc::subnum()
{
    int a = FirstLine->text().toInt();
    int b = SecondLine->text().toInt();
    Output->setText(QString::number(a-b));
}

void Calc::mulnum()
{
    int a = FirstLine->text().toInt();
    int b = SecondLine->text().toInt();
    Output->setText(QString::number(a*b));
}
void Calc::divnum()
{
        int a = FirstLine->text().toInt();
        int b = SecondLine->text().toInt();
        Output->setText(QString::number(a/b));
}
