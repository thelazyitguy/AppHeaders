//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIPWebView, NSString, UIToolbar;
@protocol YTKoreanAgeVerificationViewDelegate;

@interface YTKoreanAgeVerificationView : UIView
{
    NSString *_navTitle;
    UIToolbar *_toolbar;
    GIPWebView *_webView;
    id <YTKoreanAgeVerificationViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTKoreanAgeVerificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancel:(id)arg1;
- (void)layoutSubviews;
- (void)loadRequest:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

