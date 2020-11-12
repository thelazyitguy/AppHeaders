//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSSet, NSString, UIActivityViewController;

@protocol DXPSharingProtectionLibrary
@property(nonatomic, getter=isSwizzlingActivityViewControllerAllowed) _Bool swizzlingActivityViewControllerAllowed;
@property(readonly, nonatomic) NSString *sharingRestrictedMessage;
- (UIActivityViewController *)activityViewControllerWithActivityItems:(NSArray *)arg1 applicationActivities:(NSArray *)arg2;
- (NSSet *)allowedIdentitiesWithSharedContents:(NSArray *)arg1 identities:(NSSet *)arg2;
- (NSSet *)identitiesWithSharingProtectionEnabled:(NSSet *)arg1;
- (_Bool)isSharingProtectionEnabledForAnyIdentity:(NSSet *)arg1;
@end
