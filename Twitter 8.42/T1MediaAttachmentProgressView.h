//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1MomentCapsuleProgressBarView, UIActivityIndicatorView, UIImageView;

@interface T1MediaAttachmentProgressView : UIView
{
    _Bool _activityIndicatorViewHidden;
    _Bool _progressBarViewHidden;
    _Bool _offlineCloudImageHidden;
    _Bool _offlineCloudImageViewHidden;
    UIActivityIndicatorView *_activityIndicatorView;
    T1MomentCapsuleProgressBarView *_progressBarView;
    UIImageView *_offlineCloudImageView;
    _Bool _shouldHideOfflineCloud;
    unsigned long long _style;
    unsigned long long _state;
    double _progress;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool shouldHideOfflineCloud; // @synthesize shouldHideOfflineCloud=_shouldHideOfflineCloud;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)_setOfflineCloudImageViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateOfflineCloudImageViewHiddenAnimated:(_Bool)arg1;
- (void)_setOfflineCloudImageHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setProgressBarViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setActivityIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateViews;
- (void)setState:(unsigned long long)arg1 progress:(double)arg2;
- (void)_updateStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

