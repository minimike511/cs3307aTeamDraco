#include "./test.h"
using namespace std;

void QTTestCSVReader::initTestCase()
{
    qDebug("called before everything else");
}

void QTTestCSVReader::readGrants()
{
    CSVReader reader("../Project Information/Sample Data/Grants_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void QTTestCSVReader::readGrantsClinical()
{
    CSVReader reader("../Project Information/Sample Data/GrantsClinicalFunding_sample.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void QTTestCSVReader::readPresentations1()
{
    CSVReader reader("../Project Information/Sample Data/Presentations_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void QTTestCSVReader::readPresentations2()
{
    CSVReader reader("../Project Information/Sample Data/Presentations_sample.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void QTTestCSVReader::readTeaching()
{
    CSVReader reader("../Project Information/Sample Data/Program_Teaching_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void QTTestCSVReader::readNoFile(){
    CSVReader reader("NO FILE");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() == 0);
}

void QTTestCSVReader::dataPresentations(){
    CSVReader reader("../Project Information/Sample Data/Presentations_sample.csv");
    vector< vector<string> > all_data = reader.getData();
    QVERIFY(all_data.size() != 0);
}

void QTTestCSVReader::dataTeaching(){
    CSVReader reader("../Project Information/Sample Data/Program_Teaching_expanded.csv");
    vector< vector<string> > all_data = reader.getData();
    QVERIFY(all_data.size() != 0);
 }

 void QTTestCSVReader::cleanupTestCase()
 {
    qDebug("called after myFirstTest and mySecondTest");
 }

 void QTTestMainWindow::initTestCase()
 {
     qDebug("called before everything else");
 }

 void QTTestMainWindow::teachInvalidLoad()
 {
     CSVReader reader("../Project Information/Sample Data/Presentations_sample.csv");
     vector<string> header = reader.getHeaders();
     vector< vector<string> > all_data = reader.getData();
     std::string searchstring = "Program";
     QVERIFY(std::find(header.begin(), header.end(), searchstring) == header.end());
 }

 void QTTestMainWindow::cleanupTestCase()
 {
    qDebug("called after myFirstTest and mySecondTest");
 }

