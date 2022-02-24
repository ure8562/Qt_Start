#include "mainwindow.h"

#include <QApplication>
#include <QtCore>
QTextStream cout(stdout, QIODevice::WriteOnly);
void Func1(void);
void Func2(void);
void Func3(void);
void Func4(QList<QStringList> &data);

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //avoid compiler warnings
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    //Func1();
    //Func2();
    //Func3();
    QList<QStringList> data;
    QList<QStringList>::iterator it; //반복자 선언


    Func4(data);
    //QStringList a = data[0][0];
    for(it = data.begin();it != data.end();it++){
        //it이 li.begin()을 가리킴, it이 li.end()를 가리키지 않을때까지 반복, it가 다음것을 가리킴
               //out << *it << endl; //원소 접근은 *it을 이용
        qDebug() << *it << endl;
           }
   // MainWindow w;

   //w.show();
    //return a.exec();
}

void Func4(QList<QStringList> &data)
{
    //file operations
    QFile file("sample.csv");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        //loop forever macro
        forever
        {
            QString line = stream.readLine();
            //test for null string 'String()'
            if(line.isNull())
            {
                break;
            }
            //test for empty string 'QString("")'
            if(line.isEmpty())
            {
                continue;
            }
            QStringList row;
            //for each loop to iterate over containers
            foreach(const QString& cell, line.split(","))
            {
                row.append(cell.trimmed());
            }
            data.append((row));
        }
    }

}

void Func3(void)
{
    QString s1("Hello");
    QString s2("Qt");
    QString s3("BB");
    QList<QString> list;

    // stream into containers
    list << s1 << s2 << s3;

    //Join strings
    QString s = list.join(" Plus ") + "!";
    cout << s << endl;
}
void Func2(void)
{
    QString s1("Hello");
    QString s2("Qt");
    QList<QString> list;

    // stream into containers
    list << s1 << s2;
    // JAVA and STL like iterators
    QListIterator<QString> iter(list);
    while(iter.hasNext()){
        cout << iter.next();
        if(iter.hasNext()){
            cout<< " ";
        }
    }

    cout<< "!" << endl;

}
void Func1(void)
{
    QString s1("Paris");
    QString s2("London");

    QString s = s1 + " " + s2 + "!";
    cout << s << endl;

}
