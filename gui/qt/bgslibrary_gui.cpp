#include "mainwindow.h"

int main(int argc, char *argv[])
{
  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "Background Subtraction Library v3.2.0       " << std::endl;  
  std::cout << "Using OpenCV version " << CV_VERSION << std::endl;
  std::cout << "--------------------------------------------" << std::endl;

  QApplication a(argc, argv);

  QCoreApplication::setApplicationName("BGSLibrary");
  QCoreApplication::setApplicationVersion("3.2.0");

  MainWindow w;
  w.show();

  return a.exec();
}
