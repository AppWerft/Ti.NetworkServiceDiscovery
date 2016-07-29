/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/Networkservicediscovery-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/Networkservicediscovery-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "de.appwerft.networkservicediscovery.ExampleProxy.h"
#include "de.appwerft.networkservicediscovery.NetworkservicediscoveryModule.h"


#line 14 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/Networkservicediscovery-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 18, duplicates = 0 */

class NetworkservicediscoveryBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
NetworkservicediscoveryBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
NetworkservicediscoveryBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 48,
      MAX_WORD_LENGTH = 65,
      MIN_HASH_VALUE = 48,
      MAX_HASH_VALUE = 65
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 16 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/Networkservicediscovery-generated/KrollGeneratedBindings.gperf"
      {"de.appwerft.networkservicediscovery.ExampleProxy", ::de::appwerft::networkservicediscovery::networkservicediscovery::ExampleProxy::bindProxy, ::de::appwerft::networkservicediscovery::networkservicediscovery::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/Networkservicediscovery-generated/KrollGeneratedBindings.gperf"
      {"de.appwerft.networkservicediscovery.NetworkservicediscoveryModule", ::de::appwerft::networkservicediscovery::NetworkservicediscoveryModule::bindProxy, ::de::appwerft::networkservicediscovery::NetworkservicediscoveryModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/Networkservicediscovery-generated/KrollGeneratedBindings.gperf"

