//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageAbstractConversationEntryCell.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1DirectMessageActivityEntryViewModel, TFNAttributedTextView;

@interface T1DirectMessageActivityEntryCell : T1DirectMessageAbstractConversationEntryCell <TFNAttributedTextViewDelegate>
{
    TFNAttributedTextView *_activityLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *activityLabel; // @synthesize activityLabel=_activityLabel;
- (_Bool)accessibilityActivate;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) T1DirectMessageActivityEntryViewModel *entryViewModel; // @dynamic entryViewModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

