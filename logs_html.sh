#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
goaccess --log-format=COMBINED -a -o "$DIR/www/goaccess.html" "$DIR/logs/access.log"
