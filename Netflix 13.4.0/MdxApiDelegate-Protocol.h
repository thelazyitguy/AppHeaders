//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject, NSString;
@protocol MdxTarget;

@protocol MdxApiDelegate <NSObject>
- (void)confirmRemoteLogin:(NSString *)arg1 callback:(void (^)(_Bool))arg2;
- (void)loadJSSource:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;

@optional
- (void)availableDeviceCountChanged:(int)arg1;
- (void)deviceAvailable:(NSObject<MdxTarget> *)arg1;
- (void)startedStateChanged:(_Bool)arg1;
- (void)handledUnexpectedException:(NSError *)arg1;
- (void)remoteLoginSuccess:(id <MdxTarget>)arg1;
- (void)remoteLoginPinError:(id <MdxTarget>)arg1 error:(NSError *)arg2 callback:(void (^)(_Bool, NSString *))arg3;
- (void)confirmRemoteLoginPin:(id <MdxTarget>)arg1 callback:(void (^)(_Bool, NSString *))arg2;
@end
