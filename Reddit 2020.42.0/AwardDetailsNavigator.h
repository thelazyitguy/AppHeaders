//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AwardDetailsNavigatable-Protocol.h"

@class AwardDetailsViewController, NSString;

@interface AwardDetailsNavigator : NSObject <AwardDetailsNavigatable>
{
    AwardDetailsViewController *_awardDetailsViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AwardDetailsViewController *awardDetailsViewController; // @synthesize awardDetailsViewController=_awardDetailsViewController;
- (void)presentViewController:(id)arg1;
- (void)showFlagOrReportConfirmationDialogWithAccountContext:(id)arg1 award:(id)arg2 awardedTarget:(id)arg3 eventLogger:(id)arg4 flagCompletion:(CDUnknownBlockType)arg5 reportCompletion:(CDUnknownBlockType)arg6;
- (void)showFlagConfirmationDialogWithAccountContext:(id)arg1 award:(id)arg2 awardedTarget:(id)arg3 eventLogger:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showHideConfirmationDialogWithAccountContext:(id)arg1 award:(id)arg2 awardedTarget:(id)arg3 isAuthor:(_Bool)arg4 eventLogger:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showReportConfirmationDialogWithAccountContext:(id)arg1 award:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAwardInfoWithAccountContext:(id)arg1 awardingTotal:(id)arg2 subreddit:(id)arg3;
- (void)showSelectAwardScreenForComment:(id)arg1 parentPost:(id)arg2 accountContext:(id)arg3 correlationId:(id)arg4;
- (void)showSelectAwardScreenForPost:(id)arg1 accountContext:(id)arg2 correlationId:(id)arg3;
- (void)showWebPageWithURL:(id)arg1 accountContext:(id)arg2;
- (void)close;
- (id)initWithAwardDetailsViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
