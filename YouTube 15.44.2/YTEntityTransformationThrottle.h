//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, YTTimedAction;

@interface YTEntityTransformationThrottle : NSObject
{
    NSDate *_nextAllowedTransformation;
    YTTimedAction *_scheduledTransformation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTTimedAction *scheduledTransformation; // @synthesize scheduledTransformation=_scheduledTransformation;
@property(retain, nonatomic) NSDate *nextAllowedTransformation; // @synthesize nextAllowedTransformation=_nextAllowedTransformation;
- (_Bool)canTransform;

@end

