#!/bin/bash
git ls-files $(git rev-parse --show-toplevel) --others --ignored --exclude-standard 

