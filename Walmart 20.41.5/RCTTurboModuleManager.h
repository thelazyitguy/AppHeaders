//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/RCTTurboModuleLookupDelegate-Protocol.h>

@class NSString, RCTBridge;
@protocol RCTTurboModuleManagerDelegate, RCTTurboModulePerformanceLogger;

@interface RCTTurboModuleManager : NSObject <RCTTurboModuleLookupDelegate>
{
    struct Runtime *_runtime;
    shared_ptr_cb283e74 _jsInvoker;
    id <RCTTurboModulePerformanceLogger> _performanceLogger;
    id <RCTTurboModuleManagerDelegate> _delegate;
    RCTBridge *_bridge;
    struct unordered_map<std::__1::basic_string<char>, id<RCTTurboModule>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, id<RCTTurboModule>>>> _rctTurboModuleCache;
    struct unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<facebook::react::TurboModule>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<facebook::react::TurboModule>>>> _turboModuleCache;
    struct mutex _rctTurboModuleCacheLock;
    // Error parsing type: {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >="__a_value"AB}}, name: _invalidating
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)bridgeDidInvalidateModules:(id)arg1;
- (void)bridgeWillInvalidateModules:(id)arg1;
- (_Bool)moduleIsInitialized:(const char *)arg1;
- (id)moduleForName:(const char *)arg1 warnOnLookupFailure:(_Bool)arg2;
- (id)moduleForName:(const char *)arg1;
- (void)installJSBindingWithRuntime:(struct Runtime *)arg1;
- (void)setUpRCTTurboModule:(id)arg1 moduleName:(const char *)arg2;
- (id)provideRCTTurboModule:(const char *)arg1;
- (shared_ptr_3725e3cd)provideTurboModule:(const char *)arg1;
- (void)notifyAboutTurboModuleSetup:(const char *)arg1;
- (id)initWithBridge:(id)arg1 delegate:(id)arg2 jsInvoker:(shared_ptr_cb283e74)arg3 performanceLogger:(id)arg4;
- (id)initWithBridge:(id)arg1 delegate:(id)arg2 jsInvoker:(shared_ptr_cb283e74)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
