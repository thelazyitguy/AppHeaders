//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface UABeveledLoadingIndicator : UIView
{
    UIActivityIndicatorView *_activity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
- (void)hide;
- (void)show;
- (void)setHidden:(_Bool)arg1;
- (void)awakeFromNib;
- (void)setup;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
