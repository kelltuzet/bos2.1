# bos2.1 Project

Extendable syslog library and utilities for Linux systems.

## Project Structure

- `libmysyslog` - Core logging library
- `libmysyslog-text` - Text format driver plugin
- `libmysyslog-json` - JSON format driver plugin
- `libmysyslog-client` - Test client application
- `libmysyslog-daemon` - Logging daemon

## Building

To build all components:

```bash
make all
