//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NlsAppLaunchDataProcess, NlsKeychainStorage;

@interface NlsAppLaunchDataProcessManager : NSObject
{
    NlsKeychainStorage *_keychainStorage;
}

+ (id)sharedInstance;
+ (void)setLProcesses:(id)arg1;
+ (id)lProcesses;
+ (void)setSdkInstances:(id)arg1;
+ (id)sdkInstances;
@property(retain) NlsKeychainStorage *keychainStorage; // @synthesize keychainStorage=_keychainStorage;
- (void).cxx_destruct;
- (void)removeLProcess:(id)arg1;
- (void)undefineLProcessForInstance:(id)arg1;
- (void)removeLProcessForInstance:(id)arg1;
- (void)addLProcess:(id)arg1;
- (void)addSdkInstance:(id)arg1;
- (id)getFirstDCRStaticEnabled;
- (void)resolveMasterAppId;
- (int)getIdxForInstance:(id)arg1;
- (void)setLProcessObject:(id)arg1 forInstance:(id)arg2;
@property(readonly) __weak NlsAppLaunchDataProcess *sharedMasterProcess;
- (void)resetMasterId:(id)arg1;
- (void)dealloc;
- (id)init;

@end
