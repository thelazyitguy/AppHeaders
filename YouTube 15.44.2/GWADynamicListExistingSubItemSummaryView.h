//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class GWATintedImageView, UIButton, UIImage;
@protocol GWADynamicListExistingSubItemDelegate;

@interface GWADynamicListExistingSubItemSummaryView : UIStackView
{
    UIStackView *_mainStackView;
    UIStackView *_subItemStackView;
    GWATintedImageView *_tintedImageView;
    UIButton *_removeButton;
    UIImage *_image;
    unsigned long long _displayType;
    id <GWADynamicListExistingSubItemDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GWADynamicListExistingSubItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)removeButtonTapped:(id)arg1;
- (void)setSubviewLabelTextColor:(id)arg1;
- (void)applyDarkMode;
- (void)applyLightMode;
- (id)removeButton;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithSubItemForm:(id)arg1;

@end

