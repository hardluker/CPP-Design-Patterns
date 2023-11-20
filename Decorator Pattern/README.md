<p><strong><span style="font-size: 24px;">The Designer Pattern</span></strong></p>
<p>This is a structural pattern used to &quot;decorate&quot; or add additional features to an existing object.</p>
<p>This project contains the following classes:</p>
<ul>
    <li><strong>Stream:&nbsp;</strong>This is an abstract class that is used for polymorphism.</li>
    <li><strong>CloudStream:&nbsp;</strong>This is the class that will be decorated with additional functionality.</li>
    <li><strong>CompressedCloudStream:&nbsp;</strong>This is a decorator that adds compression functionality to CloudStream</li>
    <li><strong>EncryptedCloudStream:&nbsp;</strong>This is a decorator that adds encryption functionality to the CloudStream</li>
</ul>
<p>To &quot;decorate&quot; the object you just pass it through the constructor of the other decorators.</p>
<p>The decorators will contain Stream objects and then in the method is will run the method as an instantiation of the Stream class through a polymorphic expression.</p>