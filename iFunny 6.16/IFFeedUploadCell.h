//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFFeedCell.h>

@class FNContentScrollView, FNNoContentView, UIImageView, UILabel, UIView;

@interface IFFeedUploadCell : IFFeedCell
{
    FNContentScrollView *_progressScroll;
    UIView *_progressContentView;
    UILabel *_progressLabel;
    UIImageView *_preloaderArrow;
    FNNoContentView *_noContentView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateAppear;
- (void)removeProgressView;
- (void)animateProgressViewAppear;
- (void)initProgressViewIfNeed;
- (void)checkAndAddAnimationForPreloaderArrow;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)stopActivity;
- (void)startActivity;
- (void)setContent:(id)arg1;
- (void)awakeFromNib;

@end
