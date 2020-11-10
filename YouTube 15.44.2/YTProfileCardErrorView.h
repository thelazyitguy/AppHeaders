//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, YTFormattedStringLabel, YTQTMButton;
@protocol YTProfileCardErrorViewDelegate;

@interface YTProfileCardErrorView : UIView
{
    id <YTProfileCardErrorViewDelegate> _delegate;
    UIImageView *_errorImageView;
    YTFormattedStringLabel *_bodyLabel;
    YTQTMButton *_retryButton;
    double _errorViewMaxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double errorViewMaxWidth; // @synthesize errorViewMaxWidth=_errorViewMaxWidth;
@property(retain, nonatomic) YTQTMButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) YTFormattedStringLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(nonatomic) __weak id <YTProfileCardErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)retry;
- (id)accessibilityElements;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithErrorBody:(id)arg1 delegate:(id)arg2;

@end

