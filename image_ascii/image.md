# Different image format structure

## BMP

| Name                 | Size     | Offset     | Description           |
|----------------------|----------|------------|-----------------------|
| BMP Signature        | 2 Bytes  | 0x00       | Value 0x4d42          |
| File Size            | 4 Bytes  | 0x02       | File size with header |
| Reserved             | 4 Bytes  | 0x06       | Unused                |
| Data offset          | 4 Bytes  | 0x0a       | Offset of pixel data  |
| Size of the header   | 4 Bytes  | 0x0e       | Header is 40 bytes    |
| Width                | 4 Bytes  | 0x12       | Width  pixels         |
| Height               | 4 Bytes  | 0x16       | Height pixels         |
| Planes               | 2 Bytes  | 0x1a       | Color plane number    |
| Bits per pixel       | 2 Bytes  | 0x1c       | Bits per pixel        |
| Compression          | 4 Bytes  | 0x1e       | Compression           |
| Image size           | 4 Bytes  | 0x22       | Image size            |
| Pixel per meter in X | 4 Bytes  | 0x26       | Horizontal resolution |
| Pixel per meter in Y | 4 Bytes  | 0x2a       | Vertical resolution   |
| Colors used          | 4 Bytes  | 0x2e       | Number of used colors |
| Important colors     | 4 Bytes  | 0x32       | Number of important   |
| Pixel data           | Variable | Variable   | Stored bottom up      |
