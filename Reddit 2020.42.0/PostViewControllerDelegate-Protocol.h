//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, PostViewController, SubmittedPost, Subreddit;

@protocol PostViewControllerDelegate <NSObject>
- (void)postViewControllerShowSubredditPicker:(PostViewController *)arg1;
- (void)postViewController:(PostViewController *)arg1 showRulesForSubreddit:(Subreddit *)arg2;
- (void)postViewController:(PostViewController *)arg1 didSaveDraftFromPost:(SubmittedPost *)arg2;
- (void)postViewController:(PostViewController *)arg1 didSchedulePostWithId:(NSString *)arg2 subreddit:(Subreddit *)arg3;
- (void)postViewController:(PostViewController *)arg1 didSubmitPostWithURL:(NSURL *)arg2 toSubreddit:(Subreddit *)arg3;
- (void)postViewController:(PostViewController *)arg1 didFinishWithPost:(SubmittedPost *)arg2;
@end

