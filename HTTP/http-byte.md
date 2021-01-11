in linux terminal:

curl -v -X GET http://www.flipkart.com -o flipkart.html

output:

TCP_NODELAY set

- Connected to www.flipkart.com (163.53.76.86) port 80 (#0)
  > GET / HTTP/1.1
  > Host: www.flipkart.com
  > User-Agent: curl/7.68.0
  > Accept: _/_
- Mark bundle as not supporting multiuse
  < HTTP/1.1 301 Moved Permanently
  < Server: nginx
  < Date: Mon, 11 Jan 2021 18:17:17 GMT
  < Content-Type: text/html
  < Content-Length: 178
  < Location: https://www.flipkart.com/
  <
  { [178 bytes data]
  100 178 100 178 0 0 362 0 --:--:-- --:--:-- --:--:-- 362
- Connection #0 to host www.flipkart.com left intact
