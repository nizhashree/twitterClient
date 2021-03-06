//
//  TweetTableViewCell.h
//  twitter
//
//  Created by Nizha Shree Seenivasan on 11/9/15.
//  Copyright © 2015 Nizha Shree Seenivasan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tweet.h"

@interface TweetTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *tweetDescription;
@property (weak, nonatomic) IBOutlet UILabel *CreatedDate;
@property (weak, nonatomic) IBOutlet UIImageView *UserProfileImage;
@property (nonatomic, strong) tweet* singleTweet;
@property (weak, nonatomic) IBOutlet UILabel *UserName;
@property (weak, nonatomic) IBOutlet UIImageView *retweetedButton;
@property (weak, nonatomic) IBOutlet UILabel *retweetUserName;
-(void) setTweet:(tweet*) singleTweet;
@end
