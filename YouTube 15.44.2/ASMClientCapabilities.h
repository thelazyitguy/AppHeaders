//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ASMAndroidIntentCapabilities, ASMCardCapabilities, ASMNativeCapabilities, ASMWebviewCapabilities, NSMutableArray;

@interface ASMClientCapabilities : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASMAndroidIntentCapabilities *androidIntentCapabilities; // @dynamic androidIntentCapabilities;
@property(nonatomic) _Bool bottomNavigation; // @dynamic bottomNavigation;
@property(nonatomic) _Bool browserAuthentication; // @dynamic browserAuthentication;
@property(retain, nonatomic) ASMCardCapabilities *cardCapabilities; // @dynamic cardCapabilities;
@property(nonatomic) _Bool footer; // @dynamic footer;
@property(nonatomic) _Bool hasAndroidIntentCapabilities; // @dynamic hasAndroidIntentCapabilities;
@property(nonatomic) _Bool hasBottomNavigation; // @dynamic hasBottomNavigation;
@property(nonatomic) _Bool hasBrowserAuthentication; // @dynamic hasBrowserAuthentication;
@property(nonatomic) _Bool hasCardCapabilities; // @dynamic hasCardCapabilities;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(nonatomic) _Bool hasHats; // @dynamic hasHats;
@property(nonatomic) _Bool hasNativeCapabilities; // @dynamic hasNativeCapabilities;
@property(nonatomic) _Bool hasTopTabIcons; // @dynamic hasTopTabIcons;
@property(nonatomic) _Bool hasUsesStandardChevron; // @dynamic hasUsesStandardChevron;
@property(nonatomic) _Bool hasWebviewCapabilities; // @dynamic hasWebviewCapabilities;
@property(nonatomic) _Bool hats; // @dynamic hats;
@property(retain, nonatomic) ASMNativeCapabilities *nativeCapabilities; // @dynamic nativeCapabilities;
@property(retain, nonatomic) NSMutableArray *supportedAlternativeTypesArray; // @dynamic supportedAlternativeTypesArray;
@property(readonly, nonatomic) unsigned long long supportedAlternativeTypesArray_Count; // @dynamic supportedAlternativeTypesArray_Count;
@property(retain, nonatomic) NSMutableArray *supportedIconsArray; // @dynamic supportedIconsArray;
@property(readonly, nonatomic) unsigned long long supportedIconsArray_Count; // @dynamic supportedIconsArray_Count;
@property(retain, nonatomic) NSMutableArray *supportedItemTypesArray; // @dynamic supportedItemTypesArray;
@property(readonly, nonatomic) unsigned long long supportedItemTypesArray_Count; // @dynamic supportedItemTypesArray_Count;
@property(retain, nonatomic) NSMutableArray *supportedNativeActionsArray; // @dynamic supportedNativeActionsArray;
@property(readonly, nonatomic) unsigned long long supportedNativeActionsArray_Count; // @dynamic supportedNativeActionsArray_Count;
@property(retain, nonatomic) NSMutableArray *supportedOfflineScreensArray; // @dynamic supportedOfflineScreensArray;
@property(readonly, nonatomic) unsigned long long supportedOfflineScreensArray_Count; // @dynamic supportedOfflineScreensArray_Count;
@property(nonatomic) _Bool topTabIcons; // @dynamic topTabIcons;
@property(nonatomic) _Bool usesStandardChevron; // @dynamic usesStandardChevron;
@property(retain, nonatomic) ASMWebviewCapabilities *webviewCapabilities; // @dynamic webviewCapabilities;

@end

