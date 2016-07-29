#Ti.NetworkServiceDiscovery

Titanium module for exposing Androids NSD (Bonjour)


##Usage
```javascript
var Bonjour=require("de.appwerft.networkservicediscovery");
Bonjour.start({
    dnsType:Bonjour.TYPE_AIRLINO,
    onFound: function(_e) {
    },
    onLost: function(_e) {

    }
});

```