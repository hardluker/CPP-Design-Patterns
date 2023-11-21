<p><strong><span style="font-size: 24px;">The Facade Pattern</span></strong></p>
<p>This structural pattern is used to implement a &quot;Facade&quot; that is coupled to a complex set of objects. This allows the logic to be more portable and used in different applications without the necessity to modify each specific implementation.</p>
<p>The classes are as follows:</p>
<ul>
    <li><strong>Main:&nbsp;</strong>This class is coupled to NotificationService(facade). It is only coupled to this facade and any changes to the underlying logic will not require any changes in the main class.</li>
    <li><strong>NotificationService:&nbsp;</strong>This class ties all the complex logic together into a neat space to work with.</li>
    <li><strong>NotificationServer:&nbsp;</strong>This class returns Connection and AuthToken objects through the connect and authenticate methods. It then proceeds to send the message</li>
    <li><strong>Message:&nbsp;</strong>This class contains the actual content of the message</li>
    <li><strong>Connection:&nbsp;</strong>This class represents the connection of the server to the specific IP address. It has a method to disconnect.</li>
    <li><strong>AuthToken:&nbsp;</strong>This class is the AuthToken that must be received during a proper authentication process.</li>
</ul>
<p>All of this logic works together and is interfaced through the facade allowing it to be flexible and used in many different circumstances while still maintaining the same process.</p>