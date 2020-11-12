//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/RUIActionSheetViewController.h>

#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class NSString, Post, PostModerateActionSheetConfiguration;
@protocol AccountContext, PostModerateActionSheetDelegate;

@interface PostModerateActionSheetViewController : RUIActionSheetViewController <RUIActionSheetViewControllerDelegate>
{
    Post *_post;
    id <PostModerateActionSheetDelegate> _postModerateActionSheetDelegate;
    id <AccountContext> _accountContext;
    PostModerateActionSheetConfiguration *_postModerateActionSheetConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PostModerateActionSheetConfiguration *postModerateActionSheetConfiguration; // @synthesize postModerateActionSheetConfiguration=_postModerateActionSheetConfiguration;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <PostModerateActionSheetDelegate> postModerateActionSheetDelegate; // @synthesize postModerateActionSheetDelegate=_postModerateActionSheetDelegate;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void)setSticky:(_Bool)arg1 forPost:(id)arg2;
- (void)unlockComments:(id)arg1;
- (void)lockComments:(id)arg1;
- (void)unmarkPostNSFW:(id)arg1;
- (void)markPostNSFW:(id)arg1;
- (void)unmarkPostOC:(id)arg1;
- (void)markPostOC:(id)arg1;
- (void)unmarkPostSpoiler:(id)arg1;
- (void)markPostSpoiler:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (id)initWithAccountContext:(id)arg1 post:(id)arg2 postModerateActionSheetConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
