//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTPersistentStateControllerExternalWeakReferenceChanged-Protocol.h>

@class GSZCounter, NSString;
@protocol GSZStreamzService;

@interface YTPersistentStateControllerExternalWeakReferenceChanged : NSObject <YTPersistentStateControllerExternalWeakReferenceChanged>
{
    id <GSZStreamzService> _streamzService;
    GSZCounter *_counter;
}

- (void).cxx_destruct;
- (void)incrementBy:(long long)arg1 withStateEntryDataType:(id)arg2 expTag:(id)arg3;
- (void)incrementWithStateEntryDataType:(id)arg1 expTag:(id)arg2;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

