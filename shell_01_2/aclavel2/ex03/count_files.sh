#!/bin/sh
find . \( -type d -o -type f \) | wc -l | tr -d " "
