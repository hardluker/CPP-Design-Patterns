<p><strong><span style="font-size: 26px;">The Chain of Responsibility Pattern</span></strong></p>
<p>This design pattern is a great example of the open close principle. The classes should be open to extension but closed to modification.</p>
<p>In this particular example it simulates an http request on a webserver. The chain of responsibility is implemented to add flexibility to the steps of the request. Also this is necessary to keep the classes as having only a single responsibility.</p>
<p>The classes in the program are the following:</p>
<p><strong>HttpRequest:</strong> This request contains the username and password data. It has getters and setters to access these elements to retain encapsulation.</p>
<p><strong>WebServer:&nbsp;</strong>This class contains a handler object. It will run the HttpRequest through the handler object.</p>
<p><strong>Handler:&nbsp;</strong>This is an abstract class. It calls itself recursively. It does this to work through each of the chain of responsibility until the doHandle comes back null</p>
<p><strong>Authenticator:&nbsp;</strong>This class is the first step in this example. It simulates authentication logic.</p>
<p><strong>Compressor:&nbsp;</strong>This is the second step and simulates compression logic.</p>
<p><strong>Logger:&nbsp;</strong>This is the third step and simulates logging data.</p>
<p><strong>Encryptor:&nbsp;</strong>This is the final step and simulates the logic for encrypting the data.</p>
<p><br></p>