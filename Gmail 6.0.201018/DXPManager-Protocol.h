//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIViewController;
@protocol DXPFeedbackPSDGenerator, DXPPasteboardProtectionLibrary, DXPSharingProtectionLibrary, SSOIdentity;

@protocol DXPManager
@property(readonly, nonatomic) id <DXPFeedbackPSDGenerator> feedbackGenerator;
@property(readonly, nonatomic) id <DXPSharingProtectionLibrary> sharingProtectionLibrary;
@property(readonly, nonatomic) id <DXPPasteboardProtectionLibrary> pasteboardProtectionLibrary;
- (NSString *)settingsString;
- (UIViewController *)settingsViewController;
- (void)setPrimaryIdentity:(id <SSOIdentity>)arg1;
@end
