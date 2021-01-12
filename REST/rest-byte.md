<h1>How do I pass multiple query parameters with a single URL?<h1>
<br>
<h3>Search parameters come after the ? character. Multiple search parameters can be used by separating them with the & character.
<br>

For an API that needs to take two search parameters - query(city) and location (country), the request URL should be like this https://www.metaweather.com/api/location/search/?query=san&location=India </h3>

<br />
<img src="../images/im1.png" alt="log"/>
<br />

<br />
<img src="../images/image_3.png" alt="log"/>
<br />

<br />
<img src="../images/image_4.png" alt="log"/>
<br />

<br />
<img src="../images/image_5.png" alt="log"/>
<br />

<br />
<img src="../images/image_6.png" alt="log"/>
<br />

<!-- =================================================== -->

<h1> pyhton program to make REST api calls </h1>
<br>
<h3> 
import requests

<!-- Set the API endpoint-->

url = "https://www.metaweather.com/api/location/search/?query=san"

<!-- Use the library to perform an HTTP GET request to the URL-->

response = requests.get(url)

<!-- Print out the data-->

print(response.text)
