//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface YTShortsCameraSliderTrackView : UIView
{
    double _value;
    double _minimumDraggableValue;
    UIColor *_highlightTintColor;
    UIColor *_blockedTintColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *blockedTintColor; // @synthesize blockedTintColor=_blockedTintColor;
@property(retain, nonatomic) UIColor *highlightTintColor; // @synthesize highlightTintColor=_highlightTintColor;
@property(nonatomic) double minimumDraggableValue; // @synthesize minimumDraggableValue=_minimumDraggableValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (struct CGRect)highlightRegionRect;
- (struct CGRect)blockedRegionRect;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
