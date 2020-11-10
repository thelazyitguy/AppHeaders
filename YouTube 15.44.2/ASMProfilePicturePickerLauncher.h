//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIDAvatarUploadController;
@protocol ASMReachability, ASMSessionInternal, SSOService;

@interface ASMProfilePicturePickerLauncher : NSObject
{
    id <ASMReachability> _reachability;
    id <SSOService> _ssoService;
    id <ASMSessionInternal> _session;
    GIDAvatarUploadController *_uploadController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GIDAvatarUploadController *uploadController; // @synthesize uploadController=_uploadController;
@property(retain, nonatomic) id <ASMSessionInternal> session; // @synthesize session=_session;
@property(retain, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) id <ASMReachability> reachability; // @synthesize reachability=_reachability;
- (void)openHelpURL:(id)arg1 parentViewController:(id)arg2 userInterfaceStyle:(unsigned long long)arg3;
- (void)launchProfilePictureFlowFromController:(id)arg1 screenID:(int)arg2 sourceView:(id)arg3 sourceViewType:(unsigned long long)arg4 userInterfaceStyle:(unsigned long long)arg5 useUIKit:(_Bool)arg6 successHandler:(CDUnknownBlockType)arg7;
- (id)initWithReachability:(id)arg1 session:(id)arg2 uploadController:(id)arg3;

@end

