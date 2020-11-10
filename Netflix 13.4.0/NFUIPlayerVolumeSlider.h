//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSArray, UIColor;

@interface NFUIPlayerVolumeSlider : UISlider
{
    _Bool _drawMinimumTrack;
    _Bool _drawMaximumTrack;
    UIColor *_minimumTrackTintColor;
    UIColor *_maximumTrackTintColor;
    NSArray *_thumbImages;
    struct CGRect _trackRect;
    struct CGRect _minimumTrackRect;
    struct CGRect _maximumTrackRect;
    struct CGRect _thumbRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool drawMaximumTrack; // @synthesize drawMaximumTrack=_drawMaximumTrack;
@property(nonatomic) _Bool drawMinimumTrack; // @synthesize drawMinimumTrack=_drawMinimumTrack;
@property(retain, nonatomic) NSArray *thumbImages; // @synthesize thumbImages=_thumbImages;
@property(nonatomic) struct CGRect thumbRect; // @synthesize thumbRect=_thumbRect;
@property(nonatomic) struct CGRect maximumTrackRect; // @synthesize maximumTrackRect=_maximumTrackRect;
@property(nonatomic) struct CGRect minimumTrackRect; // @synthesize minimumTrackRect=_minimumTrackRect;
@property(nonatomic) struct CGRect trackRect; // @synthesize trackRect=_trackRect;
- (id)maximumTrackTintColor;
- (id)minimumTrackTintColor;
- (void)handleControlEventValueChanged:(id)arg1;
- (void)initSlider;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbTintColor:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateForValueChange:(float)arg1;
- (id)thumbImageFromIcon:(id)arg1 attributes:(id)arg2 size:(struct CGSize)arg3;

@end
