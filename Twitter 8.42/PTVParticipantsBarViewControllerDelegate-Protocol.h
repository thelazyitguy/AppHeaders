//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSSet, PTVGiftContributorWatcher, PTVMergeParticipantUser, PTVParticipantsBarViewController;

@protocol PTVParticipantsBarViewControllerDelegate <NSObject>
- (void)participantsBarViewControllerDidTapOnContributors:(PTVParticipantsBarViewController *)arg1 withContributorWatcher:(PTVGiftContributorWatcher *)arg2 presentUserIDs:(NSSet *)arg3;
- (void)participantsBarViewController:(PTVParticipantsBarViewController *)arg1 didLongPressParticipant:(PTVMergeParticipantUser *)arg2;
- (void)participantsBarViewController:(PTVParticipantsBarViewController *)arg1 didTapOnParticipant:(PTVMergeParticipantUser *)arg2;
- (void)participantsBarViewControllerDidUpdateParticipantCount:(PTVParticipantsBarViewController *)arg1;
@end

