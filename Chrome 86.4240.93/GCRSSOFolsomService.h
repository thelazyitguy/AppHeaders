//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SSOFolsomService;

@interface GCRSSOFolsomService : NSObject
{
    id <SSOFolsomService> _folsomService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SSOFolsomService> folsomService; // @synthesize folsomService=_folsomService;
- (void)cancelReauthenticationWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reauthenticationIdentity:(id)arg1 presentingViewController:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sharedKeysForIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithSSOFolsomService:(id)arg1;

@end
