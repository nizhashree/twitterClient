# Project 3 - myTwitter

myTwitter is a basic twitter app to read and compose tweets the [Twitter API](https://apps.twitter.com/).

Time spent: 10 hours spent in total

## User Stories

The following **required** functionality is completed:

- [x] User can sign in using OAuth login flow.
- [x] User can view last 20 tweets from their home timeline.
- [x] The current signed in user will be persisted across restarts.
- [x] In the home timeline, user can view tweet with the user profile picture, username, tweet text, and timestamp.  In other words, design the custom cell with the proper Auto Layout settings.  You will also need to augment the model classes.
- [ ] User can pull to refresh.
- [x] User can compose a new tweet by tapping on a compose button.
- [x] User can tap on a tweet to view it, with controls to retweet, favorite, and reply.

The following **optional** features are implemented:

- [x] When composing, you should have a countdown in the upper right for the tweet limit.
- [x] After creating a new tweet, a user should be able to view it in the timeline immediately without refetching the timeline from the network.
- [x] Retweeting and favoriting should increment the retweet and favorite count.
- [ ] User should be able to unretweet and unfavorite and should decrement the retweet and favorite count.
- [x] Replies should be prefixed with the username and the reply_id should be set when posting the tweet,
- [ ] User can load more tweets once they reach the bottom of the feed using infinite loading similar to the actual Twitter client.


## Video Walkthrough

Here's a walkthrough of implemented user stories:

<img src='http://i.imgur.com/LV5SpOE.gif' title='Video Walkthrough' width='' alt='Video Walkthrough' />

GIF created with [LiceCap](http://www.cockos.com/licecap/).

## Notes

I faced challenges with autolayout.
The main difficulty I faced were
* To display the retweeted tweet, there is a text  ("x retweeted") which will appear at the start of the tweet. But that text will not come for common tweet & hence, the space for that retweeted text should be reused. I spent lot of time to fix that.

* One another challenge I faced & could not fix it was displaying 2 labels side by side. When the first label's size grows, 2nd label should move right. Hence, I changed them to a single label at last for now. But it would be really helpful if someone could tell me where I went wrong in defining it. You could find my code in the commit (https://github.com/nizhashree/twitterClient/tree/e1eb027065000b5c6c79321dde308b79152600ca)

## License

    Copyright [yyyy] [name of copyright owner]

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.