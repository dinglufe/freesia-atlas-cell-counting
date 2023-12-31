#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QLabel>
#include <QTimer>
#include <QWidget>

class StatusBar : public QWidget {
  Q_OBJECT

  QLabel m_label;
  QTimer m_timer;
  bool m_bLimitLength;

 public:
  explicit StatusBar(bool bLimitLength = false);
  ~StatusBar();
 signals:

 private slots:
  void timeout();
 public slots:
  void showMessage(QString, int);
};

#endif  // STATUSBAR_H
