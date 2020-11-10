//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOAlertView.h>

@class MDCActivityIndicator, NSString, UILabel;

@interface GHKLoadingAlertView : GOOAlertView
{
    MDCActivityIndicator *_activityIndicator;
    UILabel *_loadingTextLabel;
}

- (void).cxx_destruct;
- (void)resolveBackgroundColor;
- (void)removeActivityIndicator;
- (void)addActivityIndicator;
- (void)traitCollectionDidChange:(id)arg1;
@property(copy, nonatomic) NSString *loadingText;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)show;
- (void)layoutSubviews;
- (id)init;

@end

