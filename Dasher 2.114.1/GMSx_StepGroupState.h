//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GMTTDStepGroup;

@interface GMSx_StepGroupState : NSObject
{
    _Bool _last;
    unsigned long long _index;
    GMSx_GMTTDStepGroup *_currentProto;
    GMSx_GMTTDStepGroup *_previousProto;
    GMSx_GMTTDStepGroup *_nextProto;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GMSx_GMTTDStepGroup *nextProto; // @synthesize nextProto=_nextProto;
@property(retain, nonatomic) GMSx_GMTTDStepGroup *previousProto; // @synthesize previousProto=_previousProto;
@property(retain, nonatomic) GMSx_GMTTDStepGroup *currentProto; // @synthesize currentProto=_currentProto;
@property(nonatomic) _Bool last; // @synthesize last=_last;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;

@end
