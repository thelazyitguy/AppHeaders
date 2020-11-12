//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

#import "GTEViewCell-Protocol.h"

@class GTEAssignee, GTEChip, GTEDateTime, GTERecurrenceScheduling, NSObject, NSString;
@protocol GTELoggersProvider><GTETasksKitFeatureFlagsProvider, GTETaskCreationChipsStackViewCellDelegate, GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider;

@interface GTETaskCreationChipsStackViewCell : MDCCollectionViewCell <GTEViewCell>
{
    NSObject<GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider> *_appContext;
    NSObject<GTELoggersProvider><GTETasksKitFeatureFlagsProvider> *_userContext;
    GTEChip *_assigneeChip;
    GTEChip *_dateTimeRecurrenceChip;
    GTEAssignee *_assignee;
    GTEDateTime *_dateTime;
    GTERecurrenceScheduling *_recurrenceScheduling;
    id <GTETaskCreationChipsStackViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GTETaskCreationChipsStackViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GTERecurrenceScheduling *recurrenceScheduling; // @synthesize recurrenceScheduling=_recurrenceScheduling;
@property(readonly, nonatomic) GTEDateTime *dateTime; // @synthesize dateTime=_dateTime;
@property(retain, nonatomic) GTEAssignee *assignee; // @synthesize assignee=_assignee;
- (struct CGSize)computeChipsFramesForSize:(struct CGSize)arg1 andApply:(_Bool)arg2;
- (void)didTapClearDate;
- (void)didTapDateTimeChip;
- (void)didTapClearAssignee;
- (void)didTapAssigneeChip;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithAssignee:(id)arg1 dateTime:(id)arg2 recurrenceScheduling:(id)arg3;
- (void)prepareWithAppContext:(id)arg1 userContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
