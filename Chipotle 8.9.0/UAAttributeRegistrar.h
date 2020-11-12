//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAComponent.h>

@class NSOperationQueue, UAAttributeAPIClient, UADate, UAPersistentQueue, UAPreferenceDataStore, UIApplication;

@interface UAAttributeRegistrar : UAComponent
{
    UAPersistentQueue *_pendingAttributeMutationsQueue;
    UAAttributeAPIClient *_client;
    UAPreferenceDataStore *_dataStore;
    NSOperationQueue *_operationQueue;
    UIApplication *_application;
    UADate *_date;
}

+ (id)registrarWithDataStore:(id)arg1 apiClient:(id)arg2 operationQueue:(id)arg3 application:(id)arg4 date:(id)arg5;
+ (id)registrarWithConfig:(id)arg1 dataStore:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UADate *date; // @synthesize date=_date;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UAAttributeAPIClient *client; // @synthesize client=_client;
@property(retain, nonatomic) UAPersistentQueue *pendingAttributeMutationsQueue; // @synthesize pendingAttributeMutationsQueue=_pendingAttributeMutationsQueue;
- (void)onComponentEnableChange;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (void)updateAttributesForChannel:(id)arg1;
- (void)collapseQueuedPendingMutations;
- (void)deletePendingMutations;
- (void)savePendingMutations:(id)arg1;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1 apiClient:(id)arg2 operationQueue:(id)arg3 application:(id)arg4 date:(id)arg5;

@end
