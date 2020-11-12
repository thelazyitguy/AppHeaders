//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCellActionProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"

@class NSString, YTEmergencySupportActionView, YTFormattedStringLabel, YTIEmergencyOneboxRenderer, YTSeparatorView;
@protocol YTResponder;

@interface YTEmergencyOneboxCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTCellActionProtocol>
{
    YTIEmergencyOneboxRenderer *_renderer;
    YTFormattedStringLabel *_titleLabel;
    YTSeparatorView *_horizontalSeparatorView;
    YTEmergencySupportActionView *_firstOptionView;
    YTEmergencySupportActionView *_secondOptionView;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly, nonatomic) YTEmergencySupportActionView *secondOptionView; // @synthesize secondOptionView=_secondOptionView;
@property(readonly, nonatomic) YTEmergencySupportActionView *firstOptionView; // @synthesize firstOptionView=_firstOptionView;
- (void)handleOptionTap:(id)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
