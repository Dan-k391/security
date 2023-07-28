target = 'spirit/xbash'

with open(target, 'rb') as f:
    data = f.read()
    print(data)
    for i in range(len(data)):
        if data[i] == 0x1f and data[i+1] == 0x8b:
            print('Found gzip header at %d' % i)
            with open('extracted.gz', 'wb') as g:
                g.write(data[i:])
            break
    f.close()
