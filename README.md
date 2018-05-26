# twitter-mention-printer
A Particle-powered project to print my latest Twitter mention without having to look at a screen.

## Using the Twitter API

I was trying to rely on Thingspeak, the way I did for my [IoT Plant](https://www.thomasdeneuville.com/portfolio/iot-plant/), but my goal is not to _tweet_ but to retrieve mentions to my @handle. Thingspeak has a ThingHTTP service, but it is meant to be connected with ThingTweet or TweetControl apps.

I went directly to the Twitter API and tried to build a Webhook for it as Particle integration.

My first goal will be to return a certain amount of mentions in the Console / Serial as a proof of concept.
