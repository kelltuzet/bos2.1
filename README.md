# Объектные файлы
*.o
*.ko
*.obj
*.elf

# Библиотеки
*.a
*.so
*.so.*
*.dylib

# Исполняемые файлы
*.exe
*.out
*.app

# Файлы сборки
/build/
/debian/
*.deb

# Резервные копии
*~
*.bak

# Отладочная информация
*.dSYM/
## 5. Создание основной библиотеки libmysyslog

1. Создайте файлы в каталоге `libmysyslog`:

`libmysyslog/mysyslog.h`:
```c
#ifndef MYSYSLOG_H
#define MYSYSLOG_H

// Уровни журналирования
typedef enum {
    LOG_DEBUG,
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR,
    LOG_CRITICAL
} log_level_t;

// Драйверы вывода
typedef enum {
    DRIVER_TEXT,
    DRIVER_JSON
} log_driver_t;

// Форматы вывода (может быть расширен)
typedef enum {
    FORMAT_DEFAULT
} log_format_t;

/**
 * Функция журналирования
 * @param msg Сообщение для записи в журнал
 * @param level Уровень важности сообщения
 * @param driver Драйвер вывода (текст, json)
 * @param format Формат вывода
 * @param path Путь к файлу журнала
 * @return 0 в случае успеха, -1 в случае ошибки
 */
int mysyslog(const char* msg, int level, int driver, int format, const char* path);

#endif // MYSYSLOG_H
