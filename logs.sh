#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
goaccess --log-format=COMBINED -a "$DIR/logs/access.log"
