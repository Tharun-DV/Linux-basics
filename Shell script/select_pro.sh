#!/bin/bash



select drink in tea coffee water juice apple 
do
  case $drink in
    tea|coffee|water|juice)
    echo "Go to Canteen"
    ;;
  apple)
    echo "Available at store"
    ;;
  *)
    echo "invalid"
    break
    ;;
esac
done

