//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMConsentSettingsUtil : NSObject
{
}

+ (id)consentSignals;
+ (_Bool)didWithdrawPreviousConsent:(id)arg1;
+ (id)consentSettingsFromDictionary:(id)arg1;
+ (_Bool)isAnalyticsStorageDenied;
+ (_Bool)isAdStorageDenied;
+ (void)setConsentSettings:(id)arg1;
+ (id)consentSettings;

@end

