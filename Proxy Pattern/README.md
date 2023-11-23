<p><strong><span style="font-size: 24px;">The Proxy Pattern</span></strong></p>
<p>This structural pattern is where a low resource proxy object is instantiated and stored and the costly real objects are instantiated within the proxy object only when they need to be accessed specifically. This is called lazy loading.</p>
<p>The classes included are:</p>
<ul>
    <li><strong>Library:&nbsp;</strong>This class is the object that makes the request and is storing the proxy ebooks for lazy loading.</li>
    <li><strong>Ebook:&nbsp;</strong>This is the abstract class that shares the attributes between the realebook and the proxyebook.</li>
    <li><strong>RealEbook:&nbsp;</strong>This is the class that includes the actual implementation details that are costly and only need to be done when they need to be done.</li>
    <li><strong>EbookProxy:</strong> This is the lowcost object that does not contain the implementation details. These are stored in the library in the meantime. When the show method is called it will then instantiate the associated titled RealEbook and then display it&apos;s content</li>
</ul>
<p>This design pattern is great for resource utilization and saving memory as not every ebook needs to be loaded, only the ebook you are trying to see would need to be loaded.</p>