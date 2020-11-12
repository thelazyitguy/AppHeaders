//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel;
@protocol A9VSFezEquivalentsHeaderDelegate;

@interface A9VSFezEquivalentsHeaderView : UIView
{
    id <A9VSFezEquivalentsHeaderDelegate> _delegate;
    UILabel *_headerTitleLabel;
    UIView *_imageContainerView;
    NSLayoutConstraint *_indicatorCenterXConstraint;
    UIImageView *_pagedModeImageView;
    UIImageView *_rowModeImageView;
    unsigned long long _selectedMode;
    UIView *_selectionIndicatorView;
}

@property(nonatomic) __weak UIView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
@property(nonatomic) unsigned long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) __weak UIImageView *rowModeImageView; // @synthesize rowModeImageView=_rowModeImageView;
@property(nonatomic) __weak UIImageView *pagedModeImageView; // @synthesize pagedModeImageView=_pagedModeImageView;
@property(retain, nonatomic) NSLayoutConstraint *indicatorCenterXConstraint; // @synthesize indicatorCenterXConstraint=_indicatorCenterXConstraint;
@property(nonatomic) __weak UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(nonatomic) __weak id <A9VSFezEquivalentsHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showEquivalentsLayoutModes:(_Bool)arg1;
- (void)setSelectedEquivalentsMode:(unsigned long long)arg1;
- (void)toggleLayoutMode;
- (void)updateConstraintsForMode:(unsigned long long)arg1;
- (void)setUpConstraints;
- (void)setUpInterface;
- (id)initWithLayoutMode:(unsigned long long)arg1;

@end
