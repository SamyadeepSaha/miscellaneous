# Some complex ffmpeg commands

## Scroll image

Following command will scroll input.png horizontally right to left. To
make it left to right make the speed negative (ie 0.005 to -0.005). To
scroll vertical replace horizontal with vertical in following command.

```
ffmpeg -loop 1 -i input.png -vf "scroll=horizontal=0.005,crop=iw:ih:0:0,format=yuv420p" -t 10 output.mp4
```
