//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASMCircleView, QTMActivityIndicator;

@interface ASMProfilePictureLoadingView : UIView
{
    QTMActivityIndicator *_loadingIndicator;
    ASMCircleView *_loadingBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASMCircleView *loadingBackgroundView; // @synthesize loadingBackgroundView=_loadingBackgroundView;
@property(retain, nonatomic) QTMActivityIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)setupLoadingBackgroundView;
- (void)setupIndicatorView;
- (void)updateLoadingStateViewsLayout;
- (void)layoutSubviews;
- (void)dismissLoadingState;
- (void)showLoadingState;

@end
