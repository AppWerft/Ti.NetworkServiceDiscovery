#Ti.NetworkServiceDiscovery

Titanium module for exposing Androids NSD (Bonjour)

<img src="http://screenshots.en.sftcdn.net/en/scrn/79000/79553/bonjour-6.jpg" width="120" align="left"/>Adding Network Service Discovery (NSD) to your app allows your users to identify other devices on the local network that support the services your app requests. This is useful for a variety of peer-to-peer applications such as file sharing or multi-player gaming.

##Usage
```javascript
var Bonjour=require("de.appwerft.networkservicediscovery");
Bonjour.start
    dnsType:Bonjour.TYPE_GOOGLECAST,
    onFound: function(_e) {
     // {"name":"Elysium","ip":"192.168.178.100","port":8009,"type":"._googlecast._tcp"}
     // {"name":"HP Officejet Pro 8610 [5FA732]","ip":"192.168.178.38","port":80,"type":"._http._tcp"}   
    },
    onLost: function(_e) {

    }
});

Bonjour.stop();

```