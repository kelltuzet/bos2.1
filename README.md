# MySysLog Project

Проект для системного журналирования с поддержкой различных форматов вывода.

## Структура проекта

- `libmysyslog` - основная библиотека журналирования
- `libmysyslog-text` - драйвер для текстового формата
- `libmysyslog-json` - драйвер для JSON формата
- `mysyslog-client` - тестовое клиентское приложение
- `mysyslog-daemon` - демон журналирования

## Сборка

Для сборки проекта выполните:

```bash
make all
