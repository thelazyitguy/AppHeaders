//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityConnectionTypeProvider-Protocol.h"

@class NSMapTable, NSString;

@interface SPTConnectivityConnectionTypeProviderBridge : NSObject <SPTConnectivityConnectionTypeProvider>
{
    unique_ptr_3396162c _connectionTypeProvider;
    NSMapTable *_observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) long long connectionType;
- (id)initWithConnectionTypeProvider:(unique_ptr_3396162c)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

