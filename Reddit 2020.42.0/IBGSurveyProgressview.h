//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIProgressView;

@interface IBGSurveyProgressview : UIView
{
    unsigned long long _currentIndex;
    UIProgressView *_progressView;
    unsigned long long _total;
}

@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithCount:(unsigned long long)arg1;

@end
