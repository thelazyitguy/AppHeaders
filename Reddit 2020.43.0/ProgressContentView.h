//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaseButton, UIImageView, UILabel, UIProgressView;

@interface ProgressContentView : UIView
{
    UILabel *_mainLabel;
    UIImageView *_imageView;
    BaseButton *_retryButton;
    UIProgressView *_progressView;
    UILabel *_metaTextLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *metaTextLabel; // @synthesize metaTextLabel=_metaTextLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) BaseButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void)setMetaText:(id)arg1 isError:(_Bool)arg2;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

