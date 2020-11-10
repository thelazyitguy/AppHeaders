//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBarButtonItemManager-Protocol.h"

@class NSHashTable, NSMutableArray, NSString;

@interface SPTBarButtonItemManagerImplementation : NSObject <SPTBarButtonItemManager>
{
    NSMutableArray *_registrations;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)barButtonItemsForPageController:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (void)unregisterBarButtonItemProvider:(id)arg1;
- (void)registerBarButtonItemProvider:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (id)registrationForIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

