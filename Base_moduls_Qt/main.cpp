#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QNetworkAccessManager>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("mydatabase");
    db.setUserName("myusername");
    db.setPassword("mypassword");
    QNetworkAccessManager access1;
    access1.connectToHost("localhost",80); // я так понимаю это имя хоста и порт для связи (то что выскакивает в подсказках)

      // методы для работы с QSqlDatabase
      // addDatabase(): Создает и добавляет подключение к базе данных. Требует указания типа базы данных (например, "QMYSQL", "QPSQL") и, опционально, имени подключения.
      // removeDatabase(): Удаляет подключение к базе данных, заданное именем. Это следует делать только после того, как все связанные с ним объекты QSqlQuery будут уничтожены.
      // database(): Возвращает объект QSqlDatabase для заданного имени подключения. Может принимать флаг для указания на необходимость открытия новой сессии.
      // isDriverAvailable(): Проверяет, доступен ли драйвер для указанного типа базы данных.
      // drivers(): Возвращает список доступных драйверов базы данных.
      // isOpen(): Проверяет, открыто ли текущее подключение к базе данных.
      // isOpenError(): Определяет, произошла ли ошибка при последнем попытке открытия подключения.
      // open(): Открывает соединение с базой данных, используя ранее установленные параметры (имя хоста, имя базы данных, имя пользователя, пароль и т. д.).
      // close(): Закрывает текущее подключение к базе данных.
      // setDatabaseName(): Устанавливает имя базы данных, к которой будет осуществляться подключение.
      // setUserName(): Устанавливает имя пользователя для соединения с базой данных.
      // setPassword(): Устанавливает пароль для соединения с базой данных.
      // setHostName(): Устанавливает имя хоста, на котором находится база данных.
      // setPort(): Устанавливает номер порта для соединения с базой данных.
      // lastError(): Возвращает последнее сообщение об ошибке, связанное с базой данных.
      // transaction(): Начинает транзакцию на уровне базы данных.
      // commit(): Фиксирует текущую транзакцию.
      // rollback(): Откатывает текущую транзакцию.
      // tables(): Возвращает список таблиц в текущей базе данных. Может принимать флаг для фильтрации системных таблиц.
      // record(): Возвращает метаинформацию о структуре заданной таблицы.

    // методы для работы с QNetworkAccessManager
    // get(const QNetworkRequest &request): Отправляет GET-запрос на указанный URL и возвращает QNetworkReply*, который можно использовать для чтения ответа.
    // post(const QNetworkRequest &request, const QByteArray &data): Отправляет POST-запрос с данными, переданными в виде QByteArray. Возвращает QNetworkReply*.
    // put(const QNetworkRequest &request, const QByteArray &data): Отправляет PUT-запрос, аналогично методу post, но используется для обновления данных.
    // deleteResource(const QNetworkRequest &request): Отправляет DELETE-запрос для удаления ресурса на сервере.
    // head(const QNetworkRequest &request): Отправляет HEAD-запрос, который похож на GET-запрос, но без тела ответа. Полезно для получения метаинформации.
    // sendCustomRequest(const QNetworkRequest &request, const QByteArray &verb, const QByteArray &data = QByteArray()): Используется для отправки запросов с нестандартными HTTP-методами.
    // setCookieJar(QNetworkCookieJar *cookieJar): Устанавливает объект QNetworkCookieJar, который будет использоваться для хранения cookies.
    // setProxy(const QNetworkProxy &proxy): Устанавливает прокси для использования при выполнении сетевых запросов.
    // setCache(QAbstractNetworkCache *cache): Устанавливает кеш для хранения сетевых данных.
    // networkAccessible(): Возвращает текущее состояние сетевого доступа. Может быть полезным для понимания доступности сети.
    // connectToHost(const QString &hostName, quint16 port = 80) и connectToHostEncrypted(const QString &hostName, quint16 port = 443, const QString &sslPeerName = QString()):
    // Используются для установления соединения с хостом, соответственно незащищенного и защищенного SSL-соединения.


    return 0;
}
