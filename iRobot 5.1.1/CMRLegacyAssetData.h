//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRLegacyAssetData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::LegacyAssetData>, std::__1::shared_ptr<core::LegacyAssetData>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getMacAddress;
- (void)setMacAddress:(id)arg1;
- (id)getHomeSSID;
- (void)setHomeSSID:(id)arg1;
- (id)getRemoteHostUrl;
- (void)setRemoteHostUrl:(id)arg1;
- (id)getLocalAddress;
- (void)setLocalAddress:(id)arg1;
- (id)getAssetPassword;
- (void)setAssetPassword:(id)arg1;
- (id)getAssetInfo;
- (void)updateAssetInfo:(id)arg1;
- (const shared_ptr_59d0b55e *)cppRef;
- (id)initWithCpp:(const shared_ptr_59d0b55e *)arg1;

@end
