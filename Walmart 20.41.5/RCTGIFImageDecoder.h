//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/RCTImageDataDecoder-Protocol.h>
#import <ElectrodeContainer/RCTTurboModule-Protocol.h>

@class NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTGIFImageDecoder : NSObject <RCTTurboModule, RCTImageDataDecoder>
{
}

+ (void)load;
+ (id)moduleName;
- (CDUnknownBlockType)decodeImageData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canDecodeImageData:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end
