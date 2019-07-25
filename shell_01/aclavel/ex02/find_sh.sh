#!/bin/sh
find . -type f -name "*.sh" | sed 's/\.sh//g' | rev | cut -d/ -f1 | rev
