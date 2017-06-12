#ifndef CENTRERELATIONS_H
#define CENTRERELATIONS_H

#include <QApplication>
#include <QMainWindow>
#include <QListWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class CentreRelations : public QWidget {

    Q_OBJECT // macro pour pouvoir utiliser signals et slots

    QLabel *titre_relations;
    QListWidget *relations;
    QPushButton *afficher_relation;
    QPushButton *supprimer_relation;
    QPushButton *creer_relation_orientee;
    QPushButton *creer_relation_non_orientee;
    QPushButton *fermer;

    QHBoxLayout *horiz1;
    QHBoxLayout *horiz2;
    QVBoxLayout *verti;

public:
    // argument : RelationsManager
    explicit CentreRelations(QMainWindow* parent=0);

signals:

private slots:

public slots:

};

#endif // CENTRERELATIONS_H
