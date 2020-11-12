//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNPresenceDotDelegate-Protocol.h"

@class DYNBrandedLabel, DYNLabel, DYNPaddedLabelView, DYNPresenceDot, NSString, UIStackView, UIView;
@protocol DYNMember, GIPAccountID;

@interface DYNWorldMemberCellSubviewManager : NSObject <DYNPresenceDotDelegate>
{
    UIStackView *_leadingMainStackView;
    UIStackView *_trailingMainStackView;
    DYNBrandedLabel *_nameLabel;
    DYNLabel *_snippetLabel;
    UIStackView *_labelsStackView;
    UIStackView *_nameStackView;
    DYNPaddedLabelView *_botLabel;
    DYNPresenceDot *_currentPresenceDot;
    UIView *_leadingView;
    id <GIPAccountID> _accountID;
    id <DYNMember> _member;
    _Bool _shouldShowEmailOnly;
    DYNPaddedLabelView *_externalLabelView;
    UIView *_guestAccessDisabledView;
}

- (void).cxx_destruct;
- (id)presenceIndicatorViewWithMember:(id)arg1;
- (id)avatarLeadingViewForMember:(id)arg1;
- (void)updateLeadingView;
- (void)clearPresenceDotIfNeeded;
- (void)setUpCurrentPresenceDotWithView:(id)arg1;
- (void)updateLabels;
- (void)presenceDotDidUpdatePresence:(id)arg1;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (void)updateWithWorldMemberCellModel:(id)arg1;
- (void)addAndConstrainSubviewsToParentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
