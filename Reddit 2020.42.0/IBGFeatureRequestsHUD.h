//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;
@protocol IBGFeatureRequestsHUDDelegate;

@interface IBGFeatureRequestsHUD : UIView
{
    _Bool _dismissOnTap;
    id <IBGFeatureRequestsHUDDelegate> _delegate;
    UIView *_containerView;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_tickImageView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIView *_icon;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *tickImageView; // @synthesize tickImageView=_tickImageView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <IBGFeatureRequestsHUDDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool dismissOnTap; // @synthesize dismissOnTap=_dismissOnTap;
- (void).cxx_destruct;
- (void)setText:(id)arg1 forLabel:(id)arg2;
- (void)switchFromIcon:(id)arg1 toIcon:(id)arg2;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)didTapOnView;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMode:(unsigned long long)arg1 text:(id)arg2 subtext:(id)arg3;
- (void)updateConstraints;
- (id)initWithText:(id)arg1 subtext:(id)arg2 mode:(unsigned long long)arg3;

@end
