//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GMTTDStep;

@interface GMSx_StepState : NSObject
{
    _Bool _lastInStepGroup;
    _Bool _lastInRoute;
    unsigned long long _indexInStepGroup;
    unsigned long long _indexInRoute;
    GMSx_GMTTDStep *_currentProto;
    GMSx_GMTTDStep *_previousProto;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GMSx_GMTTDStep *previousProto; // @synthesize previousProto=_previousProto;
@property(retain, nonatomic) GMSx_GMTTDStep *currentProto; // @synthesize currentProto=_currentProto;
@property(nonatomic) _Bool lastInRoute; // @synthesize lastInRoute=_lastInRoute;
@property(nonatomic) unsigned long long indexInRoute; // @synthesize indexInRoute=_indexInRoute;
@property(nonatomic) _Bool lastInStepGroup; // @synthesize lastInStepGroup=_lastInStepGroup;
@property(nonatomic) unsigned long long indexInStepGroup; // @synthesize indexInStepGroup=_indexInStepGroup;

@end
