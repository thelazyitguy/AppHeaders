//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;

@interface TFNTwitterToastNudgeExperimentModel : NSObject
{
    TFNTwitterAccount *_account;
}

+ (void)scribeComposition:(id)arg1 didDeleteDraftFromAccount:(id)arg2;
+ (void)scribeComposition:(id)arg1 didSaveDraftFromAccount:(id)arg2;
+ (void)scribeComposition:(id)arg1 didSendStatus:(id)arg2 fromAccount:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_tfn_storeProposedTextToCustomScribeTableForComposition:(id)arg1;
- (_Bool)sendNotificationToShowUndoTweetToastIfNeededForCompositions:(id)arg1;
- (_Bool)shouldShowShowUndoTweetSentToast;
- (_Bool)shouldHideTweetSentToast;
@property(readonly, nonatomic) unsigned long long toastNudgeFlags;
- (id)initWithAccount:(id)arg1;

@end
