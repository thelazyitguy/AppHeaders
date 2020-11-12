//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSString, _RCTTypedModuleConstants;

@protocol NativeStatusBarManagerIOSSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)setHidden:(_Bool)arg1 withAnimation:(NSString *)arg2;
- (void)setStyle:(NSString *)arg1 animated:(_Bool)arg2;
- (void)removeListeners:(double)arg1;
- (void)addListener:(NSString *)arg1;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
- (void)getHeight:(void (^)(NSArray *))arg1;
@end
