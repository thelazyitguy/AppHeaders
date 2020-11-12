//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/UIImagePickerControllerDelegate-Protocol.h>
#import <ChromeInternal/UINavigationControllerDelegate-Protocol.h>

@class NSString, SSOIdentity, SSOService, UIView, UIViewController;
@protocol ASMSessionInternal;

@interface GIDAvatarUploadController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIViewController *_viewController;
    SSOIdentity *_identity;
    SSOService *_ssoService;
    unsigned long long _sourceViewType;
    UIView *_sourceView;
    unsigned long long _userInterfaceStyle;
    id <ASMSessionInternal> _session;
    CDUnknownBlockType _errorHandler;
}

+ (void)removeProfilePictureForIdentity:(id)arg1 ssoService:(id)arg2 sourceViewController:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
+ (void)startImageDeletionFlowOnViewController:(id)arg1 forIdentity:(id)arg2 ssoService:(id)arg3 userInterfaceStyle:(unsigned long long)arg4 useUIKit:(_Bool)arg5 session:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) id <ASMSessionInternal> session; // @synthesize session=_session;
@property(nonatomic) unsigned long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long sourceViewType; // @synthesize sourceViewType=_sourceViewType;
@property(retain, nonatomic) SSOService *ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showSettingsDialogWithTitle:(id)arg1 fromViewController:(id)arg2 session:(id)arg3 useUIKit:(_Bool)arg4;
- (void)requestPermissionAndShowPhotoLibraryWithImagePicker:(id)arg1 fromViewController:(id)arg2 session:(id)arg3 useUIKit:(_Bool)arg4;
- (void)requestPermissionAndShowCameraWithImagePicker:(id)arg1 fromViewController:(id)arg2 session:(id)arg3 useUIKit:(_Bool)arg4;
- (void)uploadProfilePicture:(id)arg1;
- (id)imageNamed:(id)arg1;
- (void)showImagePicker:(id)arg1 forService:(id)arg2 identity:(id)arg3 sourceView:(id)arg4 sourceViewType:(unsigned long long)arg5 userInterfaceStyle:(unsigned long long)arg6 useUIKit:(_Bool)arg7 session:(id)arg8 errorHandler:(CDUnknownBlockType)arg9;
- (void)showImagePicker:(id)arg1 forService:(id)arg2 identity:(id)arg3 sourceViewType:(unsigned long long)arg4;
- (id)circularImageForService:(id)arg1 identity:(id)arg2 size:(double)arg3;
- (id)circularImageForService:(id)arg1 identity:(id)arg2;
- (void)onDismiss;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
