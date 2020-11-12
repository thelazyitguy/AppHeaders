//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRAssetEvent.h>

@interface CMRNetworkAddressEvent : CMRAssetEvent
{
    struct Handle<std::__1::shared_ptr<core::NetworkAddressEvent>, std::__1::shared_ptr<core::NetworkAddressEvent>> _cppRefHandle;
}

+ (id)create:(id)arg1 address:(id)arg2 networkType:(long long)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)forcedPublish;
- (long long)eventType;
- (_Bool)equals:(id)arg1;
- (id)key;
- (id)timestamp;
- (id)assetId;
- (long long)networkType;
- (id)networkAddress;
- (const shared_ptr_edb6d5b4 *)cppRef;
- (id)initWithCpp:(const shared_ptr_edb6d5b4 *)arg1;

@end
