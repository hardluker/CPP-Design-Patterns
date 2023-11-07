<p><strong><span style="font-size: 26px;">The Observer Pattern</span></strong></p>
<p>This design pattern is used when you have objects that need to be notified whenever a value changes.</p>
<p>In this specific example, you have the following:</p>
<p>Subject: This is a parent class that provides the methods for adding, removing, and notifying observers of changes.</p>
<p>DataSource: This child class contains the value. When the value is changed it calls the parent method to notify the observers.&nbsp;</p>
<p>Observer: This is a purely abstract class for the sake of polymorphism in the Subject class. Allowing us to pass the specific concrete observers through the methods.</p>
<p>SpreadSheet / Chart: These are the concrete observers. This is to simulate a chart and spreadsheet updating automatically as a value changes. &nbsp;These objects will be composed of the DataSource pointer to be able to reference the current value during the update method.</p>
<p>This is a very useful design pattern that allows for dynamic updating.</p>
<p><strong><span style="font-size: 26px;">Push Style</span></strong></p>
<p>If the push style is used it is beneficial as the observers do not need to be coupled with the concrete subject. However, this requires the subject to push through the abstract observer class a specific data type. If an observer needs a different datatype you will have to update the observer.</p>
<p><span style="font-size: 26px;"><strong>Pull Style</strong></span></p>
<p>I ultimately decided on the pull style in this implementation. When setting up the concrete observers you will need to couple them to the concrete subject. However, this allows for many different dynamic values and variations that you cannot have in the push style. It also means you will not need to update the abstract classes during these situations you can just add or remove data from the datasource.&nbsp;</p>