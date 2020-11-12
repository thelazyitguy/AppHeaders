//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSObject-Protocol.h>
#import <Module_Framework/UDCOptions-Protocol.h>

@class GPBInt32Array, PHTPhenotypeExperimentTokens;
@protocol GIDBrowserOpener;

@protocol ASMOptions <UDCOptions, NSCopying, NSObject>
@property(readonly, nonatomic) _Bool enableOctarineFontZoom;
@property(readonly, nonatomic) _Bool enableFauxbake;
@property(readonly, nonatomic) _Bool usePageSheetPresentation;
@property(readonly, nonatomic) _Bool enableNewOctarineHeader;
@property(readonly, nonatomic) _Bool useUIKit;
@property(readonly, nonatomic) _Bool useBottomNavigationBar;
@property(readonly, nonatomic) _Bool enablePromptCards;
@property(readonly, nonatomic) _Bool enableMyGoogleInWebView;
@property(readonly, nonatomic) _Bool enableMyGoogle;
@property(readonly, nonatomic) _Bool enableNativeProfilePictureFlow;
@property(readonly, nonatomic) unsigned long long userInterfaceStyle;
@property(readonly, nonatomic) _Bool enableLocalAuthentication;
@property(readonly, nonatomic) _Bool enableULRSanityCheck;
@property(readonly, nonatomic) PHTPhenotypeExperimentTokens *experimentTokens;
@property(readonly, nonatomic) GPBInt32Array *experimentIDs;
@property(readonly, nonatomic) _Bool enableAccountSwitching;
@property(readonly, nonatomic) _Bool enableForcedFullscreenWebView;
@property(readonly, nonatomic) _Bool enableLoggingForAccountSettings;
@property(readonly, nonatomic) id <GIDBrowserOpener> browserOpener;
@property(readonly, nonatomic) long long serverEnvironment;
- (id)copy;
@end
