//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "YTPageStyling-Protocol.h"

@class NSString, UIImageView, YTQTMButton, YTViewGroup;
@protocol YTMySubsContentFilterViewDelegate;

@interface YTMySubsContentFilterView : UICollectionViewCell <YTPageStyling>
{
    _Bool _dropDownEnabled;
    YTViewGroup *_buttonViewGroup;
    YTQTMButton *_titleButton;
    id <YTMySubsContentFilterViewDelegate> _delegate;
    UIImageView *_downArrow;
}

+ (struct CGSize)preferredSizeWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *downArrow; // @synthesize downArrow=_downArrow;
@property(nonatomic) __weak id <YTMySubsContentFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDropDownButton;
- (void)didTapButton:(id)arg1;
- (id)buttonFromButtonRenderer:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (void)addButton:(id)arg1;
- (void)setDropDownEnabled:(_Bool)arg1;
- (void)setSortFilterRenderer:(id)arg1;
- (void)setTitle:(id)arg1 accessibility:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
