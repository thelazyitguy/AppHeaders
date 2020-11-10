//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, GLUELabel, SPTVocalRemovalFeedbackBannerViewStyle;

@interface SPTVocalRemovalFeedbackBannerContentView : UIView
{
    GLUEButton *_closeButton;
    GLUELabel *_titleLabel;
    SPTVocalRemovalFeedbackBannerViewStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTVocalRemovalFeedbackBannerViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEButton *closeButton; // @synthesize closeButton=_closeButton;
- (struct CGSize)intrinsicContentSize;
- (void)setupConstraints;
- (void)setupCloseButton;
- (void)setupTitleLabel;
- (id)initWithStyle:(id)arg1;

@end

