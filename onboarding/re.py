import re
pattern = r"(((25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])[ (\[]?(\.|dot)[ )\]]?){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9]))"
f = open("D:\AccessLogs.txt","r")
text = f.read()

ips = [match[0] for match in re.findall(pattern, text)]
print list(set(ips))