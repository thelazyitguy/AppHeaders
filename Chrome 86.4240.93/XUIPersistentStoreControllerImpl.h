//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/ELMFaultObserver-Protocol.h>
#import <ChromeInternal/ELMObserver-Protocol.h>
#import <ChromeInternal/XUIPersistentStoreController-Protocol.h>

@class ELMByteStore, ELMFaultSubscription, ELMSubscription, NSString, XUIPersistentStoreControllerImplWeakWrapper;
@protocol XUIPersistentStore;

@interface XUIPersistentStoreControllerImpl : NSObject <ELMObserver, ELMFaultObserver, XUIPersistentStoreController>
{
    XUIPersistentStoreControllerImplWeakWrapper *_weakWrapper;
    ELMSubscription *_globalUpdateSubscription;
    ELMFaultSubscription *_faultSubscription;
    NSString *_persistentKeyPrefix;
    id <XUIPersistentStore> _persistentStore;
    ELMByteStore *_byteStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ELMByteStore *byteStore; // @synthesize byteStore=_byteStore;
@property(readonly, nonatomic) id <XUIPersistentStore> persistentStore; // @synthesize persistentStore=_persistentStore;
@property(readonly, copy, nonatomic) NSString *persistentKeyPrefix; // @synthesize persistentKeyPrefix=_persistentKeyPrefix;
- (void)storeDidFault:(id)arg1 key:(id)arg2;
- (void)storeDidUpdate:(id)arg1 transaction:(id)arg2;
- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1 byteStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
