//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/RCTBridgeModule-Protocol.h>
#import <ElectrodeContainer/RCTTurboModule-Protocol.h>

@class NSString, _RCTTypedModuleConstants;

@protocol NativeAppStateSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)removeListeners:(double)arg1;
- (void)addListener:(NSString *)arg1;
- (void)getCurrentAppState:(void (^)(NSArray *))arg1 error:(void (^)(NSArray *))arg2;
@end
