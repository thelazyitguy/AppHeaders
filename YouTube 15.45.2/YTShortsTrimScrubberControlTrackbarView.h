//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface YTShortsTrimScrubberControlTrackbarView : UIView
{
    double _normalizedTimeValue;
}

@property(nonatomic) double normalizedTimeValue; // @synthesize normalizedTimeValue=_normalizedTimeValue;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)unplayedTimeRect;
- (struct CGRect)currentTimeRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end
