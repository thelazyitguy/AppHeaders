//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UVSRatingControl-Protocol.h"

@class NSArray, NSString;

@interface UVSSmileysRating : UIControl <UVSRatingControl>
{
    NSArray *_smileys;
    long long _rating;
    double _height;
    NSString *_lowestRatingText;
    NSString *_highestRatingText;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *highestRatingText; // @synthesize highestRatingText=_highestRatingText;
@property(readonly, copy, nonatomic) NSString *lowestRatingText; // @synthesize lowestRatingText=_lowestRatingText;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) long long rating; // @synthesize rating=_rating;
- (id)smileyImage:(unsigned long long)arg1;
- (id)voiceOverAccessibilityLabel:(unsigned long long)arg1;
- (void)setSmileysFrames;
- (void)smileyButtonTouchUpInside:(id)arg1;
- (void)smileyButtonTouchUpOutside:(id)arg1;
- (void)smileyButtonTouchDown:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLowestRatingText:(id)arg1 highestRatingText:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

