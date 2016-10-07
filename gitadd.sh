#!/bin/bash -e
commit_message="$1"
git add . -A
git commit -m "$commit_message"
git push
git ls-files
git status
