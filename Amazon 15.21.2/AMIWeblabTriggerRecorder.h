//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AMIWeblabTriggerRecorder : NSObject
{
    _Bool _shouldRecordTriggers;
    NSMutableDictionary *_weblabsAndTriggersAccessed;
}

@property(retain) NSMutableDictionary *weblabsAndTriggersAccessed; // @synthesize weblabsAndTriggersAccessed=_weblabsAndTriggersAccessed;
@property(nonatomic) _Bool shouldRecordTriggers; // @synthesize shouldRecordTriggers=_shouldRecordTriggers;
- (void).cxx_destruct;
- (id)weblabAndTreatmentDictionary;
- (void)insertWeblab:(id)arg1 andTreatment:(id)arg2;
- (id)init;

@end

