//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBAnimationCurve;

@interface INKPBColorAnimation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) INKPBAnimationCurve *curve; // @dynamic curve;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) _Bool hasCurve; // @dynamic hasCurve;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasRgba; // @dynamic hasRgba;
@property(nonatomic) unsigned int rgba; // @dynamic rgba;

@end

