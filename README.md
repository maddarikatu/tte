# TTE
Unix traditionally counted time as seconds since Jan 1, 1970 00:00 UTC as a signed 32-bit integer.
This methods has a limit after the 2147483648th second, 03:14:07 UTC on 19 January 2038 (see [Y2K38](https://en.wikipedia.org/wiki/Year_2038_problem)).

## Install
```bash
git clone https://github.com/maddarikatu/tte
cd tte
make
# installing in /usr/bin/tte
sudo make install
# installing in custom path
DESTDIR=[path] make install
```
