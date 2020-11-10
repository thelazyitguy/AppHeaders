//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PostViewControllerDelegate-Protocol.h"
#import "RecentSubredditsViewControllerDelegate-Protocol.h"

@interface _TtC6Reddit23PostCreationCoordinator : NSObject <PostViewControllerDelegate, RecentSubredditsViewControllerDelegate>
{
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: presentingViewController
    // Error parsing type: , name: delegate
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: postViewController
    // Error parsing type: , name: editUsernameFlowCoordinator
}

+ (void)presentCrosspostPostFlow:(id)arg1 accountContext:(id)arg2 presentingViewController:(id)arg3;
+ (id)createEditPostFlow:(id)arg1 subreddit:(id)arg2 accountContext:(id)arg3 delegate:(id)arg4;
+ (id)createTextPostFlowWithSubreddit:(id)arg1 title:(id)arg2 selfText:(id)arg3 accountContext:(id)arg4 delegate:(id)arg5;
+ (id)createPostFlowWithDeeplinkUrl:(id)arg1 accountContext:(id)arg2;
+ (id)presentPostFlowWithSubreddit:(id)arg1 accountContext:(id)arg2 presentingViewController:(id)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
- (id)init;
- (void)recentSubredditsViewController:(id)arg1 didSelectSubreddit:(id)arg2;
- (void)postViewController:(id)arg1 showRulesForSubreddit:(id)arg2;
- (void)postViewControllerShowSubredditPicker:(id)arg1;
- (void)postViewController:(id)arg1 didSaveDraftFromPost:(id)arg2;
- (void)postViewController:(id)arg1 didFinishWithPost:(id)arg2;
- (void)postViewController:(id)arg1 didSubmitPostWithURL:(id)arg2 toSubreddit:(id)arg3;
- (void)postViewController:(id)arg1 didSchedulePostWithId:(id)arg2 subreddit:(id)arg3;
- (void)postCreationRulesViewController:(id)arg1 didPress:(id)arg2;
- (void)postCreationRulesViewControllerDidPressContinue:(id)arg1;
- (void)postCreationCommunityViewController:(id)arg1 didSelect:(id)arg2;

@end

